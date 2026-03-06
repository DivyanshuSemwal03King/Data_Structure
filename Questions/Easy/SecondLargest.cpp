#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(vector<int> &nums)
{
    int largest = nums[0];
    int secondLargest = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i]<largest&&nums[i]>secondLargest){
            secondLargest = nums[i];
        }
    }
    return secondLargest;
}
int main()
{

    vector<int> nums = {1, 2, 2, 3, 3, 3};

    cout<<secondLargestElement(nums);

    return 0;
}