#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

#define MAX 100005
#define INF INT_MAX

typedef long long ll;
typedef pair<int, int> P;

void maxHeapify(vector<ll>& a, int i)
{
    int l = 2*i;
    int r = 2*i+1;
    int h = a.size()-1;

    int largest = i;
    if (l <= h && a[l] > a[largest]) largest = l;
    if (r <= h && a[r] > a[largest]) largest = r;
    if (largest != i) {
        swap(a[largest], a[i]);
        maxHeapify(a, largest);
    }
}

void buildMaxHeap(vector<ll>& a)
{
    int h = a.size()-1;
    for (int i = h/2; i >= 1; i--) {
        maxHeapify(a, i);
    }

}

void push(vector<ll>&a, ll key)
{
    a.push_back(key);

    ll h = a.size()-1;
    ll x = h;
    while (x/2 > 0 && a[x/2] < a[x]) {
        swap(a[x/2], a[x]);
        x /= 2;
    }
}

ll pop(vector<ll>& a)
{
    ll res = a[1];
    a[1] = a.back();
    a.pop_back();
    maxHeapify(a, 1);
    return res;
}

int main(int, char**)
{
    string s;
    ll k;
    vector<ll> a;

    a.push_back(0); // 1originにするためのダミー

    while (true) {
        cin >> s;
        if (s == "end") break;
        if (s == "insert") {
            cin >> k;
            push(a, k);
        } else if (s == "extract") {
            cout << pop(a) << endl;
        }
    }
    return 0;
}

