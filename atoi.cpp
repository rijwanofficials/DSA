// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout << "Enter the string ";
//     getline(cin, s);
//     int i = 0;
//     int l = s.length();
//     while (i < l)
//     {
//         if (!(s[i] > '0' && s[i] <= '9'))
//         {
//             s.erase(i, 1);
//         }
//     }
//     int result = 0, num, pwr = 1;
//     int temp = l;
//     while (temp--)
//     {
//         pwr *= 10;
//     }
//     pwr = pwr / 10;
//     for (int i = 0; i < l; i++)
//     {
//         num = s[i] - '0';
//         num *= pwr;
//         result += num;
//         pwr /= 10;
//     }
//     cout << result;
// }

