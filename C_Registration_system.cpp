#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;
    vector<string> stringVector;
    for (int i = 0; i < vectorSize; i++)
    {
        string inputString;
        cin >> inputString;
        stringVector.push_back(inputString);
    }

    map<string, int> stringMap;

    for (auto individualString : stringVector)
    {
        if (stringMap[individualString] == 0)
        {
            cout << "OK\n";
            stringMap[individualString]++;
        }
        else
        {
            int desiredNumber = stringMap[individualString];
            string individualCharacter = to_string(desiredNumber);
            cout << individualString + individualCharacter << '\n';
            stringMap[individualString]++;
        }
    }

    return 0;
}