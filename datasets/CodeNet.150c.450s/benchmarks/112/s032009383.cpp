#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	char a,b;
	map<char,char> list;
	map<char,char>::iterator it;
	while(1){
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>a>>b;
			list.insert(pair<char,char>(a,b));
		}
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			it=list.find(a);
			if(it==list.end()){
				cout<<a;
			}else{
				cout<<(*it).second;
			}
		}
		cout<<endl;
		list.clear();
	}
	return 0;
}