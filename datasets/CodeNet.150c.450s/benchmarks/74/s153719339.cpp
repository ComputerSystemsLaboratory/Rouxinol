#include<stdio.h>
#include<string.h>
#include<iostream>
#include <fstream>
using namespace std;

#define N	50001
#define M	20
#define	INIT	(N+1)
int	m = M;
int	 d[M];
int	counts[N];
void compute(int k);

inline int getC(int k)
{
	if (counts[k] == INIT)
		compute(k);
	return	counts[k];
}

void compute(int k)
{
	counts[k] = k;
	for (int i = 0; i < m; ++i)
	{
		if (k < d[i]){
			continue;
		}
		int count = 1 /*d[i]の分*/ + getC(k - d[i]);
		if (count < counts[k]){
			counts[k] = count;
		}
	}
}

int main(){
	std::istream & c_in = cin;
	memset(d, 0, sizeof(d));
	for (int i = 0; i < N; ++i)counts[i] = INIT;

	int n;
	c_in >> n >> m;
	for (int i = 0; i < m; i++){
		c_in >> d[i];
	}
	printf("%d\n",getC(n));
    return 0;
}