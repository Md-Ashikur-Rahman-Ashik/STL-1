#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> firstPair, pair<string, int> secondPair)
{
    return firstPair.second > secondPair.second;
}

int main()
{
    int stringSize;
    cin >> stringSize;

    string inputString;
    cin >> inputString;

    map<string, int> stringMap;

    for (int i = 1; i < stringSize; i++)
    {
        char firstCharacter = inputString[i - 1];
        char secondCharacter = inputString[i];

        string finalString;
        finalString.push_back(firstCharacter);
        finalString.push_back(secondCharacter);

        stringMap[finalString]++;
    }

    vector<pair<string, int>> pairVector;

    for (auto individualPair : stringMap)
    {
        pairVector.push_back(individualPair);
    }

    sort(pairVector.begin(), pairVector.end(), cmp);

    cout << pairVector[0].first;

    return 0;
}