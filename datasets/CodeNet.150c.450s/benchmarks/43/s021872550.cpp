#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	vector< vector<int> > a, b;

	int k = 1;
	do{

		cin >> n;
		a.resize(k);
		b.resize(k);

		//cout << a.size() << endl;

		if(n != 0)
		{
			for(int i = 0; i < n; ++i)
			{
				int workA, workB;
				cin >> workA >> workB;
				a[k - 1].push_back(workA);
				//cout << a[k - 1][i] << endl;
				b[k - 1].push_back(workB);
				//cout << a[k - 1][i] << endl;
			}
		}

		k++;
		//cout << "k = " << k << endl;
	}while(n != 0);

	for (int i = 0; i < a.size() - 1; ++i)
	{
		int aRes = 0, bRes = 0;
		for (int j = 0; j < a[i].size(); ++j)
		{
			if(a[i][j] > b[i][j])
			{
				aRes += (a[i][j] + b[i][j]);
			}
			else if(a[i][j] < b[i][j])
			{
				bRes += (a[i][j] + b[i][j]);
			}
			else
			{
				aRes += a[i][j];
				bRes += b[i][j];
			}
		}
		cout << aRes << " " << bRes << endl;
	}

}