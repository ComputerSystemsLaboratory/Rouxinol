#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

#define doubled( x ) (x * x)

//?????????????¨????(2 * 2??£?????????)
int matrix_val(int a11, int a12, int a21, int a22);

//?????°?????°?????? (in:??´??° out:?????°)
int digit_count(int num);

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	
	cin >> a >> b >> c ;
	cin >> d >> e >> f;
	do
	{
		int A_matrix_val = matrix_val(a, b, d, e);
		int elem_x = matrix_val(c, b, f, e);
		int elem_y = matrix_val(a, c, d, f);
		double ans_x, ans_y;
		
		if( elem_x == 0 )ans_x = 0;
		else ans_x = (double)elem_x / A_matrix_val;
		
		if( elem_y == 0 )ans_y = 0;
		else ans_y = (double)elem_y / A_matrix_val;
		
		printf("%.3f %.3f\n", ans_x, ans_y);

	}while( (cin >> a >> b >> c >> d >> e >> f) );
	
	return 0;
}

int matrix_val(
int a11, int a12,
int a21, int a22
){
	return ((a11 * a22) - (a12 * a21));
}

int digit_count(int num)
{
	if( num < 0 )num *= (-1);
	
	int count = 0;
	
	for(int i = 10; num != 0; i *= 10)
	{
		int diff = num % i;
		num -= diff;
		count++;
	}
		
	return count;
}