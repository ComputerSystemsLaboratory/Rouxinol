#include <iostream>
#include <vector>

using namespace std;

bool LinearSerach(vector<int> &S,int &key)
{
	for(int i=0; i<S.size(); i++){
		if(S[i] == key)return true;
	}
	return false;
} 

int main()
{
	int n,q;
	vector<int> S;
	
	cin >> n;
	for(int i=0; i<n; i++){
		int j;
		cin >> j;
		S.push_back(j);
	}
	cin >> q;
	int count = 0;
	for(int i=0; i<q;i++){
		int key;
		cin >> key;
		if(LinearSerach(S,key))count++;
	}
	cout << count << endl;
}