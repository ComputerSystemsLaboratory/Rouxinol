#include<iostream>
#include<string>
using namespace std;

int main(){
	string id[256];
	bool kagisys = true;	//true:lock false:open
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> id[i];
	}	//input

	int m;
	int unknown = 0;
	cin >> m;
	for(int i = 0; i < m; i++){
		string name;
		cin >> name;
		for(int j = 0; j < n; j++){
			if(id[j] == name){
				switch(kagisys){
				case true:
					cout << "Opened by " << name << endl;
					kagisys = false;
					unknown ++;
					break;
				case false:
					cout << "Closed by " << name << endl;
					kagisys = true;
					unknown ++;
					break;
				}
			}
		}
		if (unknown == 0){
			cout << "Unknown " << name << endl;
		}
		unknown = 0;
	}

	return 0;
}