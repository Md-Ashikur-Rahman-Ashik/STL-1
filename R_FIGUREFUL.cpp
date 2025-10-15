#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfFigures;
    cin >> numberOfFigures;

    map<pair<int, int>, string> codePair;

    for (int i = 0; i < numberOfFigures; i++)
    {
        int firstCode, secondCode;
        cin >> firstCode >> secondCode;

        string figureName;
        cin >> figureName;

        pair<int, int> integerPair = {firstCode, secondCode};

        codePair[integerPair] = figureName;
    }

    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int firstCode, secondCode;
        cin >> firstCode >> secondCode;

        pair<int, int> integerPair = {firstCode, secondCode};
        cout << codePair[integerPair] << '\n';
    }

    return 0;
}