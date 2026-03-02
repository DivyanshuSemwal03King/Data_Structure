#include <iostream>
#include <string>   
using namespace std;

int countDigit(int n) {
    string s = to_string(n);
    // int count = 0;

    // for (int i = 0; s[i] != '\0'; i++) {
    //     count++;
    // }

    // return count;
    return s.size();
}

int main(){
    int n = 123;
    int c = countDigit(n);
    cout<<c;
    return 0;

}