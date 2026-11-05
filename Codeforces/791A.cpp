#include <iostream>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int c = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        c++;
    }
    cout << c;
    return 0;
}