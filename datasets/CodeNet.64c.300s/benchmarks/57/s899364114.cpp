#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>

using namespace std;

int N,M;

int v[10][10000];
int a[10];
int m;

int main(){

    cin.sync_with_stdio(false);

    while(1){

    cin >> N >> M;

    if(N==0 && M==0)break;

    for(int i=0;i<N;++i)
        for(int j=0;j<M;++j)
            cin >> v[i][j];

    m=0;

    memset(a,0,sizeof(a));

    for(int i=0;i<=N;++i){

        for(int j=0;j<i;++j) a[N-1-j]=1;

        do{

            int s=0;

            for(int k=0;k<M;++k){

                int ts=0;

                for(int l=0;l<N;++l){

                    ts += (v[l][k]+a[l])%2;

                }

                s += max(ts,N-ts);
            }

            m = max(m,s);


        }while(next_permutation(a,a+N));

    }

    cout << m << endl;

    }

    return 0;

}