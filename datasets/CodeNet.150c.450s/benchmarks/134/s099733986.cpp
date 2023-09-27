#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
  
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
  
using namespace std;
  
typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;
  
const int INF=1<<29;
const double EPS=1e-9;
  
const int dx[]={1,0,-1,0,1,1,-1,-1},dy[]={0,-1,0,1,1,-1,-1,1};

int N;
std::vector<vector<int> > G;


void preorder(int i) {
    cout << " " << i;
    if (G[i][0] != -1) preorder(G[i][0]);
    if (G[i][1] != -1) preorder(G[i][1]);
}

void inorder(int i) {
    if (G[i][0] != -1) inorder(G[i][0]);
    cout << " " << i;
    if (G[i][1] != -1) inorder(G[i][1]);
}

void postorder(int i) {
    if (G[i][0] != -1) postorder(G[i][0]);
    if (G[i][1] != -1) postorder(G[i][1]);
    cout << " " << i;
}

int main() {

    cin >> N;
    for (int i = 0; i < N; i++) {
        G.push_back(vector<int>());
    }
    std::vector<int> notroot(N, 0);

    for (int i = 0; i < N; i++) {
        int id;
        cin >> id;
        for (int j = 0; j < 2; j++) {
            int child;
            cin >> child;
    
            if (child != -1) notroot[child] = 1;
            G[id].push_back(child);
        }
    }

    int root;
    for (int i = 0; i < N; i++) {
        if (notroot[i] == 0) {
            root = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    preorder(root);
    cout << endl << "Inorder" << endl;
    inorder(root);
    cout << endl << "Postorder" << endl;
    postorder(root);
    cout << endl;

    return 0;
}