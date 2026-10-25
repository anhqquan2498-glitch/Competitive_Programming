// 4A

#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    if (t >= 4)
    {
        if (t % 2 == 0)
        {
            cout << "Yes";
        }
        else
            cout << "No";
    }

    else
    {
        cout << "No";
    }
    return 0;
}