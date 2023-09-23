#include<iostream>
using namespace std;
int main(){
    int a[1000000]={0,0,1,1},n,k=0;
    for(int i=4;i<1000000;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){k++;break;}
        }
        if(!k)a[i]++;
        k=0;
    }
    int b,c,d,x,s,q;
    while(cin>>b>>c>>d,b!=0&&c!=0&&d!=0){
        s=x=q=0;
        while(1){
            x=b+c*s;
            if(a[x]==1)q++;
            if(q==d)break;
            s++;
        }
        cout<<x<<endl;
    }
    return 0;
}