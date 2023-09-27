#include <bits/stdc++.h>
using namespace std;
#define For(I,A,B) for(int I=(A); I < (B); ++I)
int c[1005][1005];
int main()
{
int t;
string p;
cin>>t;
getline(cin,p);
while(t--){

int x,y,z,k=0,l,i,j;
string a,b,q="o",r="o";

 For(i,0,1005)
 For(j,0,1005)
 c[i][j]=0;

 getline(cin,a);
 getline(cin,b);
 x=a.length();
 y=b.length();

  For(i,0,x) q=q+a[i];

  For(i,0,y) r=r+b[i];
 For(i,1,x+1)
 For(j,1,y+1)
 {
     if(q[i]==r[j]) c[i][j]=c[i-1][j-1]+1;
     else  c[i][j]=max(c[i-1][j],c[i][j-1]);
 }
    cout<<c[x][y]<<endl;

}

    return 0;
}