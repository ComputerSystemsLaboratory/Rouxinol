#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<string> ans;

int main(){
	int n;
	cin >> n;
	string mem[256];
	for(int i = 0;i < n;i++){
		cin >> mem[i];
	}
	int m;
	cin >> m;
	bool door = false;
	for(int i = 0;i < m;i++){
		string id;
		cin >> id;
		bool tid = false;
		string mes;
		for(int j = 0;j < n;j++){
			if(id == mem[j]){
				tid = true;
				if(door){
					mes = "Closed by ";
					mes += id;
					door = false;
				}else{
					mes = "Opened by ";
					mes += id;
					door = true;
				}
				break;
			}
		}
		if(!tid){
			mes = "Unknown ";
			mes += id;
		}
		ans.push_back(mes);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}