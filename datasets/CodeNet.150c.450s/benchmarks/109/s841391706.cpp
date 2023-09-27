#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n,h1,h2,m1,m2,s1,s2;
	int time[60*60*24];
	int start, end, max=0;

	while(true){
		scanf("%d\n",&n);
		if(n==0){return 0;}
		max=0;
		for(int i=0; i<60*60*24; i++){ time[i]=0;}
		for(int i=0; i<n; i++){
			scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
			start=3600*h1+60*m1+s1; end=3600*h2+60*m2+s2;
			for(int j=start; j<end; j++){ time[j]++;}
		}
		for(int i=0; i<60*60*24; i++){
			if(max<time[i]){ max=time[i];}
		}
		cout << max << endl;
	}
}