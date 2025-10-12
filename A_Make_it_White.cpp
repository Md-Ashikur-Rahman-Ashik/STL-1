#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int stringSize;
        cin >> stringSize;

        string inputString;
        cin >> inputString;

        int startIndex = 0;

        for (int i = 0; i < stringSize; i++)
        {
            if (inputString[i] == 'B')
            {
                startIndex = i;
                break;
            }
        }

        int endIndex = 0;

        for (int i = stringSize - 1; i >= 0; i--)
        {
            if (inputString[i] == 'B')
            {
                endIndex = i + 1;
                break;
            }
        }

        cout << endIndex - startIndex << '\n';
    }

    return 0;
}