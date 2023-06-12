#include <bits/stdc++.h>
using namespace std;
#define hawary cin.tie(0), cin.sync_with_stdio(0);
#define ull unsigned long long
#define ll long long
#define MOD 1000000007
#define py cout << "Yes" << endl;
#define pn cout << "No" << endl;
const int N = 2e5 + 5, M = 2e6 + 6, oo = 0x3f3f3f3f;

int main()
{
    hawary;

    string s1, s2;
    cin >> s1 >> s2;

    int len1 = s1.length();
    int len2 = s2.length();

    sort(s1.begin(), s1.end());

    if (len1 < len2)
    {
        reverse(s1.begin(), s1.end());
        cout << s1 << endl;
        return 0;
    }

    for (int i = 0; i < len1; i++)
    {
        for (int j = len1 - 1; j > i; j--)
        {
            string t = s1;
            swap(s1[i], s1[j]);
            sort(s1.begin() + i + 1, s1.end());
            if (s1 > s2)
                s1 = t;
            else
                break;

        }
    }

    cout << s1 << endl;

    return 0;
}
