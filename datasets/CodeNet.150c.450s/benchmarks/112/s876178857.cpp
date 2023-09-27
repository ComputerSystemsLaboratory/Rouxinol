#include<iostream>
#include<vector>
using namespace std;

int main(){
	char c, ch1, ch2;
	int i, j, n, m;
	string str;
	while(true){
		cin>>n;
		if(n==0) break;
		vector< pair<char, char> > change;
		for(i=0;i<n;i++){
			cin >> ch1 >> ch2;
			change.push_back(pair<char, char>(ch1, ch2));
		}
		cin>>m;
		for(i=0;i<m;i++){
			cin>> c;
			for(j=0;j<change.size();j++){
				if(change[j].first == c){
					c=change[j].second;
					break;
				}
			}
			cout << c;
		}
		cout<< endl;
	}
	return 0;
}