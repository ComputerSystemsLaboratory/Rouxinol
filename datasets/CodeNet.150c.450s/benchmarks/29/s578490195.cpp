#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	string s;
	cin >>n;
	list<int> lst;
	for(int i=0;i<n;i++){
		auto it=lst.begin();
		cin>>s;
		if(s=="insert"){ 
			cin>>k;
			lst.push_front(k);
		}
		
		else if(s=="delete"){
			cin>>k;
		 	for(auto it=lst.begin();it!=lst.end();it++){
			 	if(*it==k){
			 		it=lst.erase(it);
			 		break;
		 		}
		 	}
		}else if(s=="deleteFirst"){
			lst.pop_front();
		}else if(s=="deleteLast"){
			lst.pop_back();
		}
	}
	for(auto it=lst.begin();it!=lst.end();it++){
		 if(it!=lst.begin()) cout<< " ";
		 cout <<*it;
 	}cout<<endl;
	return 0;
}