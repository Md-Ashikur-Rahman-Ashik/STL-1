#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        string inputString;
        cin >> inputString;

        string smallString, capitalString;
        for (auto individualCharacter : inputString)
        {
            if (individualCharacter == 'B')
            {
                int stringSize = capitalString.length();
                if (stringSize > 0)
                {
                    capitalString.pop_back();
                }
            }
            else if (individualCharacter == 'b')
            {
                int stringSize = smallString.length();
                if (stringSize > 0)
                {
                    smallString.pop_back();
                }
            }
            else if (individualCharacter >= 65 && individualCharacter <= 90)
            {
                capitalString.push_back(individualCharacter);
            }
            else if (individualCharacter >= 97 && individualCharacter <= 122)
            {
                smallString.push_back(individualCharacter);
            }
        }

        
    }

    return 0;
}