#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
#include<complex>
#include<random>
#include<ctime>
#include<set>
using namespace std;


const long long int mod=1000000007;
const long long int INF=99999999999999999;

long long int n,q,l,r;
char d[200005],t[200005];
string s;

int main() {
	cout << fixed << setprecision(18);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.length();j++){
			if(s[j]=='0'){continue;}
			long long int memo=(s[j]-'0'),cou=0;
			j++;
			while(s[j]!='0'){
				cou++;
				j++;
			}
			if(memo>=2&&memo<=6){
				cout<<(char)('a'+(memo-2)*3+cou%3);
			}else if(memo==7){
				cout<<(char)('p'+cou%4);
			}else if(memo==8){
				cout<<(char)('t'+cou%3);
			}else if(memo==9){
				cout<<(char)('w'+cou%4);
			}else if(memo==1){
				if(cou%5==0){
					cout<<'.';
				}else if(cou%5==1){
					cout<<',';
				}else if(cou%5==2){
					cout<<'!';
				}else if(cou%5==3){
					cout<<'?';
				}else if(cou%5==4){
					cout<<' ';
				}
				
			}
			
		}
		cout<<endl;
	}
} 
