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
int main(int, char**)
{
    int n;
    cin >> n;

    vector<ll> a(n+1, 0LL);
    for (int i = 1; i <= n; i++) cin >> a[i];

    buildMaxHeap(a);

    for (int i = 1; i <= n; i++) {
        cout << " " << a[i];
    }
    cout << endl;
    return 0;
}

