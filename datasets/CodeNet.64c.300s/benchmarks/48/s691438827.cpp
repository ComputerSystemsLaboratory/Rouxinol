#include<stdio.h>
#include<string.h>
#include<math.h>
#define range 1000000
int total_added = 4;
struct primes{
	 int  key;
	 int  counts;
};
primes p[range];
bool is_prime(int key)
{
	int i;
	for (i = 2; i <= sqrt(key); i++)
	{
		if (key%i == 0)return false;
	}
	return true;
}
void init()
{
	p[0].key = 2;
	p[0].counts = 1;
	p[1].key = 3;
	p[1].counts = 2;
	p[2].key = 5;
	p[2].counts = 3;
	p[3].key = 7;
	p[3].counts = 4;
	int i;
	for (i = 8; i <= range; i++)
	{
		if (i % 2 != 0&&i%3!=0&&i%5!=0)
		{
			if (is_prime(i))
			{
				p[total_added].key = i;
				p[total_added].counts = p[total_added - 1].counts + 1;
				total_added++;
			}
		}
	}
}
int counting_result(int key)
{
	for (int i =total_added-1; i>=0; i--)
	{
		if (key >= p[i].key)
			return p[i].counts;
	}
	return 0;
}

int main()
{
	init();
	int i=0, n;
	while (scanf("%d", &n)==1&&30)
	{
		
		printf("%d\n",counting_result(n));
		i++;
	}

}