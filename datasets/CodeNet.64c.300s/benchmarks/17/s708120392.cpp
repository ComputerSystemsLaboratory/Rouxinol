#include <bits/stdc++.h>
using namespace std;
int A,B;
int getX(int x){
  double a;
  a=x*100.0/(100+A);
  int b;
  b=ceil(a);
  if((int)(b*(100.0+A)/100) != x)return -1;
     double c=b*(100.0+B)/100;
     return (int)c;
}
int main(){
	int c;
	while(cin>>A>>B>>c,A){
		int ans=0;
		for(int i=1;i<c;i++){
			int data=getX(i)+getX(c-i);
			if(data>ans){
				ans=data;
			}
		}
		cout<<ans<<endl;
	}
}