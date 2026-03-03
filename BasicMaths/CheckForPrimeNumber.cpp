#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPrime(int n) {
        vector<int> prime;
        for(int i=1;i<=n;i++){
            if(n%i==0){prime.push_back(i);}

        }
        if(prime.size()==2){return true;}
        return false;
    }

    int main(){
        int n = 13;
        cout<<isPrime(n);
        return 0;
    }