#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int vectorSize, numberOfPeople = 3;
        cin >> vectorSize;

        map<string, vector<int>> finalMap;

        for (int i = 1; i <= numberOfPeople; i++)
        {
            for (int j = 1; j <= vectorSize; j++)
            {
                string inputString;
                cin >> inputString;
                finalMap[inputString].push_back(i);
            }
        }

        vector<int> finalVector(numberOfPeople + 1);

        for (auto [firstValue, secondValue] : finalMap)
        {
            vector<int> valueVector = secondValue;
            int vectorSize = valueVector.size();

            if (vectorSize == 1)
            {
                finalVector[valueVector[0]] = finalVector[valueVector[0]] + 3;
            }

            if (vectorSize == 2)
            {
                finalVector[valueVector[0]]++;
                finalVector[valueVector[1]]++;
            }
        }

        for (int i = 1; i <= numberOfPeople; i++)
        {
            cout << finalVector[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}