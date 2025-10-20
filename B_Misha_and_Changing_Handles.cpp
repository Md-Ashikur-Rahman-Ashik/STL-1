#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    map<string, string> firstMap, secondMap;

    for (int i = 0; i < testcase; i++)
    {
        string firstString, secondString;
        cin >> firstString >> secondString;

        if (secondMap.find(firstString) != secondMap.end())
        {
            string oldHandle = secondMap[firstString];
            firstMap[oldHandle] = secondString;
            secondMap.erase(firstString);
            secondMap[secondString] = oldHandle;
        }
        else
        {
            firstMap[firstString] = secondString;
            secondMap[secondString] = firstString;
        }
    }

    cout << firstMap.size() << '\n';

    for (auto [firstString, secondString] : firstMap)
    {
        cout << firstString << " " << secondString << '\n';
    }

    return 0;
}