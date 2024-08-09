#include<bits/stdc++.h>
using namespace std;
int main(){
  int n = 6;
  int arr[] = {2,0,2,1,1,0};
  // i am going to use sort function which tksed o(nlogn time comlexity)
  // this is a brute force 
  //after that o am goinfg to use usse   three vector
  vector<int>ones;
  vector<int>zero;
  vector<int>twos;
  for(auto it :arr)
 {
   if(it == 0){
    zero.push_back(it);
   }
   else if(it ==1){
    ones.push_back(it);
   }
   else{
    twos.push_back(it);
   }
 }
 // after seprating each aay o amgoin to puh fira 0nes 
 int index = 0;
 for(int i =0;i<zero.size();i++){
  arr[index] = zero[i];
  index++;
}
//

 for(int i =0;i<ones.size();i++){
  arr[index++] = ones[i];
 }
for(int i =0;i<twos.size();i++){
  arr[index++] = twos[i];
 }
 for(auto it :arr){
  cout<<it<<" ";
 }
 return 0;
}
// //   // Input:
// // //  nums = [2,0,2,1,1,0]
// // // Output
// // // : [0,0,1,1,2,2]
// //   return 0;
// // }

// /// another approach would be bec it taked i guess extra space  i thought nums = [2,0,2,1,1,0]
// // i am going to use  two pointer appraoch
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n = 6;
//   int arr[] = {2,0,2,1,1,0};
//   int i =0;
//   int j = n-1;
// while(i<j){
//   if(arr[i] == 0 && (arr[j] == 1 || arr[j] ==2)){
//     swap(arr[i],arr[j]);
//     i++;
//     j--;

//   }
//   else if(arr[i] ==0){
//     continue;
//     i++;
//   }
//   else if(arr[j] == 2){
//     j--;
//     }

// }
//   return 0;}

/// this ye bhi soch skti thi tu appriach  like 
//     it alredy metioned ther ther is only threee elems 
// no i ma cgoint to sotre    three vaiabl
// esd like ocnt 0 cnt1 an cnt 2 thab tak loop chla ke i amgoing to put those ielemts in their spcific posiitpn
// #include<iostream>
// using namespace std;
// int main(){
//   int n = 6;
//  int arr[] = {2,0,2,1,1,0};
// int cnt1 =0;
// int cnt2 = 0;
// int cnt3 = 0;
// for(int i =0;i<n;i++){
//   if(arr[i]==0){
//     cnt1++;
//   }else if(arr[i]  ==1){
//     cnt2++;
//   }else{
//     cnt3++;
//   }
// }
// for(int i =0;i<=cnt1;i++){
//   arr[i] =0;
// }
//    for (int i = cnt1; i <= cnt2; i++) arr[i] = 1; // replacing 1's

//   for (int i = cnt2; i <=cnt3; i++) arr[i] = 2; // rep
// for(auto it :arr){
//   cout<<it<<" ";
// }
// return 0;
// }
