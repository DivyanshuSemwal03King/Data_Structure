#include<iostream>
using namespace std;


void Print( int a,int n){
    if(a>n){
        return ;
    }
    cout<<a<<endl;
    
    Print(a+1,n);

}
void printNumbers(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Recursive Call
    printNumbers(n - 1);

    // Work (Printing after recursion)
    cout << n << endl;
}

int main(){
    Print(1,10);
    return 0;
}