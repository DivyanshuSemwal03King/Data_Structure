#include<iostream>

using namespace std;

// Approch 1 Common Approch
struct Node{

    int data;
    Node* next;
   
      Node(int value, Node* nextptr){
        data = value;
        next = nextptr;
      }  
};

// Approch 2 LeetCode and Company Format 
struct LNode{
       
    int data;
    LNode* next;

    LNode() : data(0),next(nullptr){}
    LNode(int value) : data(value),next(nullptr){}
    LNode(int value, LNode* next) : data(value),next(next){}
};

int main(){
    int arr[5] = {1,2,3,4,5};
    Node* first = new Node(arr[0],nullptr);
    Node* second = new Node(arr[1],nullptr);
    Node* third = new Node(arr[2],nullptr);

    first->next = second;
    second->next = third;

    Node* head = first;

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

   

    // Approch 2
    //   LNode* first = new LNode(10);
    // LNode* second = new LNode(20);
    // LNode* third = new LNode(30);

    // first->next = second;
    // second->next = third;

    // LNode* head = first;

    // while (head != nullptr) {
    //     cout << head->data << " ";
    //     head = head->next;
    // }

    return 0;
}