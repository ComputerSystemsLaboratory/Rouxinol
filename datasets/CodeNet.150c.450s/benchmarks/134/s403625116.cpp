#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define ms(s,x) memset(s,x,sizeof(s))
#define pb push_back
#define inf 0x3f3f3f3f
#define IOS ios::sync_with_stdio(false);cin.tie(0)
typedef long long ll;
using namespace std;

const double PI = acos(-1.0);
const double eps = 1e-8;
const int MAXN = 1e5+5;
const ll MOD = 1e9+7;

#define NIL -1
struct node
{
    int p, l, r;
} t[MAXN];
int n;

void preorder(int root) //先序遍历
{
    if (root == NIL) return;
    printf(" %d", root);
    preorder(t[root].l);
    preorder(t[root].r);
}

void inorder(int root)  //中序遍历
{
    if (root == NIL) return;
    inorder(t[root].l);
    printf(" %d", root);
    inorder(t[root].r);
}

void postorder(int root)  //后序遍历
{
    if (root == NIL) return;
    postorder(t[root].l);
    postorder(t[root].r);
    printf(" %d", root);
}

int main()
{
    int root, id, left, right;
    cin >> n;
    rep(i, 0, n-1){
        t[i].p = t[i].l = t[i].r = NIL;
    }
    rep(i, 0, n-1){
        cin >> id >> left >> right;
        t[id].l = left;
        t[id].r = right;
        if (left != NIL) t[left].p = id;
        if (right != NIL) t[right].p = id;
    }
    rep(i, 0, n-1){
        if (t[i].p == NIL){
            root = i;
            break;
        }
    }
    printf("Preorder\n");
    preorder(root);
    printf("\nInorder\n");
    inorder(root);
    printf("\nPostorder\n");
    postorder(root);
    putchar('\n');

    return 0;
}

