#include <iostream>
#include <queue>
#define MAX_NUM 100001
#define INF 2147483647
using namespace std;

typedef struct node {
    int id;
    int dist;
    node* next;

    node(int inpId, long long int inpDist, node* inpNext = NULL): id(inpId), dist(inpDist), next(inpNext) {}
}* nodeptr;

class chain {
public:
    nodeptr head;
    nodeptr tail;

    chain(): head(NULL), tail(NULL) {}

    void push(int id, long long int dist) {
        nodeptr tmp = new node(id, dist);
        if (this->tail != NULL) {
            this->tail->next = tmp;
            this->tail = tmp;
        } else {
            this->head = this->tail = tmp;
        }
    }
};

typedef pair<long long int, int> pii;

int V, E, r;
int si, ti;
long long int di;
int S[MAX_NUM];
long long int d[MAX_NUM];
chain* adjacencyList[MAX_NUM];
priority_queue<pii, vector<pii>, greater<pii> > q;

void dijkstra() {
    nodeptr tmp;

    while (!q.empty()) {
        pii u = q.top(); q.pop();
        int x = u.second;
        if (S[x]) {continue;}
        S[x] = 1;

        tmp = adjacencyList[x]->head;
        while (1) {
            if (tmp != NULL) {
                if (tmp->dist + d[x] < d[tmp->id]) {
                    d[tmp->id] = tmp->dist + d[x];
                    q.push(make_pair(d[tmp->id], tmp->id));
                }
                tmp = tmp->next;
            } else {
                break;
            }
        }
    }
}

int main() {
//    freopen("in.txt", "r", stdin);

    cin >> V >> E >> r;
    for (int i = 0; i < MAX_NUM; ++i) {
        adjacencyList[i] = new chain();
        S[i] = 0;
        d[i] = i == r ? 0 : INF;
    }


    for (int i = 0; i < E; ++i) {
        cin >> si >> ti >> di;
        adjacencyList[si]->push(ti, di);
    }
    q.push(make_pair(d[r], r));

    dijkstra();

    for (int i = 0; i < V; ++i) {
        if (d[i] < INF) {
            cout << d[i] << endl;
        } else {
            cout << "INF" << endl;
        }
    }
}