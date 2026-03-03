#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> divisors(int n) {
      vector<int> divisor;
      for(int i =1;i<=n;i++){
        if(n%i==0){
            divisor.push_back(i);
        }
      }
      return divisor;
    }

    int main(){
        int n = 15;
        vector<int> ans = divisors(n);
        for(int i : ans){
            cout<<i << " ";
        }
        return 0;
    }