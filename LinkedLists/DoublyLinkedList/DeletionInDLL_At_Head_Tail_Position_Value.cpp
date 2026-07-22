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

Node *deleteHead(Node *head)
{
    if (head == nullptr)
        return nullptr;

    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }

    Node *temp = head;
    head = temp->next;
    head->prev = nullptr;

    delete temp;

    return head;
}

Node *deleteTail(Node *head)
{
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *prevNode = temp->prev;
    prevNode->next = nullptr;
    delete temp;
    return head;
}

Node *deleteKthNode(Node *head, int k)
{
    if (head == nullptr)
        return nullptr;
    if (k == 1)
    {
        return deleteHead(head);
    }
    Node *temp = head;
    int count = 1;
    while (temp != nullptr)
    {
        if (count == k)
            break;
        count++;
        temp = temp->next;
    }
    if (temp == nullptr)
        return head;

    Node *back = temp->prev;
    Node *front = temp->next;

    if (back != nullptr)
        back->next = front;
    if (front != nullptr)
        front->prev = back;

    delete temp;

    return head;
}

Node* deleteValueNode(Node* head,int value){
    if(head==nullptr) return nullptr;
    if(head->data==value) return deleteHead(head);
    Node* temp = head;
    while (temp!=nullptr && temp->data!=value)
    {
        temp=temp->next;
    }
    if(temp==nullptr) return head;
    Node* back = temp->prev;
    Node* front = temp->next;
    if(back!=nullptr) back->next =front;
    if(front!=nullptr) front->prev = back;
    delete temp;
    return head;
    
}

int main() // So head is now a dangling pointer (it points to freed memory). Using it is undefined behavior, which is why you don't get the expected output.
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrayToDLL(arr);
    head = deleteHead(head);
    print(head);
    cout << endl;
    head = deleteTail(head);
    print(head);
    cout << endl;
     head = deleteKthNode(head, 2);
    print(head);
    cout<<endl;
    head = deleteValueNode(head,4);
    print(head);
    return 0;
}
