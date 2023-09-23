#include<iostream>
using namespace std;

int main()
{
	long long n, min=0, max=0, sum=0;

	cin >> n;

	for(int i=0;i<n;++i){
		int j;
		cin >> j;
		sum += j;

		if(i){
			if(j>max)	max = j;
			if(j<min)	min = j;
		}else{
			max = j;
			min = j;
		}
	}

	cout << min << " " << max << " " << sum << endl;

	return 0;
}