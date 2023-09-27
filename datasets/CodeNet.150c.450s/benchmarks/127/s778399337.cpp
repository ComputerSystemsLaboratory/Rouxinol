#include<set>
#include<cstdio>
#include<cstring>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef long long ll;

ll rolling_hash(int n,const char *s){
	static const ll P=1000000007;
	ll h=0;
	rep(i,n) h=(h*P+s[i]);
	return h;
}

void strrev(char *s,const char *t){
	int n=strlen(t);
	rep(i,n) s[n-i-1]=t[i];
	s[n]='\0';
}

int main(){
	int T; scanf("%d",&T);
	while(T--){
		char s[73]; scanf("%s",s);
		int n=strlen(s);

		set<ll> H;
		rep(i,n){
			char t1[73],t2[73];
			strncpy(t1,s,i); t1[i]='\0';
			strcpy(t2,s+i);
			rep(S,4){
				char u1[73],u2[73];
				strcpy(u1,t1); if(S&1) strrev(u1,t1);
				strcpy(u2,t2); if(S&2) strrev(u2,t2);
				rep(j,2){
					char v[73];
					if(j==0) sprintf(v,"%s%s",u1,u2);
					if(j==1) sprintf(v,"%s%s",u2,u1);
					H.insert(rolling_hash(n,v));
				}
			}
		}

		printf("%d\n",H.size());
	}

	return 0;
}