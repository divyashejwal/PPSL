#include <iostream>
#include<fstream>
using namespace std;

int main() 
{
  string userInput;
  
  cout<<"Enter some text:";
  getline(cin,userInput);
  
  ofstream outFile("myfile.txt");
  if(outFile.is_open())
  
  outFile<<userInput;
  outFile.close();
  
  cout<<"Data saved to file."<<endl;
 } 
else 
{
  cout<<"Error opening file for writing."<<endl;

string fileContent;
ifstream infile("myfile.txt");
if(infile.is_open())
{

getline(infile,fileConent);
infile.close;
cout<<"Data read from file:"<<fileContent<<endl;
}
else
{
  cout<<"Error opening file for reading."<<endl;

return 0;
}
    