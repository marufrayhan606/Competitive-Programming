#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '<' && s[i + 1] == '>')
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
