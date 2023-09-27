#include <cstdio>
#include <iostream>

int main(){
	int count=0;
	int a,b,c,i;
	std::scanf("%d %d %d",&a,&b,&c);
	for(i=a;i<=b;i++){
		if(c%i==0) count++;
	}
	std::cout << "" << count << std::endl;
	
	return 0;
}