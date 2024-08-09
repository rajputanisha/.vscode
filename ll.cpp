#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* next;
  public :
  Node(int data1,Node* next1)
  {
    data = data1;
    next = next1;
  }
};


int main(){
int n = 5;
  vector<int>arr{2,5,0,,7};
  Node* y = new Node(arr[0],nullptr);
  cout<<y->data;
  return 0;
}