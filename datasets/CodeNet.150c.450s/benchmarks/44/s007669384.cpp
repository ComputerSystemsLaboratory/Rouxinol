#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[4],b[4],b1=0,b2=0,hit=0,boro=0;
    while(scanf("%d",&a[0])!=EOF){
        for(int i=1;i<4;i++){
            cin>>a[i];
        }
        for(int i=0;i<4;i++){
            cin>>b[i];
        }
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(i==j&&a[i]==b[j]){
                    b1=0;b2=1;
                    break;
                }
                if(a[i]==b[j])b1=1;
            }
            hit+=b2;boro+=b1;
            b1=0;b2=0;
        }
        cout<<hit<<" "<<boro<<endl;
        hit=0;boro=0;
    }
}