#include<iostream>
#include<vector>
using namespace std;

struct  Node
{
    int data;
    Node* next;
    Node(int value, Node* next = nullptr){
        this->data=value;
        this->next=next;
    }
};

Node* arrayToLL(vector<int>& arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);

        mover->next = temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

Node* insertAtHead(Node* head, int val){
    Node* temp = new Node(val);
    temp->next=head;
    head=temp;
    return head;
}

Node* insertAtTail(Node* head,int val){
    if(head==nullptr) return new Node(val);

    Node* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
     temp->next = newNode;
     newNode->next = nullptr;

     return head;
}

Node* insertAtPosition(Node* head, int k, int val){
    if(head==nullptr) return new Node(val);
    if(k==1) return new Node(val,head);
    Node* temp = head; int count=1;
    while (temp!=nullptr && count < k-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=nullptr){
          Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next=newNode;
    }

    return head;
    
}

Node* insertAtBeforeValue(Node* head, int value, int el){
    if(head==nullptr) return new Node(el);
    if(head->data==value) return new Node(el,head);
    Node* temp = head;
    while (temp->next!=nullptr)
    {
         if(temp->next->data==value){
              Node* newNode = new Node(el);
              newNode->next = temp->next;
              temp->next = newNode;
              break;
         }
         temp = temp->next;
    }

    return head;

    
    
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arrayToLL(arr);
    Node* head1 = insertAtHead(head,7);
    Node* head2 = insertAtTail(head,6);
    Node* head3 = insertAtPosition(head,7,115);
    Node* head4 = insertAtBeforeValue(head,16,22);
    print(head4);

}

