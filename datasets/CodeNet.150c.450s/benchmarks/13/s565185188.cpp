#include<iostream>
#include<string>
using namespace std;
int main(){
	string s,p;
	cin>>s>>p;
	bool a=false;
	for(int i=0;i<s.size();i++){
		int count=0;
		for(int j=0;j<p.size();j++){
			if(s[(i+j)%s.size()]==p[j%p.size()])
				count++;
		}
		if(count==p.size())
			a=true;
	}
	if(a==true)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}