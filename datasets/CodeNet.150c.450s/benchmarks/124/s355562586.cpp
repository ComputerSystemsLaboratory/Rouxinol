#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Node
{
    vector<int> cost;
    vector<int> vertex;

    bool visited = false;
    int minCost = 100000000;
};

int N;
vector<Node> firstNodes(100);

int findNode(const vector<Node>& nodes)
{
    int minCost = 1000000000;
    int index = -1;
    for (int i = 0; i < nodes.size(); i++)
    {
        if(minCost > nodes[i].minCost && !nodes[i].visited)
        {
            minCost = nodes[i].minCost;
            index = i;
        }   
    }
    return index;
}

int main()
{
    cin >> N;
    int u;
    int k;
    int temp;
    for(int i = 0;i < N;i++)
    {
        cin >> u;
        cin >> k;
        for(int i = 0;i < k;i++)
        {
            cin >> temp;
            firstNodes[u].vertex.push_back(temp);
            cin >> temp;
            firstNodes[u].cost.push_back(temp);
        }
    }

    firstNodes[0].minCost = 0;
    
    for(int vi = 0;vi < N;vi++)
    {
        vector<Node> nodes = firstNodes;
        while(nodes[vi].visited != true)
        {
            //find a node that is visited and has minimum cost
            int index = findNode(nodes);

            Node& minNode = nodes[index];
            int vertex;
            int cost;
            minNode.visited = true;
            for (size_t i = 0; i < minNode.vertex.size(); i++)
            {
                vertex = minNode.vertex[i];
                cost = minNode.cost[i];
                nodes[vertex].minCost = min(nodes[vertex].minCost,minNode.minCost + cost);
            }
        }
        cout << vi << " " << nodes[vi].minCost << endl;
    }
}