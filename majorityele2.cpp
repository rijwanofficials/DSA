#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cnt1 = 0;
    int cnt2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    cout << "Enter the value of size of array ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the element of array ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && nums[i] != ele2)
        {
            cnt1 = 1;
            ele1 = nums[i];
        }
        else if (cnt2 == 0 && nums[i] != ele1)
        {
            cnt2 = 1;
            ele2 = nums[i];
        }
        else if (nums[i] == ele1)
            cnt1++;
        else if (nums[i] == ele2)
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ele1 == nums[i])
        {
            cnt1++;
        }
        else if (ele2 == nums[i])
        {
            cnt2++;
        }
    }
    int mini = (n / 3) + 1;
    if (cnt1 >= mini)
    {
        ans.push_back(ele1);
    }
    if (cnt2 >= mini)
    {
        ans.push_back(ele2);
    }
    if (ans.empty()) // if no such ele then -1 will answer
    {
        cout << "-1";
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}