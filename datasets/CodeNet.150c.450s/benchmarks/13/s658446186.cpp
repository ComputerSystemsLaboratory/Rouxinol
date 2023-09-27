#include<bits/stdc++.h>
using namespace std;
int main(void){
	string n,s;
	cin>>n>>s;
	n+=n;
	//cout<<n<<endl;
	int i,j;
	int flg=0;
	for(i=0;i<n.size();i++){
		for(j=0;j<s.size();j++){
			if(n[i+j]!=s[j]){
				break;
			}
		}
		//cout<<j<<endl;
		if(j==s.size()) flg=1;
	}
	cout<<((flg)?"Yes":"No")<<endl;
	return 0;
}
