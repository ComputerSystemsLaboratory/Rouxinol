#include<bits/stdc++.h>
#define LL long long
#define pb push_back
#define SZ(x) ((int)x.size()-1)
#define ms(a,b) memset(a,b,sizeof a)
#define F(i,a,b) for (int i=(a);i<=(b);++i)
#define DF(i,a,b) for (int i=(a);i>=(b);--i)
using namespace std;
inline LL read(){
	char ch=getchar(); LL w=1,c=0;
	for(;!isdigit(ch);ch=getchar()) if (ch=='-') w=-1;
	for(;isdigit(ch);ch=getchar()) c=(c<<1)+(c<<3)+(ch^48);
	return w*c;
}
const int M=2000;
LL d[66]; 
void ins(LL x){
	DF(i,60,0){
		if (x>>i&1){
			if (!d[i]) {
				d[i]=x; 
				break;
			}
			x^=d[i]; 
		}
	}
}
bool qry(LL x){
	DF(i,60,0){
		if (x>>i&1) x^=d[i]; 
	}
	return x;
}
char ch[M]; 
LL a[M]; 
int main(){
	int T=read(); 
	while (T--){
		int n=read(); ms(d,0);
		F(i,1,n) a[i]=read(); scanf("%s",ch+1);
		bool flag=0;
		DF(i,n,1){
			if (ch[i]=='0') {
				ins(a[i]); 
			}
			else {
				if (qry(a[i])){
					flag=1;
					break;
				}
			}
		}
		if (flag) puts("1");
		else puts("0");
	}
	return 0;
}


