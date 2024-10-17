#include<iostream>
using namespace std;

int main() {
  int n;
  
  cout<<" Enter the number of element:";
  cin>>n;
  
  int arr[n];
  
  cout<<"Enter the number of element:";
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if (arr[i]>arr[j]){
        
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  
  cout<<"Array in ascending order:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
  }
  cout<<endl;
  
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if (arr[i]>arr[j]){
        
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  
  cout<<"Array in descending order:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
  }
  cout<<endl;
  
  return 0;
}