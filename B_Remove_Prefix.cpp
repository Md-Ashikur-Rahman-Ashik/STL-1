#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        long long int vectorSize;
        cin >> vectorSize;

        vector<long long int> integerVector(vectorSize);
        map<long long int, long long int> integerMap;

        for (int i = 0; i < vectorSize; i++)
        {
            int integerValue;
            cin >> integerValue;
            integerVector.push_back(integerValue);
        }

        int count = 0;

        reverse(integerVector.begin(), integerVector.end());

        for (int i = 0; i < vectorSize; i++)
        {
            int integerValue = integerVector[i];

            if (integerMap[integerValue] == 0)
            {
                integerMap[integerValue]++;
                count++;
            }
            else
            {
                break;
            }
        }

        cout << vectorSize - count << '\n';
    }

    return 0;
}