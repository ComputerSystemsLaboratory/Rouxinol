#include<iostream>
using namespace std;
int main(){
    long long n,m,l,num;
    cin>>n>>m>>l;
    int A[n][m],B[m][l];
    for (int a=0;a<n;a++){
        for (int b=0;b<m;b++){
            cin>>num;
            A[a][b]=num;
        }
    }for (int a=0;a<m;a++){
        for (int b=0;b<l;b++){
            cin>>num;
            B[a][b]=num;
        }
    }long long sum=0;
    for (int a=0;a<n;a++){
        for (int c=0;c<l;c++){
            for(int b=0;b<m;b++){
                sum=sum+A[a][b]*B[b][c];
            }cout<<sum;
            sum=0;
            if(c!=l-1) cout<<" ";
        }cout<<endl;
    }return 0;
}
