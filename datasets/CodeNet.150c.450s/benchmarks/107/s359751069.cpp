#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int min(int a,int b,int c) {
    int t=a<b?a:b;
    return t<c?t:c;
}
int main() {
    string s1,s2;
    int d[1010][1010];
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    if(n==0){return n;}
    if(m==0){return m;}
    for(int i=0;i<=n;i++){
        d[i][0]=i;
    }
    for(int j=0;j<=m;j++){
        d[0][j]=j;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1] == s2[j-1]){
                d[i][j] = d[i-1][j-1];
            }
            else{
                d[i][j] = min(d[i-1][j]+1,d[i][j-1]+1,d[i-1][j-1]+1);
            }
            
        }
    }
    cout<<d[n][m]<<endl;
}