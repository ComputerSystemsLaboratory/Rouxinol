#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
		vector<int> v;
		size_t sizeV;cin>>sizeV;
		for( int i=0, temp; i!=sizeV; i++ ){
				cin>>temp;
				v.push_back(temp);
		}

		sort(v.begin(), v.end());


		for( size_t i=0; i!=sizeV-1; i++ ){
				cout<<v[i]<<' ';
		}
		cout<<v[sizeV-1]<<endl;
}
				