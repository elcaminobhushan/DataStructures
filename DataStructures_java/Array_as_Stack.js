var letters = []; //This is our stack
var word = "racecar";
var rword = "";
//Copying word to stack
for(int i = 0; i < word.length; i++)
{
  letters.push(word[i]);
}
//From Stack to reverse word
for(int i = 0; i < word.length; i++)
{
  rword += letters.pop();
}
//Comparing 
if(word === rword)
{
  console.log('String is palindrome');
}
else
{
  console.log('String is not palindrome');
}
