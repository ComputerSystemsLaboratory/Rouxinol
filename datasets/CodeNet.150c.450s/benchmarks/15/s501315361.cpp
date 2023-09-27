#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> A, int key){
	int i = 0;
	A.push_back(key);
	
	while(A[i] != key)
		i++;
	
	if(i == A.size()-1)
		return false;
	else
		return true;
}

int main(){
	int n, q, num, T, count = 0;
	vector<int> S;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		S.push_back(num);
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>T;
		count += linearSearch(S, T);
	}

	cout<<count<<endl;

	return 0;
}