// 2275A

#include <iostream>
#include <algorithm>
using namespace std;

void distance()
{

    int x, y, r;
    cin >> x >> y >> r;

    int n = x + r;

    cout << n << " " << y << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        distance();

    return 0;
}