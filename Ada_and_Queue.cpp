#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;
    ;

    queue<int> integerQueue;

    for (int i = 0; i < testcase; i++)
    {
        string inputString;
        cin >> inputString;

        if (inputString == "toFront")
        {
            int inputValue;
            cin >> inputValue;

            stack<int> integerStack;
            while (!integerQueue.empty())
            {
                int frontValue = integerQueue.front();
                integerStack.push(frontValue);
                integerQueue.pop();
            }

            integerStack.push(inputValue);

            while (!integerStack.empty())
            {
                int topValue = integerStack.top();
                integerQueue.push(topValue);
                integerStack.pop();
            }
        }

        if (inputString == "front")
        {
            int queueSize = integerQueue.size();

            if (queueSize > 0)
            {
                cout << integerQueue.front() << '\n';
                integerQueue.pop();
            }
            else
            {
                cout << "No job for Ada?\n";
            }
        }

        if (inputString == "back")
        {
            int queueSize = integerQueue.size();

            if (queueSize == 0)
            {
                cout << "No job for Ada?\n";
            }
            else
            {
                stack<int> integerStack;

                while (!integerQueue.empty())
                {
                    int frontValue = integerQueue.front();
                    integerStack.push(frontValue);
                    integerQueue.pop();
                }

                cout << integerStack.top() << '\n';
                integerStack.pop();

                stack<int> secondaryStack;

                while (!integerStack.empty())
                {
                    int topValue = integerStack.top();
                    secondaryStack.push(topValue);
                    integerStack.pop();
                }

                while (!secondaryStack.empty())
                {
                    int topValue = secondaryStack.top();
                    integerQueue.push(topValue);
                    secondaryStack.pop();
                }
            }
        }

        if (inputString == "reverse")
        {
            stack<int> integerStack;
            while (!integerQueue.empty())
            {
                int frontValue = integerQueue.front();
                integerStack.push(frontValue);
                integerQueue.pop();
            }

            while (!integerStack.empty())
            {
                int topValue = integerStack.top();
                integerQueue.push(topValue);
                integerStack.pop();
            }
        }

        if (inputString == "push_back")
        {
            int inputValue;
            cin >> inputValue;

            integerQueue.push(inputValue);
        }
    }

    return 0;
}