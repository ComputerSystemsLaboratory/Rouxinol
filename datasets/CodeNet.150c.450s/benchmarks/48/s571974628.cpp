#include "bits/stdc++.h"

using namespace std;

const int INF = numeric_limits<int>::max() / 2;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int e;
    while(cin>>e,e){
        int res=INF;
        for(int y=0;y*y<=e;y++){
            for(int z=0;z*z*z<=e;z++){
                int x=e-y*y-z*z*z;
                if(x<0)continue;
                res=min(res,x+y+z);
            }
        }
        cout<<res<<endl;
    }
}