#include "bits/stdc++.h"
using namespace std;

int main(){
	
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		//getchar();
		cin.ignore();
		
		string s;
		vector<int> imo(86401,0);
		for(int i=0;i<n;i++){
			getline(cin,s);
			int st=((s[0]-'0')*10+(s[1]-'0'))*60*60+((s[3]-'0')*10+(s[4]-'0'))*60+((s[6]-'0')*10+(s[7]-'0'));
			int gt=((s[9]-'0')*10+(s[10]-'0'))*60*60+((s[12]-'0')*10+(s[13]-'0'))*60+((s[15]-'0')*10+(s[16]-'0'));
			//cout<<st<<" "<<gt<<endl;
			imo[st]++;
			imo[gt]--;
		}
		
		int tmp=0;
		int ans=0;
		
		for(int i=0;i<86401;i++){
			tmp+=imo[i];
			ans=max(ans,tmp);
		}
		
		cout<<ans<<endl;
	}
	
	
	return 0;
}