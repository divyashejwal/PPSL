#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  string userInput;
  
  cout<<"Enter some text:";
  getline(cin,userInput);
  
  ofstream outFile("myFile.txt");
  if(outFile.is_open());
  {
    outFile<<userInput;
    outFile.close();
    
    cout<<"Data saved tof file."<<endl;
  }
  else
  {
    cout<<"Enter opening file for writing."<<endl;
  }
  
  string fileContent;
  ifstream infile("myFile.txt");
  if(infile.is_open())
  {
    getline(infile,fileContent);
    infile.close();
  } 
  else
  {
    cout<<"Data read from file:"<<fileContent<<endl;
 
  cout<<"Error opening file for reading."<<endl;
}

return 0;
}