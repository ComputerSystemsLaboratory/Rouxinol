#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int stack[10];
    int index=0;
    vector<int> r;
    while (scanf("%d",&n) != EOF)
    {
	if (n!=0)
	{
	    stack[index] = n;
	    index++;
	} else {
	    r.push_back(stack[index-1]);
	    index--;
	}
    }
    for (int i=0; i<r.size(); i++)
    {
	cout << r[i] << endl;
    }
    return 0;
}