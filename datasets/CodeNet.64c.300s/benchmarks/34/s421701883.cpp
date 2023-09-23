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


void insertionSort(int* sou,int n){//挿入ソート
    for(int i=0;i<n;i++){
        int v=sou[i];
        int j=i-1;
        while(j>=0&&v<sou[j]){
            sou[j+1]=sou[j];
            j--;
        }
        sou[j+1]=v;
        arraycout(sou,n);
    }
}
int Bubble1(int* sou,int n){
    int flag=1;
    int ans=0;
    while(flag){
        flag=0;
        for(int i=n-1;i>0;i--){
            if(sou[i]<sou[i-1]){
                flag=1;
                swap(sou[i],sou[i-1]);
                ans++;
            }
        }
    }
    return ans;
    
}
int Bubble(int* sou,int n){
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i+1;j--){
            if(sou[j]<sou[j-1]){
                ans++;
                swap(sou[j],sou[j-1]);
            }
        }
    }
    return ans;
}
int main(){
    
    int n;
    cin>>n;
    int sou[n];
    for(int i=0;i<n;i++){
        cin>>sou[i];
    }
  //  int ans=Bubble(sou,n);
   // arraycout(sou,n);
    //cout<<ans<<endl;
    insertionSort(sou,n);
    // arraycout(sou,n);
    
    return 0;
}

