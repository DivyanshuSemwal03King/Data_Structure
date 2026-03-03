#include<iostream>
using namespace std;

void Name(int n){
    if(n==0){
        return ;
    }
    cout<<"HEllo Dev"<<endl;
    Name(n-1);
}

int main(){
    Name(5);
    return 0;
}