#include<iostream>
#include<vector>
#include<algorithm>
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

int main(){
    int nums[] = {1,2,3,4,5};
    int size = sizeof(nums)/sizeof(nums[0]);
    Node* head = new Node(nums[0]);
    Node* mover = head;
    for(int i=1;i<size;i++){
        Node* temp = new Node(nums[i]);
        mover->next = temp;
        // mover = mover->next;
        mover = temp;
        
    }

      Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;

}
