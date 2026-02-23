#include <iostream>
#include <vector>
using namespace std;

vector<int> BubbleSort(vector<int> nums)
{

    int n = nums.size();
    for (int i = n - 1; i > 1; i--)
    {
        int swapping = 0;
        for (int j = 0; j <i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
            swapping = 1;
        }
        if (swapping == 0)
        {
            break;
        }
    }
    return nums;
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    vector<int> sortedArr = BubbleSort(arr);
    for (int i = 0; i < sortedArr.size(); i++)
    {
        cout << sortedArr[i] << " ";
    }
    return 0;
}