#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	float x1,x2,x3,x4;
	float y1,y2,y3,y4;
	float a1,a2;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		a1 = (y2-y1)/(x2-x1);
		a2 = (y4-y3)/(x4-x3);
		if(a1==a2)
		printf("YES\n");
		else
		printf("NO\n");
	}
}