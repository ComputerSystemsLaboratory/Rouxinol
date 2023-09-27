#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	long long int num[1024],n,m;
	for(int i=0;i<1024;i++){
		num[i] = 0;
		cin>>s;
		if (s=="0"){ 
			m = i;
			break;
		}
		for (int j = 0;; j++){
			if (s[j] == '\0'){
				break;
			}
			num[i] += (s[j] - '0');

		}
	}
	for (int i=0; i < m; i++){
		printf("%d\n",num[i]);
	}
	return 0;
}