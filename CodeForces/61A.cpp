#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[i])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }

    return 0;
}
