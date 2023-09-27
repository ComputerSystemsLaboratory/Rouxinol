#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 500000;
const ll INF = 1LL<<60;
typedef struct Node { ll num; char c; } node;
ll cnt;

void merge(vector<node> &seq, ll left, ll mid, ll right) {
    ll n1 = mid - left;
    ll n2 = right - mid;
    vector<node> seq_left(n1), seq_right(n2);
    for(ll i = 0; i < n1; i++) seq_left.at(i) = seq.at(left+i);
    for(ll i = 0; i < n2; i++) seq_right.at(i) = seq.at(mid+i);
    node infinite; infinite.num = INF;
    seq_left.push_back(infinite); seq_right.push_back(infinite);
    ll i = 0, j = 0;
    for( ll k = left; k < right; k++ ) {
        cnt++;
        if( seq_left.at(i).num <= seq_right.at(j).num) {
            seq.at(k) = seq_left.at(i++);
        } else {
            seq.at(k) = seq_right.at(j++);
        }
    }
}

void merge_sort(vector<node> &seq, ll left, ll right) {
    if( left + 1 < right) {
        ll mid = (left + right) / 2;
        merge_sort(seq, left, mid);
        merge_sort(seq, mid, right);
        merge(seq, left, mid, right);
    }
}

ll partition(vector<node> &seq, ll p, ll right) {
    node x = seq.at(right);
    ll i = p - 1;
    for( ll j = p; j < right; j++) {
        if( seq.at(j).num <= x.num) {
            i++;
            node temp = seq.at(i); seq.at(i) = seq.at(j); seq.at(j) = temp;
            // swap(seq.at(i), seq.at(j));
        }
    }
    node temp = seq.at(i+1); seq.at(i+1) = seq.at(right); seq.at(right) = temp; 
    // swap(seq.at(i+1), seq.at(right));

    return i + 1;
}

void quick_sort(vector<node> &seq, ll p, ll r) {
    if(p < r) {
        ll q = partition(seq, p, r);
        quick_sort(seq, p, q-1);
        quick_sort(seq, q+1, r);
    }
}

void quicksort(vector<node> &seq, ll n) {
    quick_sort(seq, 0, n-1);
}

signed main() {
    ll n; scanf("%lld", &n); 
    vector<node> seq(n);
    // for( ll i = 0; i < n; i++ ) scanf("%c %lld", &seq.at(i).c, &seq.at(i).num);
    for( ll i = 0; i < n; i++ ) cin >> seq.at(i).c >> seq.at(i).num;

    // for (ll j = 0; j < n-1; j++)
    // { printf("%c %lld\n", seq.at(j).c, seq.at(j).num); }
    // printf("%c %lld\n", seq.at(n-1).c, seq.at(n-1).num);

    vector<node> sorted_merge(n); sorted_merge = seq; merge_sort(sorted_merge, 0, n);
    vector<node> sorted_quick(n); sorted_quick = seq; quicksort(sorted_quick,n);
    bool flg = true;
    for (ll i = 0; i < n; i++) {
        if( sorted_quick.at(i).c != sorted_merge.at(i).c ) {
            flg = false; break;
        } 
    }
    if(flg) printf("Stable\n");
    else printf("Not stable\n");
    for (ll j = 0; j < n-1; j++)
    // { cout << sorted_quick.at(j).c << ' ' << sorted_quick.at(j).num << endl; }
    // cout << sorted_quick.at(n-1).c << ' ' << sorted_quick.at(n-1).num << endl;
    { printf("%c %lld\n", sorted_quick.at(j).c, sorted_quick.at(j).num); }
    printf("%c %lld\n", sorted_quick.at(n-1).c, sorted_quick.at(n-1).num);
    // cout << endl;
    // for (ll j = 0; j < n-1; j++)
    // { printf("%c %lld\n", sorted_merge.at(j).c, sorted_merge.at(j).num); }
    // printf("%c %lld\n", sorted_merge.at(n-1).c, sorted_merge.at(n-1).num);
    return 0;
}


