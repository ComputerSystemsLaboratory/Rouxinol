#include <stdio.h>
#include <vector>
#include <algorithm>

int main(){
	//printf("Hello World!\n");
	std::vector<int> v;
	int x = -1;
	for(int i=0; i<10; i++){
		scanf("%d",&x);
		v.push_back(x);
	}
	std::sort(v.begin(),v.end());
	std::reverse(v.begin(),v.end());
	std::vector<int>::iterator begin = v.begin(); 
	for(int i =0; i<3; i++){
		int h = *begin;
		begin++;
		printf("%d\n",h);
	}

	
	return 0;
}