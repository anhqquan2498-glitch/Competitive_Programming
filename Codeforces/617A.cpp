#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int steps = (x + 4) / 5;

    cout << steps << endl;
    return 0;
}