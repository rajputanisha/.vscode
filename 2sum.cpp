// #include <iostream>
// using namespace std;

// int main() {
//   int n = 5;
//   int arr[] = {2, 4, 5, 3, 1};
//   int target = 5;
//   bool flag = false; // Initialize flag to false

//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) { // Start inner loop from i + 1
//       if (arr[i] + arr[j] == target) {
//         flag = true; // Set flag to true if a valid pair is found
//         break; // Terminate inner loop early
//       }
//     }
//     if (flag) break; // Terminate outer loop early if a valid pair is found
//     //warna loop chlta rahegaya 

//   }

//   if (flag) {
//     cout << "found";
//   } else {
//     cout << "not found";
//   }

//   return 0;
// }
////////////////////////////////////////////////////Another approach/////////////
//  int n = 5;
//   int arr[] = {2, 4, 5, 3, 1};
//   int target = 5;
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n = 5;
  int arr[] = {3,5,5,3,1};
  int target = 6;

  unordered_map<int,int>mp;
    for(int i =0;i<n;i++){
      int res =  target-arr[i];
      if(mp.find(res) != mp.end()){
        string ans = "found";
      }

mp[arr[i]] = i;
    }
    
  cout<<



  return 0;
}