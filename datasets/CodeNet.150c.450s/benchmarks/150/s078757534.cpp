#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void couting_sort(vector<int> &a,vector<int> &b,int k){
    vector<int> cou(k,0);
    for(int i=0;i<a.size();i++)cou[a[i]]++;
    for(int i=1;i<k;i++)cou[i]+=cou[i-1];
    for(int i=a.size()-1;i>=0;i--){
        b[cou[a[i]]-1]=a[i];
        cou[a[i]]--;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,ma=0;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        ma=max(ma,a[i]);
    }
    couting_sort(a,b,ma+1);
    for(int i=0;i<b.size();i++)cout << b[i] <<(i!=b.size()-1?" ":"\n");
}

