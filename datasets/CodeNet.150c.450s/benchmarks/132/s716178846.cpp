#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p;

    while(cin>>n>>p,n|p){
        int c=p;
        int res;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            if(c>0){
                if(++v[i] == p){
                    res=i;
                    break;
                }
                c--;
            }else{
                c+=v[i];
                v[i]=0;
            }
            if(i==n-1) i=-1;
        }

        cout << res << endl;
    }
}