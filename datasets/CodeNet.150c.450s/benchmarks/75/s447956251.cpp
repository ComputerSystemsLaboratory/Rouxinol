#include <iostream>
#include <vector>


using namespace std;


using ll = long long;


void max_heapify(vector<ll> &A, ll i)
{
    ll li, ri, max_i;
    li = i * 2;
    ri = i * 2 + 1;
    max_i = i;

    if (li <= A.size() - 1 && A[i] < A[li]) {
        max_i = li;
    }

    if (ri <= A.size() - 1 && A[max_i] < A[ri]) {
        max_i = ri;
    }

    if (i != max_i) {
        ll t = A[max_i];
        A[max_i] = A[i];
        A[i] = t;

        max_heapify(A, max_i);
    }
}


void build_max_heap(vector<ll> &A)
{
    for (ll i = (A.size() - 1) / 2; i >= 1; i--) {
        max_heapify(A, i);
    }
}


int main()
{
    ll H;
    cin >> H;
    vector<ll> A(H + 1);
    for (ll i = 1; i <= H; i++)
        cin >> A[i];
    build_max_heap(A);
    for (ll i = 1; i <= H; i++) {
        cout << " " << A[i];
    }
    cout << endl;
}

