#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	cin>>n;
	char c;
	scanf("%c",&c);
	lp(i,n){
		int count=1,memo1=0;
		lp(i,2){
			while(1){
				scanf("%c",&c);
				if('2'<=c &&c<='9'){
					count=c-'0';
				}
				else if('a'<=c&&c<='z'){
					if(c=='m') memo1+=count*1000;
					if(c=='c') memo1+=count*100;
					if(c=='x') memo1+=count*10;
					if(c=='i') memo1+=count*1;
					count=1;
				}
				else break;
			}
		}
		if(memo1>=1000){
			if(memo1<2000) cout<<"m";
			else cout<<memo1/1000<<"m";
		}
		memo1%=1000;
		if(memo1>=100){
			if(memo1<200) cout<<"c";
			else cout<<memo1/100<<"c";
		}
		memo1%=100;
		if(memo1>=10){
			if(memo1<20) cout<<"x";
			else cout<<memo1/10<<"x";
		}
		memo1%=10;
		if(memo1>=1){
			if(memo1<2) cout<<"i";
			else cout<<memo1/1<<"i";
		}
		cout<<endl;
	}
	return 0;
}
