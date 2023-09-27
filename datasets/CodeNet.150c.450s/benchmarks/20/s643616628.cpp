#include <cstdio>

using namespace std;

int main()
{
	int time;
	
	scanf("%d", &time);
	
	printf("%d:", time / 3600);
	time %= 3600;
	printf("%d:", time / 60);
	time %= 60;
	printf("%d\n", time);
	
	return (0);
}