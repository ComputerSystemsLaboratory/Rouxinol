#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n,max=0,map[101]={0};
	while (scanf("%d",&n) != EOF)
	{
		map[n]++;
		if (max < map[n])max=map[n];
	}
	for (int i=1; i<101; i++)
	{
		if (map[i]==max)cout << i << endl;
	}
	return 0;
}