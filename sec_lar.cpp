// ################################################# STRING
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the number ";
//     cin >> num;
//     string S;
//     S = to_string(num);
//     int len = 0;
//     for (int i = 0; S[i] != '\0'; i++)
//     {
//         len++;
//     }
//     int req = 4 - len;
//     for (int i = 0; i < req; i++)
//     {
//         S = "0" + S;
//     }
//     cout << S;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     int count = 0;
//     cin >> s;
//     int i = 0;
//     int j = s.length() - 1;
//     while (i < j)
//     {
//         if (s[i] != s[j])
//         {
//             count++;
//         }
//         i++;
//         j--;
//     }
//     cout << count;
// }

// Question of rotation of string S is equal to string T
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string S, T;
//     cout << "Enter the first string ";
//     cin >> S;
//     cout << "Enter the second string ";
//     cin >> T;
//     int i;
//     int len = S.length();
//     for (int i = 0; i < len; i++)
//     {
//         char last = S.back();
//         S.pop_back();
//         S = last + S;
//         if (S == T)
//         {
//             cout << "Yes";
//             return 0;
//         }
//     }
//     cout << "No";
//     return 0;
// }

// **********************************************************************
// important question on array

// 1.find second largest element in the array

// #include <bits/stdc++.h>
// using namespace std;

// int max() {}
// int main()
// {
// int n, indx, count, ans2, ans;
// cout << "Enter the number of element in an array ";
// cin >> n;
// vector<int> v;
// cout << "Enter the array ";
// for (int i = 0; i < n; i++)
// {
//     int value;
//     cin >> value;
//     v.push_back(value);
// }
// cout << "output array " << endl;
// for (int i = 0; i < n; i++)
// {
//     cout << v[i] << " ";
// }
// if (v.size() == 1)
// {
//     cout << "Second element is not present in array ";
//     return 0;
// }
// // find the max element in array
// ans = INT_MIN;
// for (int i = 0; i < n; i++)
// {
//     if (v[i] > ans)
//     {
//         ans = v[i];
//         indx = i;
//         count++;
//     }
// }
//     // If all the element the are same**************
//     bool allSame = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] != ans)
//         {
//             allSame = false;
//             break;
//         }
//     }

//     if (allSame)
//     {
//         cout << "No second largest element";
//         return 0;
//     }
//     //find the second largest
//     ans2 = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] != ans && v[i] > ans2)
//         {
//             ans2 = v[i];
//         }
//     }

//     if (ans2 == INT_MIN)
//     {
//         cout << "No second largest element";
//     }
//     else
//     {
//         cout << "Second largest element: " << ans2;
//     }

//     return 0;
// }
// ****************************************************************************
// 2.	Reverse an array

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int n, indx, count, ans2, ans;
//     cout << "Enter the number of element in an array ";
//     cin >> n;
//     vector<int> v;
//     cout << "Enter the array ";
//     for (int i = 0; i < n; i++)
//     {
//         int value;
//         cin >> value;
//         v.push_back(value);
//     }
//     int i = 0;
//     int j = v.size() - 1;
//     while (i <= j)
//     {
//         swap(v[i], v[j]); // we can do it by just passing the number with address and vector as well
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// **********************************************************
// 3.	Find the missing number in an array (1 to N)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sumArr = 0, sumNum;
    int num = 0;
    cout << "Enter the number of element in an array ";
    cin >> n;
    vector<int> v;
    cout << "Enter the " << n - 1 << " element ";
    for (int i = 0; i < n - 1; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    sumNum = n * (n + 1) / 2;
    // cout << sumNum;
    for (int i = 0; i < n - 1; i++)
    {
        sumArr += v[i];
    }
    // cout << sumArr;
    cout << (sumNum - sumArr);
}