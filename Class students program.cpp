#include<iostream>
using namespace std;

class student{
  private:
  string name;
  int rollNumber;
  float marks;
  
  public:
  void inputDetails(){
  cout<<"Enter student's name:";
  cin>>name;
  cout<<"Enter roll number:";
  cin>>rollNumber;
  cout<<"Enter marks:";
  cin>>marks;
}

void displayDetails() {
  cout<<"\nStudent Details:\n";
  cout<<"Name:"<<name<<endl;
  cout<<"Roll Number:"<<rollNumber<<endl;
  cout<<"Marks:"<<marks<<endl;
}
};

int main() {
  
  student student1,student2;
  
  cout<<"Enter details for the first students:\n";
  student1.inputDetails();
  
  cout<<"\n Enter details for the second student:";
  
  cout<<"Enter details for the second student:\n";
  student1.displayDetails();
  
  cout<<"\n Enter details for the second student:";
  student2.displayDetails();
  
  return 0;
}

