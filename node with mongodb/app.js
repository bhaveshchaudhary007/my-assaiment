/*Q1. What is MongoDB.
    mongoDB is a NoSQL database management system that uses a data-oriented database model. Unlike traditional relational databases, MongoDB does not store data in tables with rows and columns; stores dynamic, JSON-like data with dynamic schemas. This means that each record in the MongoDB database can have its own structure that can be updated over time.
*/
/*
Q2. What is difference between mongo DB and SQL
   - SQL databases follow a tabular structure while MongoDB follows a document-oriented data model
   - In SQL databases, a predefined schema is required, specifying the structure of each table, including the data types of each column, while MongoDB is schema-less or schema-flexible. Each document can have its own structure, and new fields can be added to documents without affecting other documents in the collection.
   - SQL databases use the SQL query language, which is standardized and well-established, while MongoDB uses a JSON-like query language for querying documents.
   - SQL databases typically scale vertically, while MongoDB is designed to scale out horizontally.
   - SQL databases are often used for applications that require complex queries, transactions, and strong consistency guarantees, such as banking systems, while MongoDB is well-suited for applications with rapidly evolving requirements, unstructured or semi-structured data, and horizontal scalability requirements, such as content management systems.
*/

const { ObjectId } = require('bson');
const libExpress = require('express');
const MongoClient = require('mongodb').MongoClient
require('dotenv').config();

const app = libExpress();

app.use(libExpress.json());

const client = new MongoClient(process.env.MONGO_URL);
const objectId = new ObjectId();
    async function dbConnection(){
        
    }

/*
//  Q3. Create database for online shopping app.

    Create a New Database:MongoDB creates a database when you first store data in it. 
    So, to create a new database, simply start using it by storing some data.
    // for our case 
    client.connect();   // mongoDB connection
    const database = client.db('online_shopping');    // it will creates a new database if not existed

*/



/*
//  Q4. Create Require collections for online shopping app and documents.
//  to create new collection in existig database
        database.createCollection(collectionName);
*/




/*
Q5. Write command to show all data from product collections and sort in ascending order.
*/
app.get('/Product', async(req, res)=>{
    try{
        await client.connect(); 
        const db = await client.db(process.env.MONGO_DB).collection(process.env.DB_PRODUCT).find().sort({name:1}).toArray();    
        res.status(200).json(db);
        console.log("get data");
    }
    catch(e){
        console.log(e)
    }
    finally{
        await client.close();
        console.log("mongo connection closed");
    }
})

/*
Q6. Update product price
*/
app.patch('/Product/:id', async (req, res) => {
    const Id = req.params.id;
    const updatedPrice = req.body;
    try{
        await client.connect();
        await client.db(process.env.MONGO_DB).collection(process.env.DB_PRODUCT).updateOne({_id:objectId.Id},{$set:updatedPrice});
        res.status(200).json({message : "updated"})
        coknsole.log("updated");
    }
    catch(e){console.log(e);}
    finally{
        await client.close();
        console.log("mongo connection closed");
    }

})


/*
Q7. Write command to delete particular product.
*/
app.delete('/Product/:id', async(req, res)=>{
    const Id = req.params.id;
    try{
        await client.connect();
        await client.db(process.env.MONGO_DB).collection(process.env.DB_PRODUCT).deleteOne({_id : objectId.Id});
        
        res.status(200).json({message : "product deleted"});
        console.log("product deleted");
    }
    catch(e){
        console.log(e);
    }
    finally{
        await client.close();
        console.log("mongo connection closed");
    }
})

app.listen(3000,()=>{
    console.log("server started at port 3000");
})
