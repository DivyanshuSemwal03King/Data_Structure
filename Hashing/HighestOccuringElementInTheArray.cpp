#include <iostream>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;

int mostFrequentElement(vector<int> &nums)
{
    int n = nums.size();
    map<int , int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    int maxFrequency=0;
    int Element = -1;
    for(auto it : mp){
      if(it.second>maxFrequency){
        maxFrequency=it.second;
        Element = it.first;
      } 
    }
 return Element;
}

int main(){
      vector<int> nums = {1, 2, 2, 3, 3, 3};

    cout<<"Most Frequent Element: "<<mostFrequentElement(nums);

    return 0;
}