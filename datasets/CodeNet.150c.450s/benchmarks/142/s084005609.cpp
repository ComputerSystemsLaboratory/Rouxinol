#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
    ///MUST READ THE POINTS BELOW BEFORE SUBMIT

    ll n, k, arr[200005], i;
    cin >> n >> k;
    for(i = 1; i <= n; i++)
        cin >> arr[i];
    for(i = 1; i <= n; i++)
        arr[i] += arr[i-1];
    for(i = k; i < n; i++){
        if(arr[i]-arr[i-k] < arr[i+1]-arr[i+1-k]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
    ///MUST READ THE POINTS BELOW BEFORE SUBMIT
}
/**
    1. LOOK SPECIAL CASE N = 1.
    2. LOOK FOR OVERFLOW.
    3. LOOK FOR OUT OF BOUNDS.
**/
