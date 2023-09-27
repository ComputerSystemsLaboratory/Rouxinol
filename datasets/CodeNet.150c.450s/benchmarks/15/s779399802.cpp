#include<iostream>
#include<vector>

using namespace std;

bool LinearSearch(vector<int> S,int key)
{
	int i = 0;
	while(i != S.size()){
		if(S[i] == key){
			return true;
		}
		i++;
	}
	return false;
}

int main()
{
	int n;
	int q;
	int count = 0;
	int i = 0;
	vector<int> S;
	
	cin >> n;
	while(S.size() != n){
		int i;
		cin >> i;
		S.push_back(i);
	}
	
	cin >> q;
	while(i != q){
		i++;
		int key;
		cin >> key;
		if(LinearSearch(S,key) == true)count++;
	}
	cout << count << endl;
}