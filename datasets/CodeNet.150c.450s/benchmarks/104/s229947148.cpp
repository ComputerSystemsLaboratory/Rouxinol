#include <iostream>

int main(){
	int a,b,c,g,h;
	char j;
	std::cin>>a>>b;
    int d[a];
    for(int e=1;e<=a;e++){
    	d[e]=e;
    	
	}
	for(int f=0;f<b;f++){
		std::cin>>g>>j>>h;
		c=d[g];
		d[g]=d[h];
		d[h]=c;
	}
	for(int i=1;i<=a;i++){
		std::cout<<d[i]<<std::endl;
	}
	return 0;
}