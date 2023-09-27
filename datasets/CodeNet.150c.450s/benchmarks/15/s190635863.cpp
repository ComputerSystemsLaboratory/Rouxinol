#include<iostream>
#include<vector>
using namespace std;

void LinearSearch(int& Count, int t, vector<int> S)
{
	int n = S.size();
	for(int j = 0; j < n; j++){
		if(t == S[j]){
			Count ++;
			break;
		}	
	}
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
		LinearSearch(Count, t, S);
	}
	cout << Count << endl;
	return 0;
}