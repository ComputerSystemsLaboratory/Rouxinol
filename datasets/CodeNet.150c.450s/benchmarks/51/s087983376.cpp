#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> se;
	for(int i=1;i<=30;i++){
		se.insert(i);
	}
	int a;
	for(int i=1;i<=28;i++){
		cin>>a;
		se.erase(a);
	}
	for(set<int>::iterator it=se.begin();it!=se.end();it++){
		cout<<(*it)<<endl;
	}
	return 0;
}