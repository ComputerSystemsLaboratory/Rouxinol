#include<iostream>
#include<string>
using namespace std;
int main(){
	int m;
	cin>>m;
	while(m-->0){
		string s;
		string ans;
		pair<int,int> p;
		cin>>s;
		p.first=0;
		p.second=0;

		for(unsigned int i=0; i<s.length();++i){
			if(s[i]=='0'){
				if(p.second<=0)continue;
				switch(p.first){
					case 1:
						ans+=".,!? "[(p.second-1)%5];
						break;
					case 2:
						ans+="abc"[(p.second-1)%3];
						break;
					case 3:
						ans+="def"[(p.second-1)%3];
						break;
					case 4:
						ans+="ghi"[(p.second-1)%3];
						break;
					case 5:
						ans+="jkl"[(p.second-1)%3];
						break;
					case 6:
						ans+="mno"[(p.second-1)%3];
						break;
					case 7:
						ans+="pqrs"[(p.second-1)%4];
						break;
					case 8:
						ans+="tuv"[(p.second-1)%3];
						break;
					case 9:
						ans+="wxyz"[(p.second-1)%4];
						break;
				}
				p.first=-1;
				p.second=-1;
			}
			p.first=s[i]-'0';
			p.second++;
		}
		cout<<ans<<endl;
	}
	return 0;
}