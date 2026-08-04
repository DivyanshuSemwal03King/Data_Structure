#include<iostream>


using namespace std;

struct Node{
   int data;
   Node* next;
   Node(int value,Node* next=nullptr){
    this->data=value;
    this->next=next;
   }
};

Node* createCLL(int arr[], int n) {

    if (n == 0)
        return nullptr;

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for (int i = 1; i < n; i++) {

        Node* newNode = new Node(arr[i]);

        tail->next = newNode;
        tail = newNode;
    }

    tail->next = head;

    return head;
}

void Print(Node* head) {
    if (head == nullptr)
        return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = createCLL(arr, n);

    Print(head);
}