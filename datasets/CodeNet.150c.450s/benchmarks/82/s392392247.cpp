#include<iostream>
#include<cctype>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
char s[100+10];
struct DICE{
	int u,s,e,w,n,d;
	DICE (int u=0,int s=0,int e=0,int w=0,int n=0,int d=0):u(u),s(s),e(e),w(w),n(n),d(d){}
	DICE fW(){
		DICE tmp;
		tmp.s=this->s;
		tmp.n=this->n;
		tmp.e=this->d;
		tmp.w=this->u;
		tmp.u=this->e;
		tmp.d=this->w;
		return tmp;
	}
	DICE fS(){
		DICE tmp;
		tmp.s=this->u;
		tmp.n=this->d;
		tmp.e=this->e;
		tmp.w=this->w;
		tmp.d=this->s;
		tmp.u=this->n;
		return tmp;
	}
	DICE fE(){
		DICE tmp;
		tmp.s=this->s;
		tmp.n=this->n;
		tmp.e=this->u;
		tmp.w=this->d;
		tmp.d=this->e;
		tmp.u=this->w;
		return tmp;
	}
	DICE fN(){
		DICE tmp;
		tmp.s=this->d;
		tmp.n=this->u;
		tmp.e=this->e;
		tmp.w=this->w;
		tmp.d=this->n;
		tmp.u=this->s;
		return tmp;
	}
	int right(int t,int f){
		if(t==this->u)
		{
			if(f==this->s)return this->e;
			else if(f==this->e)return this->n;
			else if(f==this->n)return this->w;
			else if(f==this->w)return this->s;
		}
		else if(t==this->s){
			DICE tmp=(*this).fN();
			return tmp.right(t,f);
		}
		else if(t==this->e){
			DICE tmp=(*this).fW();
			return tmp.right(t,f);
		}
		else if(t==this->n){
			DICE tmp=(*this).fS();
			return tmp.right(t,f);
		}
		else if(t==this->w){
			DICE tmp=(*this).fE();
			return tmp.right(t,f);
		}
		else if(t==this->d){
			DICE tmp=(*this).fE().fE();
			return tmp.right(t,f);
		}
		}
};
int main()
{
//#ifdef DEBUG
//	freopen("in", "r", stdin);
////	freopen("out", "w", stdout);
//#endif
	
	int a[6];
	for(int i=0;i<6;i++){
		scanf("%d", &a[i]);
	}
	DICE dice(a[0],a[1],a[2],a[3],a[4],a[5]);
//	DICE I
//	scanf("%s", s);
//	int len=strlen(s);
//	for(int i=0;i<len;i++){
//		switch(s[i]){
//			case'S':dice=dice.fS();break;
//			case'E':dice=dice.fE();break;
//			case'W':dice=dice.fW();break;
//			case'N':dice=dice.fN();break;
//		}
//	}
//	printf("%d\n", dice.u);
//
	int x,y;
	int q;
	scanf("%d", &q);
	while(q--){
		scanf("%d%d",&x,&y);
		printf("%d\n",dice.right(x,y));
	}
	return 0;
}
//aoj1_11_a.cc