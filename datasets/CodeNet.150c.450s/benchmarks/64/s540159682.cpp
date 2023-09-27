#include<cstdio>
#include<vector>

using namespace std;

class ExhaustiveSearch
{
public:
	void solve(int n, int A[], int q, int M[])
	{
		for (int i = 0; i < q; i++)
		{
			if (search(n, A, 0, M[i]))
				printf("yes\n");
			else
				printf("no\n");
		}
	}

	bool search(int n, int A[], int i, int m)
	{
		if (m == 0)
			return true;
		else if (i >= n)
			return false;

		return (search(n, A, i + 1, m) || search(n, A, i + 1, m - A[i]));
	}
};

int main()
{
	int n, tmp;
	scanf("%d", &n);
	vector<int> A;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		A.push_back(tmp);
	}
	int q;
	scanf("%d", &q);
	vector<int> M;
	for (int i = 0; i < q; i++)
	{
		scanf("%d", &tmp);
		M.push_back(tmp);
	}

	auto es = ExhaustiveSearch();
	es.solve(n, A.data(), q, M.data());
}