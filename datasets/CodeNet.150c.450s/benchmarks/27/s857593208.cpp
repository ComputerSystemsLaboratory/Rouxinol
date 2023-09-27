#include <cstdio>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <stack>
#include <algorithm>
#include <random>
#include <iomanip>
#include <map>
#include <queue>
#include <functional>
#include <numeric>
#include <chrono>
#include <cstdlib>
using ll = long long;
using namespace std;

const ll MOD = 1e9 + 7;
const double pi = acos(-1);
typedef pair<int, int> P;
#define REP(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define EPS 1e-4
#define OUTPUT(i) (cout << (ll)i << endl)
#define ALL(a) ((a).begin(), (a).end())

bool operator<(const pair<ll, ll> &a, const pair<ll, ll> &b)
{

    if (a.first == b.first)
        return a.second < b.second;

    return a.first < b.first;
}

const int MAX = 100005;

struct Node
{
    int key;
    Node *parent, *left, *right;
};

int n;
Node *root, *NIL;

void insert(int k)
{
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL)
    {
        y = x;
        if (z->key < x->key)
        {
            x = x->left;
        }
        else
        {
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NIL)
    {
        root = z;
    }
    else
    {
        if (z->key < y->key)
        {
            y->left = z;
        }
        else
        {
            y->right = z;
        }
    }
}

void insert()
{
}
void Preorder(Node *u)
{
    cout << " " << u->key;
    if (u->left != NIL)
        Preorder(u->left);

    if (u->right != NIL)
        Preorder(u->right);
}

void Inorder(Node *u)
{

    if (u->left != NIL)
        Inorder(u->left);
    cout << " " << u->key;
    if (u->right != NIL)
        Inorder(u->right);
}

void Postorder(Node *u)
{

    if (u->left != NIL)
        Postorder(u->left);

    if (u->right != NIL)
        Postorder(u->right);
    cout << " " << u->key;
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    //cout << fixed << setprecision(15);
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            int v;
            cin >> v;
            insert(v);
        }
        else if (s == "print")
        {
            Inorder(root);
            cout << endl;
            Preorder(root);
            cout << endl;
        }
    }
    return 0;
}
