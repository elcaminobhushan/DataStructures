function PriorityQueue(){
  var collection = [];
  
  this.print = function(){
    console.log(collection);
  };
  
  this.enqueue = function(element){
    if(this.isEmpty){
      collection.push(element);
    }
    else{
      var added = false;
      for(i = 0; i < collection.length; i++){
        if(element[1] < collection[i,1]){
          collection.splice(i, 0, element);
          added = true;
        }
      }
      if(!added)
        collection.push(element);
    }
  };
  
  this.dequeue = function(){
    value =  collection.shift();
    return value[0];
  };
  
  this.front = function(){
    return collection[0,0];
  };
  
  this.size = function(){
    return collection.length;
  };
  
  this.isEmpty = function(){
    return collection.length === 0;
  };
}

var pq = new PriorityQueue(); 
pq.enqueue(['Beau Carnes', 2]); 
pq.enqueue(['Quincy Larson', 3]);
pq.enqueue(['Ewa Mitulska-Wójcik', 1])
pq.enqueue(['Briana Swift', 2])
pq.print();
pq.dequeue();
console.log(pq.front());
pq.print();
