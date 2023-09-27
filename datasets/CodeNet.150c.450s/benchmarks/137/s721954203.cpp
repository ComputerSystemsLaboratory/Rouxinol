#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n,i;
	cin >> n;
	
	string command, str;
	set<string> S;
	for (i=0;i<n;i++){
		cin >> command >> str;
		if (command=="insert"){
			S.insert(str);
		}else{
			if (S.find(str)==S.end()){
				cout << "no" <<endl;
			}else{
				cout <<"yes" << endl;
			}
		}
	}
	return 0;
}