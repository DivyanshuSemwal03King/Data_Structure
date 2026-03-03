#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;

bool isArmstrong(int n)
{
    int n1=n;
    int temp = n;
    int digits = 0;
       int armstrong = 0;
    while (temp!=0)
    {
        digits++;
        temp /= 10;
        
    }
    
 
    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        armstrong +=pow(digit, digits);
    }
    if (n1 == armstrong)
    {
        return true;
    }
    return false;
}

int main(){
    int n = 153;
    cout<<isArmstrong(n);
    return 0;
}