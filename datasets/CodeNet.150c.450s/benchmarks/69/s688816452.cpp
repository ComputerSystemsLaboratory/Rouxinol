#include <iostream>
#include <vector>
using namespace std;
bool separate(int* A, int i, vector<int>& vB, vector<int>& vC)
{
	if (i == 10)
		return true;
	
	{
		vector<int> vTmpB(vB);
		if (vTmpB.empty() || (!vTmpB.empty() && (vTmpB.back() < A[i]))){
			vTmpB.push_back(A[i]);
			if (separate(A, i + 1, vTmpB, vC))
				return true;
		}
	}

	{
		vector<int> vTmpC(vC);
		if (vTmpC.empty() || (!vTmpC.empty() && (vTmpC.back() < A[i]))){
			vTmpC.push_back(A[i]);
			if (separate(A, i + 1, vB, vTmpC))
				return true;
		}
	}

	return false;
}
int main()
{
	int n;
	cin >> n;
	int A[10] = {};
	while(n--){
		for (int j = 0; j < 10; ++j)
			cin >> A[j];
		vector<int> vB, vC;
		if (separate(A, 0, vB, vC)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}