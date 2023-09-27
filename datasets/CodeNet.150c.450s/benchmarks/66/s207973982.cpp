#include<iostream>
#include<string>
using namespace std;

void doAction(int n, string id[], string str){
	static int status = 0,i;
	for(i=0;i<n;i++){
		if(!id[i].compare(str)){
			status = !status;
			if(status) cout<<"Opened by " << str << endl;
			else cout << "Closed by " << str << endl;
			break;
		}
	}
	if(i==n) cout<< "Unknown " << str <<endl;
}

int main(){
	int n,m;
	string id[256],str;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> id[i];
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> str;
		doAction(n,id,str);
	}
}