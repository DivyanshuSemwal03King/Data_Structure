#include<iostream>
using namespace std;

int NnumbersSum(int N){
            int sum =0;
			if(N==0) return 0 ;
           return N + NnumbersSum(N - 1);
		}

        int main(){
           cout<< NnumbersSum(4);
            return 0;
        }