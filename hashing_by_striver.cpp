#include<iostream>
using namespace  std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i =0;i<n;i++){
cin>>arr[i];
  }

int hash[13] = {0};
for(auto it :arr){
  hash[it] +=1;
}
//how to fetch hash elements i don't know
 int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
}
// namespace 
