#include<bits/stdc++.h>
using namespace std;
//basic how to create a node in linked list
struct  Node{

  /* data */
  int data;
  Node* next;

//constructor
Node(int data1, Node* next1){
  data = data1;
  next = next1;

}
Node(int data1){
  data = data1;
  next =  nullptr;
}
};
//this node is create  and with help f icnstructionwe instiale the value also now what we are going to do is rhat






int main(){
  vector<int> arr={2,5,8,7};
    Node* y= new Node(arr[0]);
    cout<<y<<'\n'; // returns the memory value
    cout<<y->data<<'\n';
 // output 0x1056f28
// 2 

  return 0;
}