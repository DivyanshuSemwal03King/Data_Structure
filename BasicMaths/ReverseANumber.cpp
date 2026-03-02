#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

 int reverseNumber(int n) {
    //    string s = to_string(n);
    //    string RevS="";
    //    for(int i=s.size()-1;i>=0;i++){
    //     RevS+=s[i];
    //    }
    //    int revIn = stoi(RevS);
    //    return revIn;
    int rev=0;
     while (n!=0)
     {
        int digit = n%10;
        n = n/10;
        
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
    return 0;

         rev = (rev*10)+digit;
     }
     return rev;
     

    }

    int main(){

        int a = 445;
        cout<<reverseNumber(a);
        return 0;
    }