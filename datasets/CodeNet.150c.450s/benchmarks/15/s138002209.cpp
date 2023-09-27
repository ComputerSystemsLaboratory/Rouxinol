#include<iostream>
#include<vector>
using namespace std;

bool LinearSearch(int t, vector<int> S)
{
	int n = S.size();
	for(int j = 0; j < n; j++){
		if(t == S[j]){
			return true;
		}	
	}
	return false;
}

int main()
{
	int Count = 0;
	int n;
	cin >> n;
	vector<int> S;
	for(int i = 0; i < n; i++){
		int s;
		cin >> s;
		S.push_back(s);
	}
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int t;
		cin >> t;
		if(LinearSearch(t, S)){
			Count ++;
		}
	}
	cout << Count << endl;
	return 0;
}