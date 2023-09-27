#include <iostream>
#include <fstream>

using namespace std;

struct edge{
    int srcVer;
    int desVer;
    int wei; // weight
};

class Graph{
public:
    int numOfNode; // number of nodes
    int numEdge;
    int* parent; // parent nodes
    int* rankArr; //rankArr of each node
    edge* edgePointer;
    bool isAllEdgeEqual = true;

    Graph(int numOfNode, int numEdge);
    void addEdge(int idx, int srcVer, int desVer, int wei);
    void printGraph();
    //
    int findSet(int node);
    int findSetWithPC(int x); // findSet() operation with path compression
    void unionByRank(int x, int y);
    bool same(int x, int y); // check whether x and y are in the same set
    //
    void sortingEdge(int p, int r); // sort edges in ascending order of their weights, modify the ascendEdgeArr attribute
    int partitionFunc(int p, int r); // sub-procedure for quick sort function
    int kruskal(); // minimum spanning tree using disjoint set data structure
};

int main()
{
//    // import data from a txt file
//    int numVertex; // number of nodes
//    int numEdge; // number of edges
//    int a, b, c, wt_ref;
//    ifstream infile("in5.txt");
//    infile >> numVertex >> numEdge;
//    Graph myGraph(numVertex, numEdge);
//    myGraph.isAllEdgeEqual = true;
//    infile >> a >> b >> c;
//    myGraph.addEdge(0, a, b, c);
//    wt_ref = c;
//    for (int i = 1; i < numEdge; i++) {
//        infile >> a >> b >> c;
//        myGraph.addEdge(i, a, b, c);
//        if (myGraph.isAllEdgeEqual){
//            if (c != wt_ref) {myGraph.isAllEdgeEqual = false;}
//        }
//    }
//    infile.close();

    // import data from command line
    int numVertex; // number of nodes
    int numEdge; // number of edges
    int a, b, c, wt_ref;
    cin >> numVertex >> numEdge;
    Graph myGraph(numVertex, numEdge);
    myGraph.isAllEdgeEqual = true;
    cin >> a >> b >> c;
    myGraph.addEdge(0, a, b, c);
    wt_ref = c;
    for (int i = 1; i < numEdge; i++) {
        cin >> a >> b >> c;
        myGraph.addEdge(i, a, b, c);
        if (myGraph.isAllEdgeEqual){
            if (c != wt_ref) {myGraph.isAllEdgeEqual = false;}
        }
    }

    // return the sum of weights of the minimum spanning tree
    cout << myGraph.kruskal() << "\n";

    return 0;

}

Graph::Graph(int numOfNode, int numEdge) {
    this->numOfNode = numOfNode;
    this->numEdge = numEdge;
    parent = new int[numOfNode];
    rankArr = new int[numOfNode];
    edgePointer = new edge[numEdge];
    for (int i = 0; i < numOfNode; i++) {
        parent[i] = i;
        rankArr[i] = 1;
    }
}

void Graph::printGraph() {
    cout << "my graph: " << "\n";
    for (int i = 0; i < numOfNode; i++) {
        cout << this->edgePointer[i].srcVer << " ";
        cout << this->edgePointer[i].desVer << " ";
        cout << this->edgePointer[i].wei << endl;
    }
}

int Graph::findSet(int node) {
    if (parent[node] != node) {
        return findSet(parent[node]);
    } else {
        return parent[node];
    }
}

int Graph::findSetWithPC(int x) {
    if (parent[x] !=  x) {
        parent[x] = findSetWithPC(parent[x]);
    }
    return parent[x];
}

void Graph::unionByRank(int x, int y) {
    int xrep = findSetWithPC(x); // representative of node x
    int yrep = findSetWithPC(y); // representative of node y
    if (xrep == yrep) {
        return; // do nothing since x and y are curently in the same set
    }
    else if (rankArr[xrep] > rankArr[yrep]) {
        parent[yrep] = xrep;
    }
    else if (rankArr[xrep] < rankArr[yrep]) {
        parent[xrep] = yrep;
    }
    else {
        // rankArr[xrep] = rankArr[yrep]
        parent[xrep] = yrep;
        rankArr[yrep] += 1;
    }
}

bool Graph::same(int x, int y) {
    if (findSetWithPC(x) == findSetWithPC(y)) {
        return true;
    }
    else {
        return false;
    }
}

void Graph::addEdge(int idx, int srcVer, int desVer, int wei) {
    //myEdge.srcVer = srcVer; myEdge.desVer = desVer; myEdge.wei = wei;
    edgePointer[idx] = {srcVer, desVer, wei};
}

void Graph::sortingEdge(int p, int r) {
    if (p < r) {
        int q = partitionFunc(p, r);
        sortingEdge(p, q-1);
        sortingEdge(q+1, r);
    }
}

int Graph::partitionFunc(int p, int r) {
    //int x = edgePointer[r].wei;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (edgePointer[j].wei <= edgePointer[r].wei) {
            i = i + 1;
            swap(edgePointer[i], edgePointer[j]);
        }
    }
    swap(edgePointer[i+1], edgePointer[r]);
    return (i + 1);
}

int Graph::kruskal() {
    int totWt = 0;
    if (!this->isAllEdgeEqual) {
        this->sortingEdge(0, numEdge-1); // sorting edges in ascending order of weight
    }
    int cnt = 0;
    for (int i = 0; i < numEdge; i++) {
        //if (findSetWithPC(edgePointer[i].srcVer) != findSetWithPC(edgePointer[i].desVer)) {
        if (!same(edgePointer[i].srcVer, edgePointer[i].desVer)) {
            totWt += edgePointer[i].wei;
            unionByRank(edgePointer[i].srcVer, edgePointer[i].desVer);
            cnt += 1;
            if (cnt == (numOfNode-1)) { break; }
        }
    }
    return totWt;
}



