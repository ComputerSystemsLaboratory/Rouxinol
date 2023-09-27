#include <stdio.h>
#include <ctype.h>
int main(){
	
	char m[1201]={'0'},b[27]={ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                     'u', 'v', 'w', 'x', 'y', 'z' };
	int i,a[27]={0};
	
	i=0;
	while (scanf("%c", &m[i++]) != EOF){
	}
	
	/*for(i=0;m[i-1]!=EOF;i++){
		scanf("%c",&m[i]);
	}
	*/
	
	/*while(1){
		if(m[i]!=EOF){
			scanf("%c",&m[i++]);
		}
		else break;
	}*/
	for(int t=0;t<i;t++){
		if(isupper(m[t])){
			m[t]=tolower(m[t]);
		}
	}
	//printf("%s",m);
	for(int t=0;t<i;t++){
		if(m[t]>='a'&&m[t]<='z'){
			a[m[t]-'a']++;
		}
	}
	for(int t=0;t<26;t++){
		printf("%c : %d\n",b[t],a[t]);
	}
	return 0;
}