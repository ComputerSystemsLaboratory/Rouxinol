#include <iostream>
#include <vector>
using namespace std;

int main() {
	int s,t,count=0;
	
	cin>>s;
	vector <int> sset(s);
	for(int i=0;i<s;i++){
		cin >> sset[i];
	}
	cin>>t;
	vector <int> tset(t);
	for(int i=0;i<t;i++){
		cin >> tset[i];
	}
	
	for(int i=0;i<t;i++){
		for(int j=0;j<s;j++){
			if(sset[j]==tset[i]){
				count++;
				break;
			}	
		}
	}
	cout<<count<<endl;
	return 0;
}