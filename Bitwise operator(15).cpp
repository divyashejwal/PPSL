#include <iostream>
using namespace std;

int main() 
{
   int a=6,b=4;
   
   //Binary AND operator
   cout<<"a & b is"<<(a & b)<<endl;
   
   //Binary OR operator
   cout<<"a | b is"<<(a|b)<<endl;
   
   //Binary XOR operator
   cout<<"a^b is"<<(a^b)<<endl;
   
   //Left shift operator
   cout<<"a<<1 is"<<(a<<1)<<endl;
   
   //Right shift operator
   cout<<"a>>1 is"<<(a>>1)<<endl;
   
   //One's shift operator
   cout<<"~(a) is"<<~(a)<<endl;
   
   return 0;
}