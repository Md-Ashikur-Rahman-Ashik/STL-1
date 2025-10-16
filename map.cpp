#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<int, int> integerMap;
    // integerMap.insert({10, 20});
    integerMap[10] = 20;
    integerMap[2] = 12;

    // cout << integerMap[10] << '\n';

    // for (auto individualValue : integerMap)
    // {
    //     cout << individualValue.first << " " << individualValue.second << '\n';
    // }

    // for (auto [value, key] : integerMap)
    // {
    //     cout << value << " " << key << '\n';
    // }

    auto it = integerMap.find(2);
    cout << it->second << '\n';

    return 0;
}