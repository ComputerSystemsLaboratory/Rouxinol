#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,m;
	int i,j,k;
	int a,b,c;
	int s[3];
	while(cin>>n>>m){
		if(!n)break;
		a=n*n+m*m;
		s[0]=1e9;
		for(i=1;i<=150;i++){
			b=a-i*i;
			if(b<0)break;
			b=(int)sqrt(b-1.0)+1;
			if(i==n && b==m)b++;
			if(i>=b)continue;
			c=b*b+i*i;
			if(a==c && n>=i){
				b++;
				c=b*b+i*i;
			}
			if(a==c){s[1]=i,s[2]=b;break;}
			if(c<s[0]){s[0]=c,s[1]=i,s[2]=b;}
		}
		cout<<s[1]<<" "<<s[2]<<endl;
	}
}

