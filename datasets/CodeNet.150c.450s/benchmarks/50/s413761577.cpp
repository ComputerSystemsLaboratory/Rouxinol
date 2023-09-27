#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a,cnt=0,cmp;
    vector<int> q;
    int w[6]={500,100,50,10,5,1};
    while(1){
        cin >> a;
        if(a==0){break;}
        q.push_back(a);
    }
    int g=q.size();
    for(int j=0;j<g;j++){
        cmp=1000-q[j];
        for(int i=0;i<6;i++){
            cnt+=cmp/w[i];
            cmp-=w[i]*(cmp/w[i]);
        }
        cout << cnt << endl;
        cnt=0;
    }

    return 0;
}
