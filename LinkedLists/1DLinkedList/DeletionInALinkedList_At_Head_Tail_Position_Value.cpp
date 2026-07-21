#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value, Node *next = nullptr)
    {
        data = value;
        next = next;
    }
};

Node *arrayToLinkedList(vector<int> arr)
{
    int n =sizeof(arr)/sizeof(arr[0]);
    Node* head = new Node(arr[0]);
    Node* tail = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        tail->next = temp;
        tail = temp;
    }
    return head;
}

void Print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}

Node* deleteHead(Node* head){
    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* deleteTail(Node* head){
    if(head==nullptr||head->next==nullptr) return nullptr;

    Node* temp = head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp;
    temp->next = nullptr;
    return head;
}

Node* deleteAtKthNode(Node* head , int k){
    if(head==nullptr) return head;
    if(k==1) deleteHead(head);

    int count = 0;
    Node* temp = head;
    Node* prev = nullptr;

    while (temp!=nullptr)
    {
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
    
}

Node* removeElement(Node* head,int value){
    if(head==nullptr) return head;
    if(head->data==value) deleteHead(head);

    Node* temp = head;
    Node* prev = nullptr;
    while (temp!=nullptr)
    {
        if(temp->data==value){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp=temp->next;
    }
  return head;    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Node* head = arrayToLinkedList(arr);
    cout<<"Before deletion: ";
    Print(head);
    Node* newHead = deleteHead(head);
    cout<<"\nAfter deleting head: ";
    Print(newHead);
    Node* newHead2 = deleteTail(newHead);
    cout<<"\nAfter deleting tail: ";
    Print(newHead2);
    Node* newHead3 = deleteAtKthNode(newHead2, 3);
    cout<<"\nAfter deleting 3rd node: ";
    Print(newHead3);
    Node* newHead4 = removeElement(newHead3, 5);
    cout<<"\nAfter deleting node with value 5: ";
    Print(newHead4);

}
