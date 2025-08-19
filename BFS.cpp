// Input
// 7 7
// 0 1
// 1 3
// 1 4
// 3 2
// 4 6
// 3 5
// 4 5

#include <bits/stdc++.h>
using namespace std;

vector<int> adjacencyList[1005];
bool visitedArray[1005];

void bfs(int source)
{
    queue<int> integerQueue;
    integerQueue.push(source);
    visitedArray[source] = true;
    while (!integerQueue.empty())
    {
        int parentNode = integerQueue.front();
        integerQueue.pop();

        cout << parentNode << " ";

        for (int childNode : adjacencyList[parentNode])
        {
            if (visitedArray[childNode] == false)
            {
                integerQueue.push(childNode);
                visitedArray[childNode] = true;
            }
        }
    }
}

int main()
{
    int numberOfNode, numberOfEdge;
    cin >> numberOfNode >> numberOfEdge;

    for (int i = 0; i < numberOfEdge; i++)
    {
        int firstValue, secondValue;
        cin >> firstValue >> secondValue;

        adjacencyList[firstValue].push_back(secondValue);
        adjacencyList[secondValue].push_back(firstValue);
    }

    memset(visitedArray, false, sizeof(visitedArray));

    bfs(0);

    return 0;
}