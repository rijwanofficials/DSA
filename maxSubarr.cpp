#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int N, k;
    // cout << "size of array ";
    // cin >> N;
    // // cout << "Enter the number of k ";
    // // cin >> k;
    // vector<int> nums(N);
    // cout << "Enter the element of array ";
    // for (int i = 0; i < N; i++)
    // {
    //     cin >> nums[i];
    // }
    // int n = nums.size();
    // vector<int> arrSum(n);
    // int sum = 0;
    // int i = 0;
    // int j = 1;
    // while (i + 1 < n)
    // {
    //     sum = nums[i] + nums[j];
    //     // arrSum.push_back(sum);
    //     i += 2;
    //     j = i + 1;
    //     cout << sum << " ";
    // }

    vector<vector<int>> matrix;
    int n, m, q;
    cout << "Enter the number of elements ";
    cin >> n >> m;
    cout << "Enter the array ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    //   cin>>q;
    //   cin>>x1>>y1>>x2>>y2;
    //   row-wise sum
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            matrix[i][j] += matrix[i - 1][j - 1];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << matrix[i][j];
        }
    }
    //     int n = nums.size();

    //     bool avg = 0;
    //     // find all subarray
    //     int sum = 0;
    //     for (int i = 0; i < k; i++)
    //     {
    //         sum += nums[i];
    //     }
    //     double maxAvg = (double)sum/k;
    //     for (int j = k; j < n; j++)
    //     {
    //         sum += nums[j];
    //         sum -= nums[j - k];
    //         double avg = (double)sum / k;
    //         maxAvg = max(avg, maxAvg);
    //     }
    //     cout << maxAvg << endl;

    //     #include <iostream>
    // #include <algorithm> // for sort()

    // int main() {
    //     std::string s = "chatgpt";

    //     std::sort(s.begin(), s.end()); // Sorts the string in ascending order

    //     std::cout << "Sorted string: " << s << std::endl;
    //     // Output: "acghptt"

    //     return 0;
}
