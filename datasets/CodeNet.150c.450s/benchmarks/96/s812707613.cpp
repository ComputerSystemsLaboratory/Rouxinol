#include<iostream>
#include<string>
using namespace std;

#define rep(i,a) for(int i = 0 ; i < a ; i ++)


char o[5] = {'.' , ',' , '!' , '?' , ' '};
char a[3] = {'a' , 'b' , 'c'};
char d[3] = {'d' , 'e' , 'f'};
char g[3] = {'g' , 'h' , 'i'};
char j[3] = {'j' , 'k' , 'l'};
char m[3] = {'m' , 'n' , 'o'};
char p[4] = {'p' , 'q' , 'r' , 's'};
char t[3] = {'t' , 'u' , 'v'};
char w[4] = {'w' , 'x' , 'y' , 'z'};

void display(int num,int cnt){
	switch(num){
		case 1: cout<<o[cnt%5]; break;
		case 2: cout<<a[cnt%3]; break;
		case 3: cout<<d[cnt%3]; break;
		case 4: cout<<g[cnt%3]; break;
		case 5: cout<<j[cnt%3]; break;
		case 6: cout<<m[cnt%3]; break;
		case 7: cout<<p[cnt%4]; break;
		case 8: cout<<t[cnt%3]; break;
		case 9: cout<<w[cnt%4]; break;
	}
}
	
int main(void){
	int num;
	cin>>num;
	while(num--){
		string n;
		cin>>n;
		int cnt = 0;
		int num = - 1;
		rep(i,n.size()){
			if(n[i]=='0'){
//				cout<<cnt;
				display(num,cnt);
				cnt = 0;
			}
			if(n[i]-'0'==num && n[i]!='0')cnt++;
			
			num=n[i]-'0';
		}
		cout<<endl;
	}
}