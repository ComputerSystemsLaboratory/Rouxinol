#include <cstdio>
#include <cstring>
char str[2][30];
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s %s",&str[0],&str[1]);
		int a,b;
		a=strlen(str[0]);
		b=strlen(str[1]);
		int aa=0,bb=0;
		for(int i=0;i<a;i++){
			if(str[0][i]-'0'>=0 && str[0][i]-'0'<=9){
				if(str[0][i+1]=='m'){
					aa+=1000*(str[0][i]-'0');
					i+=1;
				}else if(str[0][i+1]=='c'){
					aa+=100*(str[0][i]-'0');
					i+=1;
				}else if(str[0][i+1]=='x'){
					aa+=10*(str[0][i]-'0');
					i+=1;
				}else{
					aa+=(str[0][i]-'0');
					i+=1;
				}
			}else{
				if(str[0][i]=='m'){
					aa+=1000;
				}else if(str[0][i]=='c'){
					aa+=100;
				}else if(str[0][i]=='x'){
					aa+=10;
				}else{
					aa+=1;
				}
			}
		}
		for(int i=0;i<b;i++){
			if(str[1][i]-'0'>=0 && str[1][i]-'0'<=9){
				if(str[1][i+1]=='m'){
					bb+=1000*(str[1][i]-'0');
					i+=1;
				}else if(str[1][i+1]=='c'){
					bb+=100*(str[1][i]-'0');
					i+=1;
				}else if(str[1][i+1]=='x'){
					bb+=10*(str[1][i]-'0');
					i+=1;
				}else{
					bb+=(str[1][i]-'0');
					i+=1;
				}
			}else{
				if(str[1][i]=='m'){
					bb+=1000;
				}else if(str[1][i]=='c'){
					bb+=100;
				}else if(str[1][i]=='x'){
					bb+=10;
				}else{
					bb+=1;
				}
			}
		}
		int sum=aa+bb;
		int w,x,y,z;
		w=sum/1000;
		x=(sum%1000)/100;
		y=(sum%100)/10;
		z=sum%10;
		if(w>1){
			printf("%dm",w);
		}else if(w==1){
			printf("m");
		}
		if(x>1){
			printf("%dc",x);
		}else if(x==1){
			printf("c");
		}
		if(y>1){
			printf("%dx",y);
		}else if(y==1){
			printf("x");
		}
		if(z>1){
			printf("%di",z);
		}else if(z==1){
			printf("i");
		}
		puts("");
	}
}