#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,one;
	int sum = 0;

	while(cin >> n , n!=0){
		vector<int> v;
		sum = 0;
		
		for (int i = 0; i < n; i++)
		{
			cin >> one;
			v.push_back(one);
		}
		sort(v.begin(),v.end());
		for (int i = 1; i < v.size() -1 ; i++)
		{
			sum += v[i];
		}
		cout << sum/(v.size() - 2) << endl;
	}
}