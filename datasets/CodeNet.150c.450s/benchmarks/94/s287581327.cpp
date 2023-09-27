#include <iostream>
using namespace std;
void arraycout(int *arrayy,int n){
    for(int u=0;u<n;u++){//出力
        if(u==n-1){
            cout<<arrayy[u]<<endl;
        }else{
            cout<<arrayy[u]<<' ';
        }
    }
    
}

int bubble(int *sou,int n){
    int flag=1;
    int kaisuu=0;
    while(flag){
        flag=0;
        for(int j=n-1;j>0;j--){
            if(sou[j]<sou[j-1]){
                /*int h=sou[j];
                sou[j]=sou[j-1];
                sou[j-1]=h;*/
                swap(sou[j],sou[j-1]);
                flag=1;
                kaisuu++;
            }
        }
    }
    return kaisuu;
    
}

int main(){
    int n;
    cin>>n;
    int sou[n];
    for(int i=0;i<n;i++){
        cin>>sou[i];
    }

   int kaisuu=bubble(sou,n);
    arraycout(sou,n);
    cout<<kaisuu<<endl;

return 0;
}

