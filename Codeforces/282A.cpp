#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string str;
        cin >> str;

        if (str[1] == '+')
            count++;
        else
            count--;
    }
    cout << count;
    return 0;
}