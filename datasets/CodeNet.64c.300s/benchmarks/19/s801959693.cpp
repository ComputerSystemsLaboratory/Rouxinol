#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int* A=new int[n];
        int* S=new int[n+1];
        S[0]=0;
        for(int i=0;i<n;++i){
            cin>>A[i];
            S[i+1]=A[i]+S[i];
        }

        int maxsum=A[0];
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n+1;++j){
                maxsum=((S[j]-S[i])>maxsum?(S[j]-S[i]):maxsum);
            }
        }

        cout<<maxsum<<"\n";
        delete[] A;
        delete[] S;
    }
}