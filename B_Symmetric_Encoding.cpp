#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int stringSize;
        cin >> stringSize;

        string inputString;
        cin >> inputString;

        set<char> characterSet;
        map<char, char> characterMap;

        string firstString;

        for (auto individualCharacter : inputString)
        {
            characterSet.insert(individualCharacter);
        }

        for (auto individualCharacter : characterSet)
        {
            firstString.push_back(individualCharacter);
        }

        string secondString = firstString;
        reverse(secondString.begin(), secondString.end());

        int newStringSize = firstString.length();

        for (int i = 0; i < newStringSize; i++)
        {
            char firstCharacter = firstString[i];
            char secondCharacter = secondString[i];

            characterMap[firstCharacter] = secondCharacter;
        }

        for (int i = 0; i < stringSize; i++)
        {
            char individualCharacter = inputString[i];
            if (characterMap[individualCharacter])
            {
                inputString[i] = characterMap[individualCharacter];
            }
            cout << inputString[i];
        }

        cout << '\n';
    }

    return 0;
}