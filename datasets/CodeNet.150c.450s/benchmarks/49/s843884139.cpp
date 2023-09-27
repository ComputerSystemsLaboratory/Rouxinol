#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm> //???????????¨

using namespace std;

int main(){
	//ifstream fin("in.txt");

	vector<int> v;

	int average = 0;

	int n = 0;
	while (true){

		cin >> n;
		if (n == 0)break;

		//?????????
		average = 0;
		if (!v.empty())v.clear();

		for (int i = 0; i < n; i++){
			int tmp = 0;
			cin >> tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		v.pop_back();
		v.erase(v.begin());

		for (int i = 0; i < v.size(); i++)
			average += v[i];

		average /= v.size();

		cout << average << endl;
	}

	return 0;
}