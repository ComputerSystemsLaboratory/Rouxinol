#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define int long long

signed main(){
        //int a;
        //while( scanf("%lld", &a) != EOF ){}

        int w;
        scanf("%lld",&w);
        vector<int> line(w);
        for(int i=0;i<w;i++){
                line[i] = i;
        }

        int n;
        scanf("%lld",&n);
        for(int i=0;i<n;i++){
        int a,b;
        scanf("%lld,%lld",&a,&b);
        int t = line[a-1];
        line[a-1] = line[b-1];
        line[b-1] = t;
        }

        for(int i=0;i<w;i++){
                cout << line[i] +1 << endl;
        }


        return 0;
}