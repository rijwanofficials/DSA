#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string ";
    getline(cin, s);
    int l = s.size();
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        if ((s[i] <= 90 && s[i] >= 65))
            count++;
    }
    if (count == l || count == 1 || count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}