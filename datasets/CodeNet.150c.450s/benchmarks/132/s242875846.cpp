#include <stdio.h>
#include <cmath>
#include <vector>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

int main(void) {
	vector<int> r;
	while (true)
	{
		int n=0,p=0;
		scanf("%d %d",&n,&p);
		if (n==0 && p==0){
			break;
		}
		int wan=p,candidate[50]={0};
		int i=0;
		while (true)
		{
			if (wan > 0){
				wan--;candidate[i]++;
			} else {
				wan+=candidate[i];candidate[i]=0;
			}
			if (candidate[i]==p){break;}
			i++;
			i=i%n;
		}
		r.push_back(i);
	}
	for(int i=0; i<r.size(); i++)
	{
		cout << r[i] << endl;
	}
	return 0;
}