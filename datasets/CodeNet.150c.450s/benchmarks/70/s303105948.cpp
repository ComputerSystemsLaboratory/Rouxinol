#include<string>
#include<cstdio>
#include<iostream>

using namespace std;
 
int main(){
	int m[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	string d[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	int x,y;

	while(scanf("%d %d", &x, &y) != EOF){
		if(0==x) break;
		int c=2;
		while(--x) c+=m[x];

		c+=y;
		cout<< d[c%7]<<endl;
	}

    return 0;
}