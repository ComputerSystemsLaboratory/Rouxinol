#include <iostream>
#include <cstdio>
int main(){
	int i=0,j=0,k,num,num2;
    char s='a',p='a',str[101],str2[101],ans=0;
	while(s!='\n'){
        scanf("%c",&s);
        str[i]=s;
        i++;
    }
	num=i-1;
	while(p!='\n'){
        scanf("%c",&p);
        str2[j]=p;
        j++;
    }
	num2=j-1;
	for(i=0;i<num;i++){
		for(j=0,k=i;j<num2;j++,k++){
			if(str2[j]!=str[k])break;
			if(k==num-1)k=-1;
			if(j==num2-1){
				ans=1;
				std::cout<<"Yes"<<std::endl;
			}	
		}
		if(ans==1)break;
	}
	if(ans==0)std::cout<<"No"<<std::endl;
    return 0;
}