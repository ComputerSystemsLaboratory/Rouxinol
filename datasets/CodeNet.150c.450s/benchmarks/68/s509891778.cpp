#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(true){
        cin >> a;
        if(a==0)break;
        int k[a];
        for(int i=0;i<a;i++)cin >> k[i];
        sort(k,k+a);
        int ans=10000000;
        for(int i=0;i<a-1;i++){
            if(k[i+1]-k[i]<ans)ans=k[i+1]-k[i];
        }
        cout << ans << endl;
    }
}
