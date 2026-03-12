#include <bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int> &nums)
{

    int temp = nums[0];
    for (int i = 1; i <= nums.size() - 1; i++)
    {
        nums[i - 1] = nums[i];
    }
    nums[nums.size() - 1] = temp;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    rotateArrayByOne(nums);
    return 0;
}