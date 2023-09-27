#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	vector<string> v(256);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	cin >> m;
	bool open = false;
	for(int i=0;i<m;i++){
		string t;
		cin	>> t;
		if(find(v.begin(),v.end(),t) != v.end()){
			if(open){
				cout << "Closed by ";
			} else {
				cout << "Opened by ";
			}
			open=(open+1)%2;
			cout << t << endl;
		} else {
			cout << "Unknown " << t << endl;
		}
	}
	return 0;
}