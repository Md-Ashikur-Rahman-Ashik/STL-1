#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // pair<string, int> student = make_pair("Abdur Rahim", 10);
    // pair<string, int> student = {"Abdur Rahim", 10};
    // cout << student.first << " " << student.second << '\n';

    // student.first = "Bablu";

    // auto [name, roll] = student;
    // cout << name << " " << roll << '\n';

    // int arraySize;
    // cin >> arraySize;
    // pair<string, int> students[arraySize];
    // for (int i = 0; i < arraySize; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    // for (auto [name, roll] : students)
    // {
    //     cout << name << " " << roll << '\n';
    // }

    // for (int i = 0; i < arraySize; i++)
    // {
    //     cout << students[i].first << " " << students[i].second << '\n';
    // }

    // tuple<string, int, string> studentTuple = make_tuple("Abdur Rahim", 10, "017");
    // tuple<string, int, string> studentTuple = {"Abdur Rahim", 10, "017"};
    // cout << get<0>(studentTuple) << " " << get<1>(studentTuple) << " " << get<2>(studentTuple) << '\n';

    // auto [name, roll, phoneNumber] = studentTuple;
    // cout << name << " " << roll << " " << phoneNumber << '\n';

    pair<string, pair<int, string>> studentPair = {"Abdur Rahim", {10, "017"}};
    cout << studentPair.first << " " << studentPair.second.first << " " << studentPair.second.second << '\n';

    return 0;
}

// Input
// 3
// AbdurRahim 10
// AbdulKarim 2
// Bablu 5