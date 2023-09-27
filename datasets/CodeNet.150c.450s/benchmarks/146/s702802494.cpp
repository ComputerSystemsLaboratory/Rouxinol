#include<iostream>
#include<cstdio>
#include<cmath>
#include <string> 
using namespace std;

int main(){
	float x1,x2,x3,x4,y1,y2,y3,y4;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
			scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if( ((y1-y2)==0&&(y3-y4)!=0&&(x1-x2)==0&&(x3-x4)!=0) || ((x1-x2)!=0&&(x3-x4)==0&&(y1-y2)==0&&(y3-y4)!=0)){
			
				printf("NO\n");
		}
			else if((y1-y2)*(x3-x4)==(x1-x2)*(y3-y4)){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	
	return 0;
}