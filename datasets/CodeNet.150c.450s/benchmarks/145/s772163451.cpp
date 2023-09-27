#include<iostream>
#include<cstring>
#include<string>
#define MAX 1060
using namespace std;
typedef struct{
	char s[MAX];
	int sum;
} gg;
char mstr[MAX],lstr[MAX],str[MAX],pre[MAX];
int lon=0,r,gs=0,mx=0;
gg sp[MAX];
void func(int x){
	int i;
	for(i=0;i<gs;i++){
		if(strncmp(sp[i].s,&str[x],r)==0){
			sp[i].sum++;
			break;
		}
	}
	if(i==gs){
		strncpy(sp[gs].s,&str[x],r);
		sp[gs].s[r]='\0';
		sp[gs++].sum=1;
	}
	if(sp[i].sum>mx){
		mx=sp[i].sum;
		strcpy(mstr,sp[i].s);
		mstr[strlen(sp[i].s)]='\0';
	}
}
int lo(int x){
	int i;
	for(i=x;isalpha(str[i]);i++)
		;
		return i-x;
}
void solve(){
	for(int i=0;str[i]!='\0';i++){
		if(isalpha(str[i])){
			r=lo(i);
			if(r>lon){
				lon=r;
				strncpy(lstr,&str[i],r);
				lstr[r]='\0';
			}
			func(i);
			i+=(r-1);
		}
	}
}
int main(){
	cin.getline(str,MAX);
		gs=0;mx=0;lon=0;
		solve();
		cout<<mstr<<' '<<lstr<<endl;
	return 0;
}