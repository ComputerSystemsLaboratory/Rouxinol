#include<iostream>
using namespace std;
int main(){
    int H,M,L;
    cin>>H;
    M=H*2 + 2;
    int A[M];
    for(int i=0;i<H;i++){
        L=i+H;
        cin>>A[i];
        A[L]=A[L+1]=A[L+2]=0;
    }
    
        for(int i=0;i<H;i++){
            M=i*2+1;
            L=i*2+2;
            if(i==0)  {
                
                cout<<"node "<<i+1<<": key = "<<A[0]<<", left key = "<<A[1]<<", right key = "<<A[2]<<", "<<endl;
            }
            else if(i>0 && A[M]!=0){
                int k,l,m;
                k=(i+1)/2-1;
                l=i*2 + 1;
                m=l+1;
                if(A[L]==0){
                    cout<<"node "<<i+1<<": key = "<<A[i]<<", parent key = "<<A[k]<<", left key = "<<A[l]<<", "<<endl;
                }
                else{
                    cout<<"node "<<i+1<<": key = "<<A[i]<<", parent key = "<<A[k]<<", left key = "<<A[l]<<", right key = "<<A[m]<<", "<<endl;
                }
            }
            else{
                int k;
                k=(i+1)/2-1;
                cout<<"node "<<i+1<<": key = "<<A[i]<<", parent key = "<<A[k]<<", "<<endl;
            }
                
    }
    
}
