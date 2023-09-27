#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

lli n;
mat t;
vll p;
lli s;

void preorder(lli x){
    if(x < 0) return;
    cout << " " << x;
    preorder(t[x][0]);
    preorder(t[x][1]);
}

void inorder(lli x){
    if(x < 0) return;
    inorder(t[x][0]);
    cout << " " << x;
    inorder(t[x][1]);
}

void postorder(lli x){
    if(x < 0) return;
    postorder(t[x][0]);
    postorder(t[x][1]); 
    cout << " " << x;
}

int main(){
    cin >> n;
    p = vll(n,-1);
    t = mat(n,vll(2,-1));
    for(lli i = 0;i < n;i++){
        lli id,left,right;
        cin >> id >> left >> right;
        t[id][0] = left;
        t[id][1] = right;
        if(left >= 0) p[left] = id;
        if(right >= 0) p[right] = id;
    }
    for(lli i = 0;i < n;i++){
        if(p[i] < 0){
            s = i;
            break;
        }
    }
    cout << "Preorder" << endl;
    preorder(s);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(s);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(s);
    cout << endl;

    return 0;
}