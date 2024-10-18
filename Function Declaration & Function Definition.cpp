#include <iostream>
using namespace std;

//Function Declaration
int add(int a,int b);

int main() {
  int x=5;
  int y=10;
  
  //Function call
  cout<<"Sum:"<<add(x,y)<<endl;
  
  return 0;
}

//Function Definition
int add(int a,int b) {
  return a+b;
}
