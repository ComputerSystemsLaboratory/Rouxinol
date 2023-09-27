#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int y,m,d;
        cin>>y>>m>>d;
        int k=m;
        int cnt=0;
        if(y%3==0)
            cnt+=20-d+1;
        else if(m%2)
            cnt+=20-d+1;
        else
            cnt+=19-d+1;
        k++;
        for(int j=y;j<1000;j++){
            for(;k<=10;k++){
                if(j%3==0)
                    cnt+=20;
                else if(k%2)
                    cnt+=20;
                else
                    cnt+=19;


            }
            k=1;
        }
        cout<<cnt<<endl;

    }


    return 0;
}