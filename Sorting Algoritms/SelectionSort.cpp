#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> SelectionSort(vector<int> arr)
{
    for (int i = 0; i <= arr.size() - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= arr.size() - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    vector<int> sortedArr = SelectionSort(arr);
    for (int i = 0; i < sortedArr.size(); i++)
    {
        cout << sortedArr[i] << " ";
    }
    return 0;
}