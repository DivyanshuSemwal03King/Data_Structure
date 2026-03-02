#include<iostream>
#include<algorithm>
using namespace std;

 bool isPalindrome(int n) {
        int rev = 0;
        int preN = n;
        while(n!=0){
            int digit = n%10;
            n = n/10;
            rev=(rev*10)+ digit;
        }
        if(preN==rev){
            return true;
        }
        else{
            return false;
        }
    }

    int main(){
        int n = 121;
        cout<<isPalindrome(n);
        return 0;
    }