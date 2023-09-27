#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> r;
    while (scanf("%d",&n) != EOF)
    {
	int sum=0;
	for (int i=n; i<600; i+=n)
	{
	    sum+=i*i*n;
	}
	r.push_back(sum);
    }
    for (int i=0; i<r.size(); i++)
    {
	cout << r[i] << endl;
    }
    return 0;
}