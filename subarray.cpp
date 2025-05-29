#include <bits/stdc++.h>
using namespace std;
// int main()
// {
// int n, start, ansStart, ansEnd;
// cout << "Enter the number of element ";
// cin >> n;
// vector<int> v(n);
// cout << "Enter the array ";
// for (int i = 0; i < n; i++)
// {
//     cin >> v[i];
// }
// int max = INT_MIN;
// int sum = 0;
// for (int i = 0; i < n; i++)
// {
//     sum += v[i];
//     if (sum < 0)
//     {
//         sum = 0;
//         start = i + 1;
//     }
//     if (sum > max)
//     {
//         max = sum;
//         ansStart = start;
//         ansEnd = i;
//     }
// }
// cout << "maximum subarray sum " << max << endl;
// cout << "Subarray index " << ansStart << " " << ansEnd;

// MOVE ALL THE ZEROS TO THE END
void swapfunc(int a, int b, vector<int> &v)
{
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}
int main()
{
    int n, count;
    cout << "Enter the number of element ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            swapfunc(i, j, v);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}