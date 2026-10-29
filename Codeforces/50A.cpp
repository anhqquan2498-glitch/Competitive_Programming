#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    int result = (m * n) / 2;
    cout << result;
    return 0;
}