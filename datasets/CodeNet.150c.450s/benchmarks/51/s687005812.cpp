#include <cstdio>
using namespace std;

int main(){
	bool stu[31];
	int n;
	
	for(int i = 0; i <= 30; i++) stu[i] = false;
	
	for(int i = 0; i < 28; i++){
		scanf("%d", &n);
		
		stu[n] = true;
	}
	
	for(int i = 1; i <= 30; i++){
		if(!stu[i]) printf("%d\n", i);
	}
	
	return 0;
}