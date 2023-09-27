
#include <iostream>
#include<cmath>
using namespace std;
struct Card{char ehuda,value;};
void arraycout(int *arrayy,int n){
    for(int u=0;u<n;u++){//出力
        if(u==n-1){
            cout<<arrayy[u]<<endl;
        }else{
            cout<<arrayy[u]<<' ';
        }
    }
    
}

void Bubble(Card* A,int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(A[j].value<A[j-1].value)swap(A[j],A[j-1]);
        }
    }
    
    
}

void selection(Card* B,int n){
    for(int i=0;i<n;i++){
        int minj=i;
        for(int j=i;j<n;j++){
            if(B[j].value<B[minj].value){
                minj=j;
            }
        }
        swap(B[i],B[minj]);
    }
    
    
}
void kouzoucout(Card* A,int n){
    for(int i=0;i<n;i++){
      if(i!=n-1)  cout<<A[i].ehuda<<A[i].value<<' ';
      else cout<<A[i].ehuda<<A[i].value;
            
            }
    cout<<endl;
    
}

bool isbool(Card* A,Card *B,int n){
    for(int i=0;i<n;i++){
        if(A[i].ehuda!=B[i].ehuda)return false;
    }
    return true;
    
}
int main(){
    int n;
    cin>>n;
    Card A[n],B[n];
    for(int i=0;i<n;i++){
        cin>>A[i].ehuda>>A[i].value;
    }
    for(int i=0;i<n;i++){
        B[i]=A[i];
    }
    
    Bubble(A,n);
    kouzoucout(A,n);
    cout<<"Stable"<<endl;
    selection(B,n);
    kouzoucout(B,n);
    if(isbool(A,B,n)){
        cout<<"Stable"<<endl;
    }else{
        cout<<"Not stable"<<endl;
    }
    
    
    
    
return 0;
}

