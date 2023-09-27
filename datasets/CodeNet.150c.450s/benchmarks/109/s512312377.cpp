#include <stdio.h>
#include <string.h>

int main(void){
	int n, i, j, flag[86400], time[3] = {3600,60,1}, sum1, sum2, max;
	char str[9], c;
	while(1){
		scanf("%d%*c",&n);
		if(!n)
			break;
		memset(flag,0,sizeof(flag));
		for(i = 0;i < n;i++){
			j = 0;
			while((c = getchar()) != ' ')
				str[j++] = c;
			str[j] = '\0';
			sum1 = 0;
			for(j = 0;j < strlen(str);j+=3)
				sum1 += time[j / 3] * ((str[j] - '0') * 10 + str[j + 1] - '0');
			j = 0;
			while((c = getchar()) != '\n')
				str[j++] = c;
			str[j] = '\0';
			sum2 = 0;
			for(j = 0;j < strlen(str);j+=3)
				sum2 += time[j / 3] * ((str[j] - '0') * 10 + str[j + 1] - '0');
			for(j = sum1;j < sum2;j++)
				flag[j]++;
		}
		max = -1;
		for(i = 0;i < 86400;i++){
			if(max < flag[i])
				max = flag[i];
		}
		printf("%d\n",max);
	}
	return 0;
}