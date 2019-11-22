//Creates a Stack
var Stack = function()
{
  this.count = 0;
  this.storage =[];
  
  //adds to a stack
  this.push = function(value)
  {
    this.storage[this.count] = value;
    this.count++;
  }
  
  //Removes and Returns the value of a stack
  this.pop = function()
  {
    if(this.count === 0)
    {
      return undefined;
    }  
    var result = this.storage[this.count - 1];
    delete this.storage[this.count - 1];
    this.count--;
  }
  
  //Returns the size of the stack
  this.size = function()
  {
    return this.count;
  }
  
  //Returns the value at the end of the stack
  this.peek = function()
  {
    var result = this.storage[this.count - 1];
    return result;
  }
}
