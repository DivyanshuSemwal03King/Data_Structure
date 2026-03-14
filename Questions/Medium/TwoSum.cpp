#include<iostream>
#include<vector>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                  result.push_back(i);
                  result.push_back(j);
                }
            }
        }
        return result;
    }

    int main(){
        vector<int> n = {1, 6, 2, 10, 3};
        int t=7;
        vector<int> ans = twoSum(n,t);
        for(int x :ans){
            cout<<x<<" ";

        }
        return 0;
    }