#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize;
    cin >> vectorSize;
    vector<int> inputVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> inputVector[i];
    }

    if (vectorSize % 2 == 0)
    {
        vector<int> firstVector;
        for (int i = 0; i < vectorSize; i = i + 2)
        {
            firstVector.push_back(inputVector[i]);
        }

        vector<int> secondVector;
        for (int i = 1; i < vectorSize; i = i + 2)
        {
            secondVector.push_back(inputVector[i]);
        }

        reverse(secondVector.begin(), secondVector.end());

        secondVector.insert(secondVector.end(), firstVector.begin(), firstVector.end());

        for (int i = 0; i < vectorSize; i++)
        {
            cout << secondVector[i] << " ";
        }
    }
    else
    {
        vector<int> firstVector;
        for (int i = 0; i < vectorSize; i = i + 2)
        {
            firstVector.push_back(inputVector[i]);
        }

        reverse(firstVector.begin(), firstVector.end());

        vector<int> secondVector;
        for (int i = 1; i < vectorSize; i = i + 2)
        {
            secondVector.push_back(inputVector[i]);
        }

        firstVector.insert(firstVector.end(), secondVector.begin(), secondVector.end());

        for (int q = 0; q < vectorSize; q++)
        {
            cout << firstVector[q] << " ";
        }
    }

    return 0;
}