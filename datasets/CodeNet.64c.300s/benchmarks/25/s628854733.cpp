#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>

using namespace std;

const double eps=1e-10;

int main()
{
	int a[4],b[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){

		int hit=0,blow=0;

		int c[10]={0};
		for(int i=0;i<4;i++){
			if(a[i]==b[i]) hit++;
			else{
				c[a[i]]++;
				c[b[i]]++;
			}
		}
		for(int i=0;i<10;i++)
			if(c[i]==2) blow++;

		cout<<hit<<" "<<blow<<endl;

	}

	return 0;
}