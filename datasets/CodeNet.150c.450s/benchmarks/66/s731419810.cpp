#include <bits/stdc++.h>
using namespace std;
int main(void){
int n,m;
string tmp;
bool opened=false;
vector<string>pass;
cin>>n;
for(int i=0;i<n;i++){
	cin>>tmp;
	pass.push_back(tmp);
}
cin>>m;
for(int i=0;i<m;i++){
	bool matched=false;
	cin>>tmp;
	for(int j=0;j<n;j++){
		if(pass[j]==tmp){
			if(opened)cout<<"Closed by "<<tmp<<endl;
			else cout<<"Opened by "<<tmp<<endl;
			opened=!opened;
			matched=true;
			break;
		}
	}
	if(!matched)cout<<"Unknown "<<tmp<<endl;
}
return 0;
}

