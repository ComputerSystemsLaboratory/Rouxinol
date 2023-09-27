#include <iostream>
#include <sstream>
#include <vector>
using namespace std;


int N;
int Q;
int sz;

vector<int> node;


void update(int index,int val)
{
	index = index + sz - 1;
	node[index] += val;
	while(index > 0)
	{
		index = (index - 1) / 2;
		node[index] = node[index * 2 + 1] + node[index * 2 + 2];
	}
}

int get_sum(int a,int b,int k,int l,int r)
{
	if(r <= a || b <= l) return 0;

	if(a <= l && r <= b) return node[k];

	int vl = get_sum(a,b,2 * k + 1,l,(l + r) / 2);
	int vr = get_sum(a,b,2 * k + 2,(l + r) / 2,r);
	return vl + vr;
}
int main()
{
	cin >> N >> Q;
	stringstream result;

	sz = 1;
	while(sz < N) sz *= 2;
	node.resize(2 * sz - 1,0);

	int com,x,y;

	for(int i = 0;i < Q;i++)
	{
		cin >> com >> x >> y;

		if(com == 0)
		{
			update(x - 1,y);
		}
		else
		{
			 result << get_sum(x - 1,y - 1 + 1,0,0,sz) << endl;

		}
	}
	cout << result.str();
	return 0;
}

