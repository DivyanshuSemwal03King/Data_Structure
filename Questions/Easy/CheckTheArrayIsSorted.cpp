#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums){
			for(int i=1;i<nums.size();i++){
                if(nums[i-1]>nums[i]){
                    return false;
                }
            }
            return true;
		}