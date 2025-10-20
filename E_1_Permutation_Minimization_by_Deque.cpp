#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int dequeSize;
        cin >> dequeSize;

        deque<int> finalDeque;
        deque<int> inputDeque;

        for (int i = 0; i < dequeSize; i++)
        {
            int inputValue;
            cin >> inputValue;
            inputDeque.push_back(inputValue);
        }

        int firstValue = inputDeque.front();
        finalDeque.push_front(firstValue);
        inputDeque.pop_front();

        while (!inputDeque.empty())
        {
            int firstValue = inputDeque.front();
            int currentValue = finalDeque.front();

            if (firstValue < currentValue)
            {
                finalDeque.push_front(firstValue);
            }
            else
            {
                finalDeque.push_back(firstValue);
            }

            inputDeque.pop_front();
        }

        for (auto individualValue : finalDeque)
        {
            cout << individualValue << " ";
        }

        cout << "\n";
    }

    return 0;
}