#include <bits/stdc++.h>
using namespace std;


    int longestSubarray(vector<int> &nums, int k){
      int maxCount = 0;

        for(int i = 0; i < nums.size(); i++){
            int sum = 0;

            for(int j = i; j < nums.size(); j++){
                sum += nums[j];

                if(sum == k){
                    maxCount = max(maxCount, j - i + 1);
                }
            }
        }

        return maxCount;
    }

    int main(){
        vector<int> n = {10, 5, 2, 7, 1, 9};
        int k = 15;
        cout<<longestSubarray(n,k);
        return 0;
    }
