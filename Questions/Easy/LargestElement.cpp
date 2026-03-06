#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums)
{
//    sort(nums.begin(),nums.end());
//    int last = nums.size()-1;
//    return nums[last];

   //Another approch 
   int largest = nums[0];
   for(int i=0;i<nums.size();i++){
    if(nums[i]>largest){
        largest=nums[i];
    }
   }
   return largest;


}

int main(){
    vector<int> nums = {1,2,1,3,4,6,5};
    cout<<largestElement(nums)<<endl;
    return 0;

}