#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        long long n;
        cin>>n;if(!n)return 0;
        char t[100000][2];
        for(int i=0;i<n;++i){
            char a,b;
            cin>>a>>b;
            t[i][0]=a;
            t[i][1]=b;
        }
        long long m;
        cin>>m;
        for(int i=0;i<m;++i){
            char a;
            cin>>a;
            bool flag=true;
            for(int j=0;j<n;++j){
                if(t[j][0]==a){
                    cout<<t[j][1];
                    flag=false;
                }
            }
            if(flag)cout<<a;
        }
        cout<<endl;
    }
}