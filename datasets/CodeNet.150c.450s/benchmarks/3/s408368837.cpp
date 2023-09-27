#include <bits/stdc++.h>

using namespace std;

int main(){
	int q,i,a,b,j;
	string str,m_str,t_str;
	string a_str,b_str;
	string c;

	cin>>str;
	cin>>q;
	for(i = 0;i < q;i++){
		cin>>m_str;
		cin>>a>>b;
		if(m_str == "print")
			cout<<str.substr(a,b-a+1)<<endl;
		else if(m_str == "reverse"){
			reverse(str.begin()+a,str.begin()+b+1);
		}
		else if(m_str == "replace"){
			cin>>t_str;
			str.replace(str.begin()+a,str.begin()+b+1,t_str);
		}
	}
	return 0;
}