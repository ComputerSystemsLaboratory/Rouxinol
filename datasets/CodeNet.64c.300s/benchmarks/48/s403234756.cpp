#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    bool f[1000001];
    fill(f,f+1000001,true);
    f[0]=f[1]=false;
    for(int i=2;i*i<=1000001;i++)
        if(f[i])
            for(int j=i*i;j<=1e6;j+=i)
                f[j]=false;

    int n;
    while(cin>>n)
        cout<<count(f,f+n+1,true)<<endl;

}