#include <iostream>
#include <cctype>
#include <cstdio>
#include <cstdlib>
using namespace std;
 
int main() {
	
	while(true){
		string num;
		cin>>num;
		if (num=="0") break;
		int size = num.size();

		int a[1000];
		for (int i = 0; i < size; ++i)
		{
			a[i]=num[i]-'0';
		}
		int sum=0;
		for (int j = 0; j < size; ++j)
		{
			sum+=a[j];
		}
		cout<<sum<<endl;
	}
    return 0;
}