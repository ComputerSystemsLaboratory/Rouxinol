#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<cstring>
#include<cstdlib>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

char button1[5]={'.',',','!','?',' '};
char button2[3]={'a','b','c'};
char button3[3]={'d','e','f'};
char button4[3]={'g','h','i'};
char button5[3]={'j','k','l'};
char button6[3]={'m','n','o'};
char button7[4]={'p','q','r','s'};
char button8[3]={'t','u','v'};
char button9[4]={'w','x','y','z'};

int main(){
	string s;
	int n;
	cin>>n;
	cin.ignore();
	rep(a,n){
		getline(cin,s);
		int counta=0;
		string ans="";
		for(int i=0;i<s.size();i++){
			if(s[i]!='0'){
				counta=i;
				while(s[i]!='0' && i<s.size())i++;
				switch(s[counta]){
					case '1':
						ans+=button1[(i-counta-1)%5];
					break;
					case '2':
						ans+=button2[(i-counta-1)%3];
					break;
					case '3':
						ans+=button3[(i-counta-1)%3];
					break;
					case '4':
						ans+=button4[(i-counta-1)%3];
					break;
					case '5':
						ans+=button5[(i-counta-1)%3];
					break;
					case '6':
						ans+=button6[(i-counta-1)%3];
					break;
					case '7':
						ans+=button7[(i-counta-1)%4];
					break;
					case '8':
						ans+=button8[(i-counta-1)%3];
					break;
					case '9':
						ans+=button9[(i-counta-1)%4];
					break;
					default:
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}