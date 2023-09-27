#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Node {
    int visit = 0;
    vector<int> next;
    int s = 0;
    int start = 0;
    int end = 0;
};

int main() {
    int n, id, k, temp, time = 1;
    Node node[101];
    stack<int> st;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> id >> k;
        for (int j = 0; j < k; j++) {
            cin >> temp;
            node[id].next.push_back(temp);
        }
    }

    while (1) {
        int s = -1;
        for (int i = 1; i <= n; i++) {
            if (node[i].visit == 0) {
                s = i;
                break;
            }
        }
        if (s == -1) {
            break;
        }
        
        node[s].start = time++;
        node[s].visit = 1;
        st.push(s);
        while (!st.empty()) {
            temp = st.top();
            if (node[temp].s < node[temp].next.size()) {
                if (node[node[temp].next[node[temp].s]].visit == 0) {
                    node[node[temp].next[node[temp].s]].start = time++;
                    node[node[temp].next[node[temp].s]].visit = 1;
                    st.push(node[temp].next[node[temp].s++]);
                }
                else {
                    node[temp].s++;
                }
            }
            else {
                node[temp].visit = 2;
                node[temp].end = time++;
                st.pop();
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << node[i].start << " " << node[i].end << endl;
    }

    return 0;
}