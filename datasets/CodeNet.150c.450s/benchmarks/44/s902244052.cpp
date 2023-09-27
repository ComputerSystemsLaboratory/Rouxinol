#include<bits/stdc++.h>
using namespace std;

int p[4],q[4];
int main(){
    while(cin>>p[0]){
        for(int i=1;i<4;i++)cin>>p[i];
        for(int i=0;i<4;i++)cin>>q[i];

        int h=0,b=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(p[i]==q[j]){
                    if(i==j)h++;
                    else b++;
                }
            }
        }
        cout<<h<<" "<<b<<endl;
    }
    return 0;
}