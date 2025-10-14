#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string inputString;
    cin >> inputString;
    int stringSize = inputString.length();

    string finalString;

    for (int i = 0; i < stringSize; i++)
    {
        if (inputString[i] != '<')
        {
            finalString.push_back(inputString[i]);
        }
        else
        {
            finalString.pop_back();
        }
    }

    cout << finalString;

    return 0;
}