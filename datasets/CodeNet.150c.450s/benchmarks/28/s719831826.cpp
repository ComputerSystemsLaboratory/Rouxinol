#include <bits/stdc++.h>
using namespace std;
int check(vector<int>& w, int& k, int& mid){
    int temp = mid, c = 0;
    // cout << "temp: " << temp << endl;
    for(int i=0; i<w.size(); i++){
        if(w[i]>mid) return 0;
        if(temp-w[i]<0){
            temp = mid;
            c++;
            temp -= w[i];
        }else{
            temp -= w[i];
        }
        // cout << temp  << endl;
    }
    if(c>=k){
    	return 0;
    }
    return 1;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k, sum=0;
    cin >> n >> k;
    vector<int> w(n);
    for(int i=0;i<n;i++){
        cin >> w[i];
        sum += w[i];
    }
    int l=0,r=sum, ans=0, mid;
    while(l<=r){
        mid = floor((l+r)/2);
        if(check(w,k,mid) ){
            r = mid-1;
            ans = mid;
        }else{
            l = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}
