#include<iostream>
using namespace std;
 
int main()
{
    int n,i,j,a[4][14],k;
    char c;
     
    for(j=0;j<4;j++){
        for(i=1;i<=13;i++){
            a[j][i]=0;
            }
        }
             
    cin>>n;
    for(i=0;i<n;i++){
    cin>>c>>k;
    if(c=='S')
        a[0][k]=1;
    else if(c=='H')
        a[1][k]=1;
    else if(c=='C')
        a[2][k]=1;
    else if(c=='D')
        a[3][k]=1;
    }
     
    for(j=0;j<4;j++){   
        for(i=1;i<=13;i++){
            if(a[j][i]==0){
                if(j==0)
                cout<<'S'<<" "<<i<<endl;
                else if(j==1)
                cout<<'H'<<" "<<i<<endl;
                else if(j==2)
                cout<<'C'<<" "<<i<<endl;
                else if(j==3)
                cout<<'D'<<" "<<i<<endl;
                }
            }
        }
    return 0;
}