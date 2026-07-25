#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    Node(int value, Node *prev = nullptr, Node *next = nullptr)
    {
        this->data = value;
        this->prev = prev;
        this->next = next;
    }
};

Node *arrayToDLL(vector<int> &arr)
{
    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover= mover->next;
    }

    return head;

}

Node* insertionBeforeHead(Node* head,int val)
{
    if(head==nullptr) return new Node(val);
    Node* newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;

    return newNode;

}

Node* insertBeforeTail(Node* head,int val){
    if(head==nullptr) return new Node(val);

    if(head->next==nullptr){
        return insertionBeforeHead(head,val);
    }

    Node* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    Node* back = temp->prev;
    newNode->next = temp;
    newNode->prev = back;
    temp->prev = newNode;
    back->next = newNode;
    
    return head;
}

Node* insertBeforeKthNode(Node* head,int k,int val)
{
    if(head==nullptr) return head;
    if(k==1){
        return insertionBeforeHead(head,val);
    } 
    if(k<1) return head;
    Node* temp = head;
    int count = 1;
    while (temp!=nullptr)
    {
        if(count==k) break;
        count++;
        temp=temp->next;
    }
    if(temp==nullptr) return head;
    Node* newNode = new Node(val);
    Node* back = temp->prev;

    newNode->next = temp;
    newNode->prev = back;
    back->next = newNode;
    temp->prev= newNode;

    return head;
    
}

Node* insertBeforeValueNode(Node* head,int value, int val){
    if(head==nullptr) return head;
    if(head->data==value){
        return insertionBeforeHead(head,val);
    }
    Node* temp = head;
    while (temp)
    {
        if(temp->data==value) break;
        temp=temp->next;
    }
    if(temp==nullptr) return head;
    Node* back = temp->prev;
    Node* newNode= new Node(val);

    newNode->next = temp;
    newNode->prev=back;
    back->next = newNode;
    temp->prev=newNode;

    return head;
    
}




void Print(Node* head){
   Node* temp = head;
   while (temp)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arrayToDLL(arr);
    head = insertionBeforeHead(head,15);
    head = insertBeforeTail(head,25);
    head = insertBeforeKthNode(head,4,55);
    head=insertBeforeValueNode(head,2,333);
    
    Print(head);
   
}
