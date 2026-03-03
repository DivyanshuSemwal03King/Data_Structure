#include<iostream>
#include<string>
using namespace std;

bool palindromeCheck(int i,string& s ,int n){
			if(i==n/2) return true;
            if(s[i]!=s[n-i-1]){
                return false;
            }
           return palindromeCheck(i+1,s,n);
		}


        int main(){
    string s = "madam";
    
    if(palindromeCheck(0, s, s.length()))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;}