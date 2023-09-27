#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;

int cal(char *s){
	int l=strlen(s);
	int p=0;
	int q;
	for(int i=0;i<l;i++){
		q=1;
		if(s[i]>=0x32 && s[i]<=0x39){
			q=s[i++]-0x30;
		}
		if(s[i]=='m') p+=q*1000;
		else if(s[i]=='c') p+=q*100;
		else if(s[i]=='x') p+=q*10;
		else if(s[i]=='i') p+=q;
	}
	return p;
}

void i2str(int p,char *str){
	int q;
	int count=0;
	if(p>=1000){
		q=p/1000;
		p%=1000;
		if(q!=1){
			str[count++]=0x30+q;
		}
		str[count++]='m';
	}
	if(p>=100){
		q=p/100;
		p%=100;
		if(q!=1){
			str[count++]=0x30+q;
		}
		str[count++]='c';
	}
	if(p>=10){
		q=p/10;
		p%=10;
		if(q!=1){
			str[count++]=0x30+q;
		}
		str[count++]='x';
	}
	if(p>=1){
		if(p!=1){
			str[count++]=0x30+p;
		}
		str[count++]='i';
	}
	str[count]=0;
}

int main(){
	int n;
	char str1[10],str2[10];
	int ians;
	char ans[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str1>>str2;
		ians=cal(str1);
		ians+=cal(str2);
		i2str(ians,ans);
		cout<<ans<<endl;
	}
	return 0;
}