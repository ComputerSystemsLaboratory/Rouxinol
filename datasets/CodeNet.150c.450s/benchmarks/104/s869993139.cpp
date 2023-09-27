#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int w,n;
	scanf("%d",&w);
	scanf("%d",&n);
	int *lot = new int[w+1];
	for(int i=0;i<=w;i++){
		lot[i] = i;
	}
	for(int i=0;i<n;i++){

		string str1,str2;
		int a,b;
		getline(cin,str1,',');
		getline(cin,str2);
		sscanf(str1.c_str(),"%d",&a);
		sscanf(str2.c_str(),"%d",&b);
		swap(lot[a],lot[b]);
	}

	for(int i=1;i<=w;i++){
		printf("%d\n",lot[i]);
	}
}