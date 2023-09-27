#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,k,d,S ;
while(1){ 
cin >> n >> k ;
if(n==0&&k==0){
break;
}
vector<int> a(n) ;
for(int i=0;i<n;i++){
cin >> d ;
a.at(i)=d ;
}
S=0 ;
for(int j=0;j<k;j++){
S=S+a.at(j) ;
}
int A=0;
A=S ;
for(int l=0;l<n-k;l++){
S=S-a.at(l)+a.at(l+k);
A=max(A,S) ;
}
cout << A << endl;
}
}

