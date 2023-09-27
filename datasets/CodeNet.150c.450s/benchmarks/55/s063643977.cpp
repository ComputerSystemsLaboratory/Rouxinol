#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<stdio.h>
#include<cctype>
#include<algorithm>
#include<string.h>

#include<iomanip>
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148
using namespace std;
#define A 0.33333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333


int main()
{
	string str;
	int b[1000],sum=0;
	memset(b,0,1000*sizeof(int));
		
			while(getline(cin,str)){
				if(str=="0")
					break;
				sum++;//???1????§????????????±????§£
				for(unsigned int i=0;i<str.size();i++)
					b[sum]+=(str[i]-48);
			}
for(int i=1;i<=sum;i++)
	cout<<b[i]<<endl;


}
		
		