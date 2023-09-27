#include <iostream>
#include <queue>
using namespace std;

typedef struct node{
    int vertexCode;
    node* next;
}* nodeptr;

class chainTable {
private:
    // nothing :P
public:
    nodeptr head, tail;

    chainTable() : head(NULL), tail(NULL) {}

    void push(int newVC) {  //  VC = Vertex Code
        nodeptr tmp = new node();
        tmp->vertexCode = newVC;
        tmp->next = NULL;

        if (this->head == NULL) {
            this->head = this->tail = tmp;
        } else {
            this->tail = this->tail->next = tmp;
        }
    }

    bool canGoTo(int target) {
        nodeptr tmp = this->head;
        while (tmp != NULL) {
            if (tmp->vertexCode == target) return true;
            else tmp = tmp->next;
        }

        return false;
    }

//    void travel(int target) {
//        nodeptr tmp = this->head;
//        while (tmp != NULL) {
//            if (tmp->vertexCode == target) return true;
//            else cout << tmp->vertexCode;
//        }
//
//        return false;
//    }
};

int main() {
   // freopen("in.txt", "r", stdin);

    int n, u, k, v;
    cin >> n;

    vector<chainTable> aList(n + 1);  // aList = adjacency list

    for (int i = 0; i < n; ++i) {
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            cin >> v;
            aList[u].push(v);
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (aList[i].canGoTo(j)) {
                cout << "1";
            } else {
                cout << "0";
            }
            if (j != n) cout << " ";
        }
        cout << endl;
    }
//
//    cout << "--------------" << endl;
//    for (int i = 0; i < n; ++i) {
//        aList[i].travel();
//    }
}