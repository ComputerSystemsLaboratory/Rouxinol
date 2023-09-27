#include <bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int n,a,b,c,x; cin>>n>>a>>b>>c>>x;

        if(n ==0  && a == 0 && b == 0 && c == 0 && x == 0) break;

        vector<int> y(n);

        for(int i=0; i<n; i++) cin>>y[i];

        int count=0,top=0;

        while(1){

            if(count > 10000) break;

            if(x == y[top]){
                y.erase(y.begin()+top);
            }

            if(y.size() == 0) break;
            count++;
            x = (a*x+b) % c;
        }

        if(y.size() != 0) cout<<-1<<endl;

        else cout<<count<<endl;
    }

    return 0;
}
