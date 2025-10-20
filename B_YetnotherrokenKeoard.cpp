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

        vector<int> capitalVector;
        vector<int> smallVector;

        int stringSize = inputString.length();

        for (int i = 0; i < stringSize; i++)
        {
            if (inputString[i] == 'b')
            {
                int vectorSize = smallVector.size();
                if (vectorSize > 0)
                {
                    int index = smallVector.back();
                    inputString[index] = '0';
                    inputString[i] = '0';
                    smallVector.pop_back();
                }
            }
            else if (inputString[i] == 'B')
            {
                int vectorSize = capitalVector.size();
                if (vectorSize > 0)
                {
                    int index = capitalVector.back();
                    inputString[index] = '0';
                    inputString[i] = '0';
                    capitalVector.pop_back();
                }
            }
            else if (inputString[i] >= 97 && inputString[i] <= 122)
            {
                smallVector.push_back(i);
            }
            else if (inputString[i] >= 65 && inputString[i] <= 90)
            {
                capitalVector.push_back(i);
            }
        }

        for (auto individualCharacter : inputString)
        {
            if (individualCharacter != '0' && individualCharacter != 'b' && individualCharacter != 'B')
            {
                cout << individualCharacter;
            }
        }

        cout << "\n";
    }

    return 0;
}