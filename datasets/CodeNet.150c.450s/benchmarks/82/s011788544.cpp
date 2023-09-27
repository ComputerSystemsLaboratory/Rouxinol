#include<stdio.h>
#include<string.h>

typedef struct{
	int num[6];
}saikoro;

int num_1,num_2;
saikoro s_1;

void set_s_num(int *a){
	int i;
	for(i=0;i<6;i++){
		s_1.num[i]=a[i];
	}
}

void n(saikoro *a){
	int tmp;
	tmp=a->num[4];
	a->num[4]=a->num[0];
	a->num[0]=a->num[1];
	a->num[1]=a->num[5];
	a->num[5]=tmp;
}

void s(saikoro *a){
	int tmp;
	tmp=a->num[1];
	a->num[1]=a->num[0];
	a->num[0]=a->num[4];
	a->num[4]=a->num[5];
	a->num[5]=tmp;
}

void e(saikoro *a){
	int tmp;
	tmp=a->num[2];
	a->num[2]=a->num[0];
	a->num[0]=a->num[3];
	a->num[3]=a->num[5];
	a->num[5]=tmp;
}

void w(saikoro *a){
	int tmp;
	tmp=a->num[3];
	a->num[3]=a->num[0];
	a->num[0]=a->num[2];
	a->num[2]=a->num[5];
	a->num[5]=tmp;
}

int main(){
	int i,j,k,nt,slen,num[6],f_br;
	char input[128];
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%d %d %d %d %d %d",&num[0],&num[1]
		,&num[2],&num[3],&num[4],&num[5]);
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%d",&nt);
	
	for(i=0;i<nt;i++){
		f_br=0;
		set_s_num(num);
		fgets(input,sizeof input,stdin);
		sscanf(input,"%d %d",&num_1,&num_2);
		
		for(j=0;j<4;j++){
			for(k=0;k<4;k++){
				
				if(num_1==s_1.num[0]&&num_2==s_1.num[1]){
					printf("%d\n",s_1.num[2]);
					f_br=1;
				}else if(num_1==s_1.num[1]&&num_2==s_1.num[2]){
					printf("%d\n",s_1.num[0]);
					f_br=1;
				}
				
				if(f_br==1){
					break;
				}
				
				e(&s_1);
			}
			
			if(f_br==1){
					break;
				}
			n(&s_1);
		}
		  
	}
	
	return 0;
}