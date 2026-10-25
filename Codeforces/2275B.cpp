// 2275B
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

void print()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<int> memory;
    vector<bool> printed(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        char cmd = s[i - 1];

        if (cmd == '1')
        {
            memory.push(i);
        }
        else if (cmd == '2')
            if (!memory.empty())
            {
                int top = memory.top();
                memory.pop();
                printed[top] = true;
            }
            else
                printed[i] = true;

        else if (cmd == '3')
            printed[i] = true;
    }

    vector<int> not_printed;
    for (int i = 1; i <= n; i++)
    {
        if (printed[i] == false)
        {
            not_printed.push_back(i);
        }
    }

    n = not_printed.size();
    cout << n << "\n";

    for (int i = 0; i < n; i++)
        cout << not_printed[i] << " ";
}

int main()
{
    // Tối ưu hóa I/O để chạy nhanh hơn
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        print();
    }

    return 0;
}