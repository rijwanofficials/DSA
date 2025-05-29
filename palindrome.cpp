#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cout << "Enter the string ";
    getline(cin, S);
    int len = S.length();
    int i = 0;

    while (i < S.length())
    {
        if (!(S[i] > 64 && S[i] < 123))
        {
            S.erase(i, 1);
        }
        else
        {
            i++;
        }
    }
    // uper case to lower case
    for (int i = 0; i < len; i++)
    {
        if (S[i] >= 65 && S[i] < 97)
        {
            S[i] += 32;
        }
    }
    // Check Pla
    int j = len - 1;
    int count = 0;
    while (i <= j)
    {
        if (S[i] != S[j])
        {
            count = -1;
            break;
        }
        i++;
        j--;
    }
    if (count != 0)
    {
        cout << "String is not palindrome ";
    }
    else
    {
        cout << "String is palindrome ";
    }
}