#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                int steps = 0;
                steps = abs(i - 3) + abs(j - 3);
                cout << steps;
                return 0;
            }
        }
    }

    return 0;
}