#include<cstdio>
#include<vector>
#include<list>
using namespace std;
//并?集3
struct uf_note3
{
	unsigned type;
	list<size_t>lst;
};
class union_find3
{
	unsigned l;
	uf_note3*ufn;
public:
	void init(unsigned length)
	{
		unsigned i, j, k, t;
		l = length;
		ufn = new uf_note3[l];
		for (i = 0; i < l; ++i)ufn[i].type = i;
	}
	void unite(unsigned x, unsigned y)
	{
		if (ufn[x].type != ufn[y].type) {
			unsigned t = ufn[y].type;
			list<size_t>::iterator it, end = ufn[t].lst.end();
			ufn[ufn[x].type].lst.push_back(t);
			ufn[t].type = ufn[x].type;
			for (it = ufn[t].lst.begin(); it != end; ++it) {
				ufn[*it].type = ufn[x].type;
				//ufn[ufn[x].type].lst.push_back(*it);
			}
			list<size_t>::iterator itt = ufn[ufn[x].type].lst.end();
			--itt;
			ufn[ufn[x].type].lst.splice(itt, ufn[t].lst);
			//ufn[t].lst.clear();
		}
	}
	bool same(unsigned x, unsigned y)
	{
		return ufn[x].type == ufn[y].type;
	}
	void del()
	{
		unsigned i;
		for (i = 0; i < l; ++i)ufn[i].lst.clear();
		delete[]ufn;
	}
};
class union_find2
{
	size_t l;
	size_t*type;
	bool inUse;
	size_t findType(size_t x)
	{
		return x == type[x] ? x : findType(type[x]);
	}
public:
	union_find2()
	{
		inUse = false;
	}
	void init(size_t length)
	{
		size_t i;
		l = length;
		type = new size_t[l];
		for (i = 0; i < l; ++i)type[i] = i;
		inUse = true;
	}
	void unite(size_t x, size_t y)
	{
		type[findType(y)] = findType(x);
	}
	bool same(size_t x, size_t y)
	{
		return findType(x) == findType(y);
	}
	void del()
	{
		delete[]type;
		inUse = false;
	}
	~union_find2()
	{
		if (inUse)del();
	}
};
int main()
{
	union_find3 uf;
	int n, q, com, x, y, i;
	scanf("%d%d", &n, &q);
	uf.init(n);
	for (i = 0; i < q; ++i) {
		scanf("%d%d%d", &com, &x, &y);
		if (com == 0) uf.unite(x, y);
		else printf("%d\n", (uf.same(x, y) ? 1 : 0));
	}
	uf.del();
	return 0;
}