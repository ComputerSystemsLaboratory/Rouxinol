#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(void){
    int N,A,B,C,X;
    while(cin>>N>>A>>B>>C>>X, N|A|B|C|X){
        vector<int> Y(N);
        rep(i,N)cin>>Y[i];
        int frame=0;
        rep(i,N){
            bool flag=true;
            while(flag){
                if(frame>10000){
                    frame=0;
                    break;
                }
                flag = (Y[i]!=X);
                X=(A*X+B)%C;
                frame++;
            }
            if(frame==0)break;
        }
        cout<<frame-1<<endl;
    }

    return 0;
}