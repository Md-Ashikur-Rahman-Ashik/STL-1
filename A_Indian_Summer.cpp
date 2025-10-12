#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize;
    cin >> vectorSize;
    vector<string> stringVector(vectorSize + 1);
    map<string, int> stringMap;
    for (int i = 0; i <= vectorSize; i++)
    {
        string inputString;
        getline(cin, inputString);
        stringVector[i] = inputString;
        stringMap[inputString]++;
    }

    cout << stringMap.size() - 1;

    return 0;
}