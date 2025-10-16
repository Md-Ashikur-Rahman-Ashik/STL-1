#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numberOfRow, numberOfColumn;
    cin >> numberOfRow >> numberOfColumn;

    vector<vector<int>> integerVector(numberOfRow, vector<int>(numberOfColumn, 5));

    for (int i = 0; i < numberOfRow; i++)
    {
        for (int j = 0; j < numberOfColumn; j++)
        {
            cout << integerVector[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}