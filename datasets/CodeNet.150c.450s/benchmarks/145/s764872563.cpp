#include<stdio.h>
#include <string.h>
int main(){
	int i,n=0,q=0,c[500],a=0,b=0;
	char s[1000],t[500][32],*p;
	fgets(s,1024,stdin);
	while(1){
		p=strchr(s+q,' ');
		if(!p)
			p=s+strlen(s)-1;
		strncpy(t[n],s+q,p-s-q);
		for(i=0;i<n;i++)
			if(strcmp(t[i],t[n])==0){
				c[i]++;
				break;
			}
			if(i==n){ 
				c[i]=1;
				n++; 
			}
			q=p-s+1;
			if(p==s+strlen(s)-1) 
				break;
	}  
	for(i=1;i<n;i++){
		if(c[i]>c[a])  
			a=i; 
		if(strlen(t[i])>strlen(t[b]))    
			b=i; 
	} 
	printf("%s %s\n",t[a],t[b]); 
	return 0;
}