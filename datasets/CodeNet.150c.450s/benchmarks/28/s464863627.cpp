#include<iostream>
using namespace std;

typedef long long hyper;

hyper W[100000];
int n, k;

int value(hyper P)
{
    hyper sum = 0;
    int v = 0, t = 1; // v: baggages, t: tracks.

    while(1){
        sum = sum + W[v];
        if(sum > P){
            sum = 0; t++;   // to the next track.
        }else{ v++; }       // to the new baggage.
        if(v == n || t > k) break;
    };

    return v;   // return possible ...
}

hyper solve()
{
    hyper left, right, mid;
    left = 0;
    right = 100000 * 10000;

    while(right - left > 1){

        mid = (left + right) / 2;

        if(value(mid) < n){ left = mid; }
        else{ right = mid; }
    };

    return right;
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> W[i];

    cout << solve() << endl;

    return 0;
}