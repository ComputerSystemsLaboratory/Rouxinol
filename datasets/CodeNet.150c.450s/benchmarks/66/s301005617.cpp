//O(mn)の全探索解法
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	string *registeredID = new string[n];//登録されているID
	for(int i=0;i<n;i++){
		cin >> registeredID[i];
	}
	int m;
	cin >> m;
	string *cardID = new string[m];//扉にかざすID
	for(int i=0;i<m;i++){
		cin >> cardID[i];
	}
	//入力終わり
	bool isOpen = false;
	for(int i=0;i<m;i++){
		bool contains = false;//登録されているかどうか
		for(int j=0;j<n;j++){
			if(cardID[i] == registeredID[j]){
				contains = true;
				break;
			}
		}
		if(contains==true){
			if(isOpen == true){
				cout << "Closed by " << cardID[i] << endl;
			}else{
				cout << "Opened by " << cardID[i] << endl;
			}
			isOpen = !isOpen;//trueとfalseを入れ替える
		}else{
			cout << "Unknown " << cardID[i] << endl;
		}
	}
	delete []cardID;
	delete []registeredID;
	return 0;
}