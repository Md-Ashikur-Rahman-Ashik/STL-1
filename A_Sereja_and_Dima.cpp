#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arraySize;
    cin >> arraySize;
    int integerArray[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> integerArray[i];
    }

    int leftPointer = 0;
    int rightPointer = arraySize - 1;

    long long int firstSum = 0;
    long long int secondSum = 0;

    int count = arraySize / 2;

    while (count--)
    {
        if (integerArray[leftPointer] > integerArray[rightPointer])
        {
            firstSum = firstSum + integerArray[leftPointer];
            leftPointer++;
        }
        else
        {
            firstSum = firstSum + integerArray[rightPointer];
            rightPointer--;
        }

        if (integerArray[leftPointer] > integerArray[rightPointer])
        {
            secondSum = secondSum + integerArray[leftPointer];
            leftPointer++;
        }
        else
        {
            secondSum = secondSum + integerArray[rightPointer];
            rightPointer--;
        }
    }

    if (arraySize % 2 == 1)
    {
        if (integerArray[leftPointer] > integerArray[rightPointer])
        {
            firstSum = firstSum + integerArray[leftPointer];
            leftPointer++;
        }
        else
        {
            firstSum = firstSum + integerArray[rightPointer];
            rightPointer--;
        }
    }

    cout << firstSum << " " << secondSum;

    return 0;
}