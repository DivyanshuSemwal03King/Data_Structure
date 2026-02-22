#include<iostream>
#include<vector>
using namespace std;
#define MAX 5

class Stack{
    int top;
   public :
     int arr[MAX];
     Stack(){
        top =-1;
     }

    void push(int n){
        if(top==MAX-1){
            cout<<"Stack OverFlow Condition "<<n<<" can't be Pushed"<<endl;
        }
        else{
            top++;
            arr[top]=n;
            cout<<n<<" Pushed into Stack"<<endl;

        }
        
    }
    void pop(){
        if(top==-1){
            cout<<"Stack UnderFlow Condition"<<endl;
        }
        else{
            cout<<arr[top]<<"Poped From the Stack"<<endl;
            top--;
           
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Stack s;
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.pop();
    s.pop();
    
    s.display();
    return 0;
}