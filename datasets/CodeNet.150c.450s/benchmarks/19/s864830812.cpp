#include <iostream>
#include <vector>
int main(){
	int v=0,w=0;
	std::vector<int> a(0),b(0);
	while(true){
		v++;
		a.resize(v);
		b.resize(v);
		std::cin>>a[v-1];
		std::cin>>b[v-1];
		if((a[v-1]==0)&&(b[v-1]==0)){
			break;
		}
	}
	for(int i=0;i<v-1;i++){
		if(a[i]>b[i]){
			w=a[i];
			a[i]=b[i];
			b[i]=w;
		}
	}
	for(int i=0;i<v-1;i++){
		std::cout<<a[i]<<" "<<b[i]<<std::endl;
	}
}