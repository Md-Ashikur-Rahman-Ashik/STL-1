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

    for (int i = 0; i < vectorSize; i++)
    {
        bool flag = false;

        if (i == 0)
        {
            cout << "NO\n";
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                if (stringVector[i] == stringVector[j])
                {
                    flag = true;
                    cout << "YES\n";
                    break;
                }
            }

            if (flag == false)
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}