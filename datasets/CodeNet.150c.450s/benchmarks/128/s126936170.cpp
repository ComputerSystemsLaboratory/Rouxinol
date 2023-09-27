#include <bits/stdc++.h>
using namespace std;

string S;
int A[10000];
int main(){
	cin>>S;
	int a=S.size();
	for(int i=a-1;i>=0;i--){
		cout<<S[i];
	}
	cout<<endl;
	return 0;
}

