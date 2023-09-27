#include<iostream>
#include<math.h>
#include <stdlib.h>

void listen_nums(int &a,int &b);

int calc_digit(const int num);

int main()
{
	int a,b;
	
	for(;1;)
	{
		listen_nums(a,b);
		int sum=a+b;
		std::cout<<calc_digit(sum)<<std::endl;
	}
	
	return 0;
}

void listen_nums(int &a,int &b)
{
	using namespace std;
	cin>>a>>b;
	
	if(cin.eof())
	{
		exit(0);
	}
}

int calc_digit(const int num)
{
	return (int)log10((double)num)+1;
}
	