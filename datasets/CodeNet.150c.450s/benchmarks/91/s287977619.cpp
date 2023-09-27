#include<stdio.h>

int	main(){
	int	i,	k,	x,	cnt[1000001],	data[1000000];
	cnt[0]	=	0;
	data[0]	=	0;
	data[1]	=	0;
	for(i	=	2;	i	<=	1000000;	i++){
		data[i]	=	1;
	}
	for(i	=	2;	i	*	i	<=	1000000;	i++){
		if(data[i]){
			for(k	=	2	*	i;	k	<=	1000000;	k	+=	i){
				data[k]	=	0;
			}
		}
	}
	for(i	=	0;	i	<=	1000000;	i++){
		cnt[i	+	1]	=	cnt[i]	+	data[i];
	}
	while(scanf("%d",	&x)	!=	EOF){
		printf("%d\n",	cnt[x	+	1]);
	}
	return	0;
}