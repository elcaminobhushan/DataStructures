/*Queues*/
function Queue()
{
  collection = []; //This acts as a queue
  //This method prints the queue
  this.print = function()
  {
    console.log(collection);
  };
 
  //This method adds data to the queue
  this.enqueue = function(element)
  {
    collection.push(element);
  };
  
  //This method pops out the first element
  this.dequeue = function()
  {
    return collection.shift();
  };
  
  //This method returns the first element without removing it
  this.front = function()
  {
    return collection[0];
  };
  
  //This method returns the size of the stack
  this.size = funtion()
  {
    return collection.length;
  };
  
  //This method tells if the array is empty
  this.isEmpty = function()
  {
    return ( collection.length === 0);
  };
  
}
