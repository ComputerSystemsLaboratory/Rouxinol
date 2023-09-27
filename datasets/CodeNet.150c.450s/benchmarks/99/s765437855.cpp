#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	const char MCXI[]={'m','c','x','i'};
	const int num[]={1000,100,10,1};
	int n;
	cin>>n;
	while(n--){
		int sum=0;
		for(int j=0;j<2;++j){
			string s;
			cin>>s;
			for(int k=0,tmp=1;k<s.size();++k){
				if('2'<=s[k]&&s[k]<='9'){
					tmp=s[k]-'0';
				}else{
					for(int l=0;l<4;++l) if(s[k]==MCXI[l]) sum+=tmp*num[l];
					tmp=1;
				}
			}
		}
		stringstream sums;
		for(int j=0;j<4;++j){
		
			if(sum/num[j]==1) sums << MCXI[j];
			else if(sum/num[j]>=2) sums << (sum/num[j]) << MCXI[j];
			sum%=num[j];
		}
		cout<<sums.str()<<"\n";
	}
	return 0;
}