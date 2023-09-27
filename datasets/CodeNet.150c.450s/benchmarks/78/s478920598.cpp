#include <iostream>
#define SIZE 1000000
using namespace std;
int l[SIZE+1]={0};
int m[SIZE+1]={0};

int main(){
    int i,n,a=1,b=1,c=1;
    for(i=1;i<SIZE+1;i++){
        l[i]=i;
        m[i]=i;
    }
    while(b<SIZE){
        for(i=0;i+b<SIZE+1;i++){
            l[i+b]=min(l[i+b],l[i]+1);
            if(b%2){m[i+b]=min(m[i+b],m[i]+1);}
        }
        a+=(c+1);
        b+=a;
        c++;
    }
    while(1){
        cin>>n;
        if(!n){break;}
        cout<<l[n]<<" "<<m[n]<<endl;
    }
    return 0;
}

