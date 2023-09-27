
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : August 04, 2020 4:33 PM
 *    Problem Name  : C - Marks
 *    Problem Limit : 2000 ms , 1024 MB
 *    Problem Url   : https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_c
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    ll n,k;
    cin >> n >> k;

    ll arr[n+1];

    for(ll i=0; i<n; i++)
        cin >> arr[i];
    
    for(ll i=k; i<n; i++){
        if( arr[i-k] < arr[i] ){
            cout << "Yes" << endl;
        }

        else cout << "No" << endl;
    }

    return 0 ;
}
