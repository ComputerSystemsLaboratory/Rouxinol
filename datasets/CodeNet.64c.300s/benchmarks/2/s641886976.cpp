#include <iostream>
#include <cstdio>
int main(){
	int m,f,r,sum=0,i=0,count;
	char res[256];
	while(1){
		std::cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1)break;
		if(m==-1||f==-1)res[i]='F';
		else{
			sum=m+f;
			if(80<=sum)res[i]='A';
			if(65<=sum&&sum<80)res[i]='B';
			if(50<=sum&&sum<65)res[i]='C';
			if(30<=sum&&sum<50){
				if(r!=-1&&r>=50)res[i]='C';
				else res[i]='D';
			}
			if(sum<30)res[i]='F';
		}
		i++;
		count=i;
	}
	for(i=0;i<count;i++){
		std::cout<<res[i]<<std::endl;
	}
	return 0;
}