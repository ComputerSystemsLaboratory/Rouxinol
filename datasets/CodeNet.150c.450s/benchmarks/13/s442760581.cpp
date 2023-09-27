#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b;
	string s,p;
	cin>>s>>p;
    s=s+s;
	a=s.size()*2-1;
	b=s.size();
	for(int i=0;i<b;i++){
		for(int n=1;n<a;n++){
	if( p==s.substr(i,n) ){
		cout<<"Yes"<<endl;
		return 0;
		}
}
}
cout<<"No"<<endl;

}

