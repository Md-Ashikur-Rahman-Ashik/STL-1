#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize;
    cin >> vectorSize;
    vector<int> integerVector(vectorSize, 5);
    for (int i = 0; i < vectorSize; i++)
    {
        cout << integerVector[i] << '\n';
    }

    // vector<int> integerVector(vectorSize);
    // vector<int> integerVector;
    // for (int i = 0; i < vectorSize; i++)
    // {
    //     int inputValue;
    //     cin >> inputValue;

    //     integerVector.push_back(inputValue);
    // }

    return 0;
}