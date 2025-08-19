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

    vector<pair<int, int>> edgeList;

    for (int i = 0; i < numberOfEdge; i++)
    {
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        edgeList.push_back({firstValue, secondValue});
    }

    for (pair<int, int> integerPair : edgeList)
    {
        cout << integerPair.first << " " << integerPair.second << endl;
    }

    return 0;
}