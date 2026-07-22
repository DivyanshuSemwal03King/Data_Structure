#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int value, Node* prev=nullptr,Node* next = nullptr){
        this->data = value;
        this->prev = prev;
        this->next=next;
    }
};

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
     
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
    
}
