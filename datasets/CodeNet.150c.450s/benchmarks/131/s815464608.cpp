#include<iostream>
#include<algorithm>
using namespace std;
int d(int n,int l);
int a[100],ar[10];
bool q;
int main(){
int a0,l;
    while(1){
        q=false;
        cin>>a0>>l;  
    if(a0==0&&l==0)return 0;
    a[0]=a0; 
    int j=1;
    while(1){
        a[j]=d(a[j-1],l);
        for(int k=0;k<j;k++){
            if(a[k]==a[j])
            {
                cout<<k<<" "<<a[k]<<" "<<j-k<<endl;
                q=true;
                break;
            }
        }
        if(q)break;
        j++;
    }
    }
}

int d(int n,int l){
    for(int i=0;i<l;i++){
        ar[i]=n%10;
        n/=10;
    }
    sort(ar,ar+l);
    int max=0,min=0;
    for(int i=0;i<l;i++){
        min*=10;
        min+=ar[i];
    }
    for(int i=l-1;i>-1;i--){
        max*=10;
        max+=ar[i];
    }
    return max-min;
}

