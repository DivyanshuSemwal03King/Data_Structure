#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums)
{
    int n = nums.size();
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    vector<vector<int>> result;
    for (auto it : mp)
    {
        result.push_back({it.first, it.second});
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 3};

    vector<vector<int>> ans = countFrequencies(nums);

    for (auto v : ans)
    {
        cout << v[0] << " --> " << v[1] << endl;
    }
    return 0;
}