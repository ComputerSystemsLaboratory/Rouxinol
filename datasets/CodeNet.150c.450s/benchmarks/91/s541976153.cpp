/*
题意：给定整数 n， 请问 n 以内有多少个素数？
思路：如果对许多整数进行素性测试，则采用 埃氏筛法 （枚举 n 以内的素数，辗转相除）
		埃氏筛法：辗转相除：
			首先，将 2 到 n 范围内的所有整数写下来。其中最小的数字 2 是素数。将表中所有 2 的倍数都划去。
			表中剩余的最小数字是 3，它不能被更小的数整除，所以是素数。再将表中所有 3 的倍数都划去。
			以此类推，如果表中剩余的最小数字是 m 时，m就是素数。然后将表中所有 m 的倍数都划去。 
			像这样反复操作，就能依次枚举 n 以内的素数。 
*/

#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX_N  999999

int prime[MAX_N];		// 第 i 个素数 
bool is_prime[MAX_N];	// is_prime[i] 为 true 表示 i 为素数 

// 返回 n 以内素数的个数 
int sieve( int n )
{
	int p = 0;
	for( int i = 0; i <= n; i++ )
		is_prime[i] = true;
	
	is_prime[0] = is_prime[1] = false;
	
	for( int i = 2; i <= n; i++ )
	{
		if( is_prime[i] )
		{
			prime[p++] = i;
			for( int j = 2 * i; j <= n; j += i )
				is_prime[j] = false;				
		}	
	}
	return p;
} 

int main()
{	
	int s;
//	while (cin  >>  s)
	while (scanf("%d", &s) != EOF) 
	{
		cout << sieve(s) << endl;
	}	
	return 0;
}

