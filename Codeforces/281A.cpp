#include <iostream>
#include <string>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    if (islower(s[0]))
        s[0] = toupper(s[0]);

    cout << s;
    return 0;
}