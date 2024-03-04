#include <stdio.h>
int main(void){
	int h,m1,m2,m3,w;
	m1=0;
	m2=0;
	m3=0;
	for(int i=0;i<10;i++){
		scanf("%d",&h);
		if(m3<h){
			m3=h;
			if(m2<m3){
				w=m2;
				m2=m3;
				m3=w;
				if(m1<m2){
					w=m1;
					m1=m2;
					m2=w;
				}
			}
		}
	}
	printf("%d\n%d\n%d\n",m1,m2,m3);
	return 0;
}
