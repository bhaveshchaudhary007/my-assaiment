const express = require('express');

const app = express();


app.use(express.json()); 


let products = [
    { id: 1, name: 'Laptop', price: 9999, category: 'Electronics' },

    { id: 2, name: 'Smartphone', price: 6999, category: 'Electronics' },

    { id: 3, name: 'Table', price: 199, category: 'Furniture' },

    { id: 4, name: 'Chair', price: 899, category: 'Furniture' },
   
    { id: 5, name: 'Shoes', price: 799, category: 'Fashion' }
];


app.get('/products', (req, res) => {

    res.json(products);
});

app.post('/products', (req, res) => {

    const product = req.body;
    product.id = products.length ? products[products.length - 1].id + 1 : 1

    products.push(product)
    res.status(201).json(product)
});


app.get('/products/:id', (req, res) => {

    const product = products.find(p => p.id === parseInt(req.params.id));
    if (product) {

        res.json(product)
    } else {

        res.status(404).send(' not found')
    }
});

app.put('/products/:id', (req, res) => {

    const product = products.find(p => p.id === parseInt(req.params.id));
    if (product) {
        Object.assign(product, req.body)

        res.json(product)
    } else {
        res.status(404).send('not found')

    }
});


app.delete('/products/:id', (req, res) => {
    const product = products.findIndex(p => p.id === parseInt(req.params.id));
    if (productI > -1) {
        const removedProduct = products.splice(product, 1)
        res.json(removedProduct);
    } else {
        res.status(404).send(' not found')
    }
});


app.get('/suggest-product', (req, res) => {
    if (products.length > 0) {

        const random = Math.floor(Math.random() * products.length);
        res.json(products[random])

    } else {
        res.status(404).send('No products available for suggestion');
    }

});


app.listen(3000, () => {

    console.log(`Server running at http://localhost:${3000}/`);

});

