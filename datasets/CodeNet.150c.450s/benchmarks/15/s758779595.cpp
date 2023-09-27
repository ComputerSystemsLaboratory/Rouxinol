#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,q;
	int count =0;
	
	vector<int> S;
	vector<int> T;
	
	cin>>n;
	int tmp;
	for(int i=0;i<n;i++){
		cin>>tmp;
		S.push_back(tmp);
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>tmp;
		for(int j=0;j<n;j++){
			if(tmp==S[j]){
				count++;
				break;
			}
		}
	}
	
	cout<<count<<endl;
	return 0;
}