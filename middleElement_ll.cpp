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


    Node* middleEle(Node* head) {

      Node* fast = head;
      Node*  slow = head;
      while(fast!=  NULL &&   fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
      }
      return slow;

    // if (!head) return nullptr;

    // // Step 1: Count the number of nodes in the linked list
    // int cnt = 0;
    // Node* temp = head;
    // while (temp->next != nullptr) {
    //     cnt++;
    //     temp = temp->next;
    // }

    // // Step 2: Find the middle element by iterating to the mid position
    // int mid = cnt / 2+1;
    // temp = head;
    // while (mid > 0) {
    //     temp = temp->next;
    //     mid--;
    // }

    // return temp;
}


//this
int main() {
    // Creating the linked list: 2 -> 3 -> 4 -> 5
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    // head->next->next->next = new Node(6);

    // Finding the middle element
    Node* middle = middleEle(head);

    // Printing the middle element
    if (middle) {
        cout << "The middle element is: " << middle->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }

    return 0;
}

