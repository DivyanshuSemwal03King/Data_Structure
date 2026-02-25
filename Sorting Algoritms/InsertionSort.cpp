#include<iostream>
#include<vector>
using namespace std;

vector<int> InsertionSort(vector<int> nums){
    int n = nums.size();
    for(int i=0;i<=n-1;i++){
        for(int j = i;j>0;j--){
            if(nums[j-1]>nums[j]){
                int temp = nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
            }
        }
    }
    return nums;
}

int main(){
    vector<int> arr = {12, 11, 13, 5, 6};
    vector<int> sortedArr = InsertionSort(arr);
    for(int i=0;i<sortedArr.size();i++){
        cout<<sortedArr[i]<<" ";
    }
    return 0;
}