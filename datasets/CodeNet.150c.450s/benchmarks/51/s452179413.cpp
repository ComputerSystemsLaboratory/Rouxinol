#include <cstdio>
#include <set>
using namespace std;
int main()
{
	set<int> se;
	for(int i = 1; i <= 30; i++) se.insert(i);
	for(int i = 0, t; i < 28; i++)
		scanf("%d\n", &t), se.erase(t);
	for(set<int>::iterator it = se.begin(); it != se.end(); it++)
		printf("%d\n", *it);
	return 0;
}