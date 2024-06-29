const libExpress = require('express');
const app = libExpress();
const PORT = 3000;

app.use(libExpress.json());

let tasks = [
    { id: 1, title: 'homework', description: 'need to complete homework', task_done: false },
    { id: 2, title: 'practicle', description: 'practicle completed', task_done: false }
];



app.get('/tasks', (req, res) => {
    res.status(200).json({ tasks });
});

app.post('/tasks', (req, res) => {

    const title = req.body.title
    const description = req.body.description

    
    const newTask = {
        id: tasks.length + 1,
        title: title,
        description: description,
        task_done: false
    };

    tasks.push(newTask);
    res.status(200).json({ task: newTask });
});


app.put('/tasks/:id', (req, res) => {
    const taskId = Number(req.params.id);
    let x = -1;
    let newTask = null;
    for (let i = 0; i < tasks.length; i++) {
        if (tasks[i].id == taskId) {
            newTask = { ...tasks[i], ...req.body };
            x = i;
            break;
        }
    }
    if (newTask != null) {
        tasks[x] = newTask;
        res.status(200).json(tasks[x]);
    }
    else {
        res.status(404).json({ error: 'Task not found' });
    }
});


app.patch('/tasks/:id', (req, res) => {
    const taskID = Number(req.params.id);
    let x = -1;
    let newUpdate = req.body;
    for (let i = 0; i < tasks.length; i++) {
        if(tasks[i].id == taskID){
            x = i;
            for(const key in newUpdate){
                if(key != 'id'){
                    tasks[x][key] = newUpdate[key]; 
                }
            }
        }
    }
    if(x>=0){
        res.status(200).json(tasks[x]);
    }
    else{
        res.status(404).json({error : "task not found"});
    }
});

app.delete('/tasks/:id',(req,res)=>{
    const taskId = Number(req.params.id);
    let x = -1;
    for(let i = 0; i < tasks.length; i++){
        if(tasks[i].id === taskId){
            x = i;
            break;
        }
    }
    if(x != (-1)){
        tasks.splice(x,1);
        res.status(200).json({success : "deleted"});
    }
    else{
        res.status(404).json({error : "task not found"});
    }
});


app.listen(PORT, () => {
    console.log(`Server is started on port 3000`);
});