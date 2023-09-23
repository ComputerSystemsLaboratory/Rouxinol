#include<iostream>

using namespace std;
int main(){
	int x;
	cin >> x;
	for(int i=0; i<x; i++){
		int y,m,d,ans=0;
		cin>>y>>m>>d;
		int big = 333 - y/3;
		int small = 999 - y - big;
		//cout << big << " " << small << endl;
		ans += big*200+small*(20+19)*5;
		if(y%3==0){
			ans+=(20-d+1)+(10-m)*20;
		}else{
			int smallm = 10/2 - m/2;
			int bigm = 10 - m - smallm;
			//cout << bigm << " " << smallm << endl;
			ans+=bigm*20+smallm*19 + (m%2==0 ? 19 : 20) - d+1;
			
		}
		cout << ans << endl;
	}
}