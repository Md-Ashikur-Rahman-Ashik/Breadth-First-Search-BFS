// Input
// 5 5
// 0 1
// 0 2
// 3 0
// 1 3
// 3 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfNode, numberOfEdge;
    cin >> numberOfNode >> numberOfEdge;

    vector<int> adjacencyList[numberOfNode];

    for (int i = 0; i < numberOfEdge; i++)
    {
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        adjacencyList[firstValue].push_back(secondValue);
        adjacencyList[secondValue].push_back(firstValue);
    }

    for (int i = 0; i < numberOfNode; i++)
    {
        cout << i << " -> ";
        for (int integerValue : adjacencyList[i])
        {
            cout << integerValue << " ";
        }

        cout << endl;
    }

    return 0;
}