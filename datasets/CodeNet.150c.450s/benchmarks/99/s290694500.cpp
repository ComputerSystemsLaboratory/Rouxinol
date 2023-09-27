#include<bits/stdc++.h>

#define ll long long
#define inf 100000000

using namespace std;

int n;


int toInt(char a){
		char b[8]={'2','3','4','5','6','7','8','9'};
		for(int i=0;i<8;i++){
				if(a==b[i]){
						return 2+i;
				}
		}
}

bool isint(char a){
		char b[8]={'2','3','4','5','6','7','8','9'};
		for(int i=0;i<8;i++){
				if(a==b[i])return true;
		}
		return false;
}

int is(string a){
		char o,p,q,r;
		int b=inf,c=inf,d=inf,e=inf;
		for(int i=0;i<a.length();i++){
				if(a[i]=='m'){
						b=i;	
				}
				if(a[i]=='c'){
						c=i;
				}
				if(a[i]=='x'){
						d=i;
				}
				if(a[i]=='i'){
						e=i;
				}
		}
		int ans=0;
		if(b==0){
				ans+=1000;
		}else if(b==1){
				ans+=toInt(a[0])*1000;
		}
		if(c!=inf){
				if(c==0){ans+=100;}
				else if(isint(a[c-1])){
						ans+=toInt(a[c-1])*100;
				}else{
						ans+=100;
				}
		}
		if(d!=inf){
				if(d==0){ans+=10;}
				else if(isint(a[d-1])){
						ans+=toInt(a[d-1])*10;
				}else{
						ans+=10;
				}
		}
		if(e!=inf){
				if(e==0){ans+=1;}
				else if(isint(a[e-1])){
						ans+=toInt(a[e-1]);
				}else{
						ans+=1;
				}
		}
		return ans;
}

char toChar(int a){
		if(a==2)return '2';
		if(a==3)return '3';
		if(a==4)return '4';
		if(a==5)return '5';
		if(a==6)return '6';
		if(a==7)return '7';
		if(a==8)return '8';
		if(a==9)return '9';
}

int main(){
		cin>>n;
		int cont=0;
		while(cont<n){
				string s;
				string t;
				cin>>s>>t;
				int m=is(s)+is(t);
				//cout<<m<<endl;
				int a=m/1000;
				m%=1000;
				int b=m/100;
				m%=100;
				int c=m/10;
				m%=10;
				int d=m;
				string ans;
				if(a==1){
						ans+="m";
				}else if(a>1){
						ans+=toChar(a);
						ans+="m";
				}
				if(b==1){
						ans+="c";
				}else if(b>1){
						ans+=toChar(b);
						ans+="c";
				}
				if(c==1){
						ans+="x";
				}else if(c>1){
						ans+=toChar(c);
						ans+="x";
				}
				if(d==1){
						ans+="i";
				}else if(d>1){
						ans+=toChar(d);
						ans+="i";
				}
				cout<<ans<<endl;
				cont++;
		}
}