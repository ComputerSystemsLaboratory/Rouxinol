
#include <iostream>
#include<cmath>
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
void insertionSort(int* suu,int n){

    for(int i=1;i<n;i++){
        arraycout(suu,n);
        int v=suu[i];
        int j=i-1;
        while(j>=0&&suu[j]>v){
            suu[j+1]=suu[j];
            j=j-1;
        }
        
        suu[j+1]=v;
    }
    
    
}





int main(){
    int n;
    cin>>n;
    int suu[n];
    for(int i=0;i<n;i++){
        cin>>suu[i];
    }
    
    insertionSort(suu,n);
    arraycout(suu,n);
    return 0;
}
