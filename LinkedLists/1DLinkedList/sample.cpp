#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;

    Node() : data(0),next(nullptr){}
    Node(int value) : data(value),next(nullptr){}
    Node(int value,Node* next) : data(value),next(next){}
};

int main(){
    Node*  first = new Node(5,nullptr);
    Node* second = new Node(6,first);
    Node* third = new Node(7,second);

   Node* head = third;
    Node* temp = head;
    while(temp!=nullptr){
        cout<<"->"<<temp->data;
        temp = temp->next;
    }
   
}