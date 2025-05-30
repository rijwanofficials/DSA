#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int cnt = 0;
    int ele;
    for (int i = 0; i < nums.size(); i++)
    {
        if (cnt == 0)
        {
            ele = nums[i];
        }
        if (ele == nums[i])
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (ele == nums[i])
            cnt1++;
    }
    if (cnt1 > nums.size() / 2)
    {
        cout << ele;
    }
    return 0;
}