#include<iostream>
using namespace std;
 
int main(){
int a,b,c,d,A,B,C,D,S,T;
cin>>a>>b>>c>>d;
cin>>A>>B>>C>>D;
S=a+b+c+d;
T=A+B+C+D;
if(S>T) cout<<S<<"\n";
else cout<<T<<"\n";
return 0;
}