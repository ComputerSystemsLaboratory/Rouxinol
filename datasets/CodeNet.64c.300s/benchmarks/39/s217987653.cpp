#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define int long long

signed main(){
        int a;
        while( scanf("%lld", &a) != EOF ){
                int ans = 0;
                for(int i=0;i<10;i++)
                        for(int j=0;j<10;j++)
                                for(int k=0;k<10;k++)
                                        for(int l=0;l<10;l++)
                                                if(i+j+k+l==a) ans++;

                printf("%lld\n",ans);
        }
        return 0;
}