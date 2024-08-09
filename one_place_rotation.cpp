#include<iostream>
using namespace std;
int main(){
  int n = 5;
 int arr[]= {1,2,3,4,5};
 
 int temp = arr[0];
 for(int i =0;i<n;i++){
  arr[i] = arr[i+1];
  //aose karte aggge shift orr overirde karna kehta h issse
 }
 arr[n-1] = temp;
for( auto it :arr){
  cout<<it;
}
  return 0;
}