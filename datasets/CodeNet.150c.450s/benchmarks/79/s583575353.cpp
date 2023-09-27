#include<iostream>
using namespace std;
int main(){
    int n,r,p,c;
    while(true){
        cin>>n>>r;
        if(n==0&&r==0){
            break;    
        }else{
            int A[n];
            for(int i=0;i<n;i++){
                A[i]=n-i;   
            }
            for(int j=0;j<r;j++){
                cin>>p>>c;
                int B[p-1];
                for(int i=0;i<p-1;i++){
                    B[i] = A[i];  
                }
                for(int i=0;i<c;i++){
                    A[i]=A[p-1+i];   
                }
                for(int i=0;i<p-1;i++){
                    A[c+i]=B[i];   
                }
            }
            cout<<A[0]<<endl;
        }
    }
    return 0;
}