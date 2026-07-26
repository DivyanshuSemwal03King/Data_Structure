#include <iostream>
#include <vector>
#include <stack>
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
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = mover->next;
    }

    return head;
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *reverseDLLByStack(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;
    Node *temp = head;
    stack<int> st;
    while (temp != nullptr)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp != nullptr)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

Node* reverseDLLByPointer(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* prev=nullptr;
    Node* curr= head;
    while(curr!=nullptr){
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrayToDLL(arr);
    print(head);
    cout << "\n";
    head = reverseDLLByStack(head);
    print(head);
    cout << "\n";
    head = reverseDLLByPointer(head);
    print(head);
}
