// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array ";
//     cin >> n;
//     cout << "Enter the array ";
//     vector<int> v(n);
//     int xor_arr = 0;
//     int xor_num = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         xor_arr ^= v[i];
//     }
//     for (int i = 1; i <= n-1; i++)
//     {
//         xor_num ^= i;
//     }
//     int ans = xor_arr ^ xor_num;
//     cout << ans;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     cout << "Enter the array: ";
//     vector<int> v(n);
//     int xor_arr = 0, xor_num = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         xor_arr ^= v[i]; // XOR all elements in the array
//     }

//     for (int i = 1; i <= n - 1; i++) // Fix: XOR numbers from 1 to n-1
//     {
//         xor_num ^= i;
//     }

//     int ans = xor_arr ^ xor_num; // XORing both results gives the duplicate
//     cout << "Duplicate number: " << ans << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    Solution sol;
    int k = sol.removeElement(nums, val);
    cout << "New length: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Print entire array for debugging
    cout << "Full nums array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// int main()
// {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     cout << "Enter the array: ";
//     vector<int> v(n);
//     vector<int> freq(n + 1, 0); // made a frequency array and initialize it with zero

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         freq[v[i]]++;
//     }

//     cout << "Duplicate numbers: ";
//     for (int i = 1; i <= n; i++)
//     {
//         if (freq[i] > 1)
//         {
//             cout << i << " ";
//         }
//     }
//     cout << endl;

//     return 0;
// }
