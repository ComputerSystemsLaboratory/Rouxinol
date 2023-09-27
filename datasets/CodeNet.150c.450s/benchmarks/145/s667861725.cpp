#include<iostream>
#include<cstring>
using namespace std;
struct word{
	int len;
	int num;
	char w[32];
};
int main(){
	word vo[1000];
	char vol[32];
	int k = 0,max[2]={0,0};
	while(cin>>vol){
		int i;
		for(i=0; i<k; i++){
			if(strcmp(vo[i].w,vol) == 0){
				vo[i].num++;
				break;
			}
		}
		if(i == k){
			strcpy(vo[k].w,vol);
			vo[k].num = 1;
			vo[k].len = strlen(vo[k].w);
			k++;
		}
	}
	for(int i=1; i<k; i++){
		if(vo[max[0]].len<vo[i].len){max[0] = i;}
		if(vo[max[1]].num<vo[i].num){max[1] = i;}
	}
	cout <<vo[max[1]].w<<" "<<vo[max[0]].w<<endl;
	return 0;
}