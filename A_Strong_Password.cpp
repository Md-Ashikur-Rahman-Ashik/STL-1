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
        int stringSize = inputString.length();

        bool flag = false;
        bool inserted = false;

        for (int i = 1; i < stringSize; i++)
        {
            stringSize = inputString.length();
            if (inputString[i] == inputString[i - 1])
            {
                flag = true;
                if (inputString[i] == 'a')
                {
                    if (inserted == false)
                    {
                        inputString.insert(inputString.begin() + i, 'b');
                        inserted = true;
                    }
                }
                else
                {
                    if (inserted == false)
                    {
                        inputString.insert(inputString.begin() + i, 'a');
                        inserted = true;
                    }
                }
            }
        }

        if (flag == false)
        {
            if (inputString[0] == 'a')
            {
                if (inserted == false)
                {
                    inputString.insert(inputString.begin() + 0, 'b');
                    inserted = true;
                }
            }
            else
            {
                if (inserted == false)
                {
                    inputString.insert(inputString.begin() + 0, 'a');
                    inserted = true;
                }
            }
        }

        cout << inputString << '\n';
    }

    return 0;
}