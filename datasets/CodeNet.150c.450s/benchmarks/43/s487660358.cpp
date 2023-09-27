#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int p;
    int a,b;
    int n,m;
    while(1){
        n=m=0;
        cin>>p;
        if(p==0){
            break;
        }
        for(int i=0;i<p;i++){
            cin>>a>>b;
            if(a>b){
                n+=a;
                n+=b;
            }else if(a<b){
                m+=a;
                m+=b;
            }else{
                n+=a;
                m+=b;
            }
        }
        cout<<n<<" "<<m<<endl;
    }
    return 0;
}