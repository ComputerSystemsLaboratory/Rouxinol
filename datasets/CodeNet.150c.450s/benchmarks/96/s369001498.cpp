#include <iostream>
#include <algorithm>
#include <string>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){
	int n; cin>>n;
	char a[5]={'.',',','!','?',' '};
	rep(h,n){
		string s; cin>>s;
		string ans="";
		int key=0,cnt=-1;
		int x=s.size();
		rep(i,x){
			if(s[i]=='0'){
				switch(key){
					case 0:
						break;
					case 1:
						ans+=a[0+cnt%5];
						break;
					case 2:
						ans+='a'+(cnt%3);
						break;
					case 3:
						ans+='d'+(cnt%3);
						break;
					case 4:
						ans+='g'+(cnt%3);
						break;
					case 5:
						ans+='j'+(cnt%3);
						break;
					case 6:
						ans+='m'+(cnt%3);
						break;
					case 7:
						ans+='p'+(cnt%4);
						break;
					case 8:
						ans+='t'+(cnt%3);
						break;
					case 9:
						ans+='w'+(cnt%4);
						break;
				}
				cnt=-1;
				key=0;
			}else{
				key=s[i]-'0'; cnt++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

