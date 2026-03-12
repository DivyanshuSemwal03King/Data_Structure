#include <bits/stdc++.h>
using namespace std;

// vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
// {
//     vector<int> result;

//     int i = 0, j = 0;
//     while (i < nums1.size() && j < nums2.size())
//     {
//         if (nums1[i] <= nums2[j])
//         {
//             if (result.size() == 0 || result.back() != nums1[i])
//             {

//                 result.push_back(nums1[i]);
//             }
//             i++;
//         }
//         else
//         {
//             if (result.size() == 0 || result.back() != nums2[j])
//             {

//                 result.push_back(nums2[j]);
//             }
//             j++;
//         }
//     }
//     while (i < nums1.size())
//     {

//         if (result.size() == 0 || result.back() != nums1[i])
//         {

//             result.push_back(nums1[i]);
//         }
//         i++;
//     }
//     while (j < nums2.size())
//     {
//         if (result.size() == 0 || result.back() != nums2[j])
//         {

//             result.push_back(nums2[j]);
//         }
//         j++;
//     }

//     return result;
// }

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> result;
    int temp = INT_MIN;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            if (temp != nums1[i])
            {
                temp = nums1[i];
                result.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (temp != nums2[j])
            {
                temp = nums2[j];
                result.push_back(nums2[j]);
            }
            j++;
        }
    }
    while (i < nums1.size())
    {
       
            if (temp != nums1[i])
            {
                temp = nums1[i];
                result.push_back(nums1[i]);
            }
            i++;
     
    }
    while (j < nums2.size())
    {
        if (temp != nums2[j])
        {
            temp = nums2[j];
            result.push_back(nums2[j]);
        }
        j++;
    }
    return result;
}

int main()
{
    vector<int> n1 = {3, 4, 4, 4};
    vector<int> n2 = {6, 7, 7};
    unionArray(n1, n2);

    return 0;
}