#include <iostream>
using namespace std;

//Following function that two parameters 'x' and 'y' as input&return max of two input number
int max(int x,int y)
{
  if(x>y)
  return x;
  else
  return y;
}
//main function that doesnt receive any parameters and returns integer
int main()
{
  int a=10;
  int b=20;
  
  //Calling above function to find max of'a'and 'b'
  int m=max(a,b);
  
  cout<<"m is"<<m;
  return 0;
}
