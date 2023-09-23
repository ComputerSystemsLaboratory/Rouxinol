#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,s;
    while(cin>>x>>y>>s,x){
        int res=0;
        for(int r=1;r<=s;r++)
            for(int k=1;k<=s;k++)
                if(int(double(100+x)/100*r+0.00001)+int(double(100+x)/100*k+0.00001)==s)
                    res=max(res,int(double(100+y)/100*r+0.000001)+int(double(100+y)/100*k+0.000001));

        cout<<res<<endl;




    }


    return 0;
}