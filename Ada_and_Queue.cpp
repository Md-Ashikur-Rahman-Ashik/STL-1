#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    queue<int> integerQueue;

    int x = 0;
    deque<long long int> integerDequeue;

    for (int i = 0; i < testcase; i++)
    {
        string inputString;
        cin >> inputString;

        if (inputString == "back")
        {
            if (integerDequeue.empty())
            {
                cout << "No job for Ada?\n";
            }
            else if (x == 0)
            {
                cout << integerDequeue.back() << '\n';
                integerDequeue.pop_back();
            }
            else
            {
                cout << integerDequeue.front() << '\n';
                integerDequeue.pop_front();
            }
        }
        else if (inputString == "front")
        {
            if (integerDequeue.empty())
            {
                cout << "No job for Ada?\n";
            }
            else if (x == 1)
            {
                cout << integerDequeue.back() << '\n';
                integerDequeue.pop_back();
            }
            else
            {
                cout << integerDequeue.front() << '\n';
                integerDequeue.pop_front();
            }
        }
        else if (inputString == "reverse")
        {
            x = !x;
        }
        else if (inputString == "push_back")
        {
            int inputValue;
            cin >> inputValue;

            if (x == 0)
            {
                integerDequeue.push_back(inputValue);
            }
            else
            {
                integerDequeue.push_front(inputValue);
            }
        }
        else if (inputString == "toFront")
        {
            int inputValue;
            cin >> inputValue;

            if (x == 0)
            {
                integerDequeue.push_front(inputValue);
            }
            else
            {
                integerDequeue.push_back(inputValue);
            }
        }
    }

    return 0;
}