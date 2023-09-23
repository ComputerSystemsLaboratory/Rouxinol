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


int selectionSort(int* suu,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        int minj = i;
        for(int j=i;j<n;j++){
            if(suu[j]<suu[minj]){
               
                minj=j;
                
            }
           
        }
         if(i!=minj)ans++;
        swap(suu[i],suu[minj]);
        
    }
    
    
    
    
    return ans;
}

int main(){
   
    int n;
    cin>>n;
    int suu[n];
    for(int i=0;i<n;i++){
        cin>>suu[i];
    }
    
    int ans=selectionSort(suu,n);
    arraycout(suu,n);
    cout<<ans<<endl;


return 0;
}
