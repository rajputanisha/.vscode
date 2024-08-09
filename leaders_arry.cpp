#include<iostream>
using namespace std;
int main(){
  int n =  5;
  int arr[] = {9,6,5,4,6};
  // leader in an arry
  // meansi thai ele is should or must be greater thsn  left and right ele thane we call it leader is_array
  for(int i =1;i<n-1;i++){
    if(arr[i] >arr[i-1] && arr[i] >arr[i+1]){
      cout<<arr[i]<<" is a leader in array"<<endl;
      break;
    }
  }
  cout<<"not leader elements"<<endl;
  return 0;
}