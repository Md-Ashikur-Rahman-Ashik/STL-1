#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize;
    cin >> vectorSize;
    vector<string> stringVector;
    for (int i = 0; i < vectorSize; i++)
    {
        string inputString;
        cin >> inputString;
        stringVector.push_back(inputString);
    }

    reverse(stringVector.begin(), stringVector.end());

    map<string, int> stringMap;

    vector<string> finalVector;

    for (auto individualString : stringVector)
    {
        if (stringMap[individualString] == 0)
        {
            finalVector.push_back(individualString);
            stringMap[individualString]++;
        }
    }

    for (auto individualString : finalVector)
    {
        cout << individualString << '\n';
    }

    return 0;
}