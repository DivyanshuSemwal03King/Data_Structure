#include<bits/stdc++.h>
using namespace std;

 void rotateArray(vector<int>& nums, int k) {
     vector<int> temp;
      k = k%nums.size();
     for(int i=0;i<k;i++){
        temp.push_back(nums[i]);
     }
     for(int i=k;i<nums.size();i++){
        nums[i-k]=nums[i];
        
     }
     for(int i=nums.size()-k;i<nums.size();i++){
        nums[i]=temp[i-(nums.size()-k)];
     }
    
    }

int main(){
      vector<int> nums = {1, 2, 3, 4, 5, 6};
          rotateArray(nums,2);
    return 0;
}