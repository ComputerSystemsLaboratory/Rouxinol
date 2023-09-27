#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ul;
#define all(x) (x).begin(), (x).end()
#define pi 3.1415926536

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(NULL), right(NULL){}
};

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x): val(x), next(NULL){}
};

int nxt(){
    int x;
    cin>>x;
    return x;
}

ll nxtLong(){
    ll x;
    cin>>x;
    return x;
}

string nxtStr(){
    string x;
    cin>>x;
    return x;
}

char nxtChar(){
    char x;
    cin>>x;
    return x;
}

double nxtDouble(){
    double x;
    cin>>x;
    return x;
}

ld nxtLDouble(){
    ld x;
    cin>>x;
    return x;
}

TreeNode* makeTree(int n){
    queue<TreeNode*> tree_nodes;
    TreeNode* root;
    if(n){
        root = new TreeNode(nxt());
        tree_nodes.push(root);
    }else{
        return NULL;
    }
    while(!tree_nodes.empty()){
        TreeNode* node = tree_nodes.front();
        tree_nodes.pop();
        bool left;
        cin>>left;
        if(left){
            node->left = new TreeNode(nxt());
            tree_nodes.push(node->left);
        }
        bool right;
        cin>>right;
        if(right){
            node->right = new TreeNode(nxt());
            tree_nodes.push(node->right);
        }
    }
    return root;
}

ListNode* makeLinkedList(int n){
    ListNode* list = new ListNode(0);
    ListNode* dummy = list;

    for(int i=0;i<n;++i){
        list->next = new ListNode(nxt());
        list = list->next;
    }

    return dummy->next;
}

void solve(){
    int n = nxt();

    vector<int> ans(10050);

    for(int i=1;i<1105;++i){
        for(int j=1;j<1105;++j){
            for(int k=1;k<1105;++k){
                ll v = (ll)i*(ll)i + (ll)j*(ll)j + (ll)k*(ll)k + (ll)i*(ll)j + (ll)j*(ll)k + (ll)k*(ll)i;
                if(v < 10050){
                    ans[v]++;
                }
            }
        }
    }
    for(int i=1;i<=n;++i){
        cout<<ans[i]<<endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(9);
    //ll t;
    //cin>>t;
    //while(t--){
    //    solve();
    //}
    solve();
    return 0;
}
