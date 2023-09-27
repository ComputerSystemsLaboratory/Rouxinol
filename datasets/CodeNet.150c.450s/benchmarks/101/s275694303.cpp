#include <iostream>
#include <vector>
#include <stack>

using namespace std;

static const int MAX = 100000;
static const int NIL = -1;

int n; //number of users
vector<int> G[MAX];
int color[MAX];

void dfs(int userid, int groupid) {
    stack<int> S;
    S.push(userid);
    color[userid] = groupid;
    while ( !S.empty() ) {
        int user = S.top(); S.pop();
        for (unsigned long i = 0; i < G[user].size(); i++) {
            int partner = G[user][i];
            //if partner is not member of a group -> join to user's group
            if (color[partner] == NIL) {
                color[partner] = groupid;
                //add partner to stack, then check partner's partner list (use while)
                S.push(partner);
            }
        }
    }
}

//create a group list named as color
//result is color = [1, 1, 1, 2, 2, 3, 3, 3, 3, 3]
void assingColor() {
    int id = 1;
    for (int i = 0; i < n; i++) color[i] = NIL; // create empty group list
    for (int u = 0; u < n; u++) {
        //u = user id, id = group id
        if (color[u] == NIL) dfs(u, id++); //fill group list with dfs
    }
    //for (int i = 0; i < n; i++) cout << color[i] << " ";
    //cout << endl;
}

int main()
{
    int m; //number of relationships
    int s, t; //user and partner id
    int q; //number of question
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> s >> t;
        G[s].push_back(t); //push user's partner id to user relationship list
        G[t].push_back(s); //push user id to user's partner relationship list
    }
    assingColor();

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s >> t; // user and partner data
        if (color[s] == color[t]) { cout << "yes" << endl; }
        else { cout << "no" << endl; }
    }
    return 0;
}

