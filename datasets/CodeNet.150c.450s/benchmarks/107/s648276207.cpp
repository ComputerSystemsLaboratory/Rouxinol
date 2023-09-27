#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k,l1,l2;
    cin>>a>>b;

    l1=a.size();
    l2=b.size();
    int ar[l2+1][l1+1];
    for(i=0;i<=l2;i++){
        for(j=0;j<=l1;j++){
            if(i==0){
                ar[i][j]=j;
            }
            else if(j==0){ar[i][j]=i;}
            else if(b[i-1]==a[j-1]){ar[i][j]=ar[i-1][j-1];}
            else{ ar[i][j]=1+min(min(ar[i][j-1],ar[i-1][j]),ar[i-1][j-1]);}
        }
    }
    cout<<ar[l2][l1]<<endl;

}

