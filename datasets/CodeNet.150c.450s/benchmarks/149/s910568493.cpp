#include<iostream>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define MAX 10000

class Data
{
public:
	Data* parent = this;
	int height = 1;
	void Find(Data* other)
	{
		Data* temp = this;
		Data* temp_other = other;
		while (1)
		{
			if (temp == temp->parent)break;
			temp = temp->parent;
		}
		while (1)
		{
			if (temp_other == temp_other->parent) break;
			temp_other = temp_other->parent;
		}
		if (temp == temp_other)cout << 1 << endl;
		else cout << 0 << endl;
	}
	void Unite(Data* other)
	{
		Data* temp = this;
		Data* temp_other = other;
		while (1)
		{
			if (temp == temp->parent)break;
			temp = temp->parent;
		}
		while (1)
		{
			if (temp_other == temp_other->parent) break;
			temp_other = temp_other->parent;
		}
		if (temp_other->height > temp->height)
		{
			temp->parent = temp_other;
		}
		else if (temp_other->height == temp->height)
		{
			temp->parent = temp_other;
			temp_other->height++;
		}
		else
		{
			temp_other->parent = this;
		}
	}
};
int main()
{
	Data data[MAX];
	int n, q;
	cin >> n >> q;
	REP(i, q)
	{
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0)data[x].Unite(&data[y]);
		else
		{
			data[x].Find(&data[y]);
		}
	}
	return 0;
}