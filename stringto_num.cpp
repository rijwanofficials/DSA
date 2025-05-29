#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    int l = s.size();
    int i = 0;
    while (i < s.size())
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
        {
            s.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    while (!s.empty() && s[0] == '0')
    {
        s.erase(0, 1);
    }
    if (s.empty())
    {
        s = "0";
    }
    cout << s << endl;
    // int pr;
    // while (l--)
    // {
    //     pr *= 10;
    // }
    // for (int i = 0; i < l; i++)
    // {

    //     pr /= 10;
    //     num += pr * s[i];
    // }
    int num = stoi(s);
    cout << num;
    return 0;
}
