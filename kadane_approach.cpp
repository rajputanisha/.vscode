#include<bits/stdc++.h>
using namespace std;
int main(){
  //  arr = [-2,1,-3,4,-1,2,1,-5,4] 

// Output:
//  6 
//  Kadane's Algorithm : Maximum Subarray Sum in an Array


// 457

// 6
// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.
int n= 9;
int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
// int maxi = INT_MIN;
// int sum  =0;
// for(int i =0;i<9;i++){
//   sum += arr[i];
//   if(sum>0){
//   maxi = max(maxi,sum);
// }

// if(sum<0){
//   sum =0;
// }
// }
// cout<<maxi;
int maxi  =INT_MIN;
  for(int i = 0;i<n;i++){
    int sum =0;
     for(int j =  i;j<n;j++){
      sum += arr[j];
     maxi = max(maxi,sum);

    }
  }
  cout<<maxi;


return 0;

}