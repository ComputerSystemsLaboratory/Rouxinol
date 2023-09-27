#include <iostream>
#include <vector>


using namespace std;


using ll = long long;

class node {
    public:
        node();
        ll p, l, r;
};


node::node()
    : p(-1), l(-1), r(-1)
{
}


void preorder(ll now, vector<node> &nodes, vector<ll> &log)
{
    log.push_back(now);
    if (nodes[now].l != -1)
        preorder(nodes[now].l, nodes, log);
    if (nodes[now].r != -1)
        preorder(nodes[now].r, nodes, log);
}


void inorder(ll now, vector<node> &nodes, vector<ll> &log)
{
    if (nodes[now].l != -1)
        inorder(nodes[now].l, nodes, log);
    log.push_back(now);
    if (nodes[now].r != -1)
        inorder(nodes[now].r, nodes, log);
}


void postorder(ll now, vector<node> &nodes, vector<ll> &log)
{
    if (nodes[now].l != -1)
        postorder(nodes[now].l, nodes, log);
    if (nodes[now].r != -1)
        postorder(nodes[now].r, nodes, log);
    log.push_back(now);
}


void print_log(vector<ll> &log)
{
    for (auto e : log) {
        cout << " " << e;
    }
    cout << endl;
}


int main()
{
    ll n;
    cin >> n;

    vector<node> nodes(n);
    for (ll i = 0; i < n; i++) {
        ll id, l, r;
        cin >> id >> l >> r;
        nodes[id].l = l;
        nodes[id].r = r;
        nodes[l].p = id;
        nodes[r].p = id;
    }

    ll r;
    for (ll i = 0; i < n; i++) {
        if (nodes[i].p == -1) {
            r = i;
            break;
        }
    }

    vector<ll> log;
    preorder(r, nodes, log);
    cout << "Preorder" << endl;
    print_log(log);
    log.clear();

    inorder(r, nodes, log);
    cout << "Inorder" << endl;
    print_log(log);
    log.clear();

    postorder(r, nodes, log);
    cout << "Postorder" << endl;
    print_log(log);
}

