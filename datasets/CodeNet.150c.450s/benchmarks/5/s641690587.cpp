#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		int tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	for(int i=N-1;i>=0;i--){
		cout<<v[i];
		if(i==0)
			cout<<endl;
		else
			cout<<" ";
	}
	return 0;
}