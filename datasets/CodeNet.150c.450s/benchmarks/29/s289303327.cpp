#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
typedef long long ll;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

#define EPS (1e-7)
#define INF (1e15)
#define PI (acos(-1))
#define MOD 1000000007

#define REP(i,n) for(int i=0;i<n;i++)
#define REPS(i,f,n) for(int i=(f);i<(n);i++)
#define EACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)

#define dump(x)  cout << #x << " = " << (x) << endl;
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define arrdump(n,a) for(int i=0;i<n;i++) {cout<<((i>0)? " ":"")<<a[i];}cout<<"\n";


typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy4[]={0, 0, 1, -1};
int dx4[]={1, -1, 0, 0};
int dx8[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy8[]={1, -1, 0, 0, 1, -1, -1, 1};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C&lang=jp

struct Node
{
    int key;
    Node *prev, *next;
};

Node *nil;

static void insert(int key) {
    Node* x = (Node*)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    x->prev = nil;
    nil->next->prev = x;
    nil->next = x;
}

static void deleteNode(Node* node) {
    if (node == nil) return;
    node->next->prev = node->prev;
    node->prev->next = node->next;
    free(node);
}

static Node* searchNode(int key) {
    Node* cur = nil->next;
    while(cur != nil && cur->key != key) {
        cur = cur->next;
    }
    return cur;
}

static void deleteKey(int key) {
    deleteNode(searchNode(key));
}

static void deleteFirst() {
    deleteNode(nil->next);
}

static void deleteLast() {
    deleteNode(nil->prev);
}

static void init() {
    nil = (Node*)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

static void print() {
    Node *cur = nil->next;
    int i = 0;
    while(cur != nil) {
        if (i) cout << " ";
        i++;
        cout << cur->key;
        cur = cur->next;
    }
    cout << "\n";
}

int main() {
    init();
    int n; cin >> n;
    char str[50];
    int key;

    REP(i, n) {
        scanf("%s%d", str, &key);
        string com = string(str);
        if (com == "insert") insert(key);
        if (com == "delete") deleteKey(key);
        if (com == "deleteFirst") deleteFirst();
        if (com == "deleteLast") deleteLast();
    }
    print();

    return 0;
}

