#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m;
	vector<string> u;
	cin >> n;
	for(int i=0;i<n;i++){
		string U;
		cin >> U;
		u.push_back(U);
	}
	cin >> m;
	int ans=0;
	for(int i=0;i<m;i++){
		string T;
		cin >> T;
		int judge=0;
		for(int j=0;j<u.size();j++){
			if(T==u[j]){
				ans++;
				judge++;
			}
		}
		if(judge==0) cout << "Unknown " << T << endl;
		else if(ans%2==1) cout << "Opened by " << T << endl;
		else if(ans%2==0&&judge!=0) cout << "Closed by " << T << endl;
	}

}