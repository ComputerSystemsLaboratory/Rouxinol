#include<stdio.h>

#define maxRow 10
#define maxCol 10000
int rows,cols;
int a[maxRow][maxCol];
int r[maxRow];
int max_num=0;

void dfs(int step){
	if(step == rows){
		int num,total=0;
		for(int j = 0; j < cols; j++)
		{
			num = 0;
			for(int i = 0; i < rows; i++){
				if(r[i] == -1 && a[i][j] == 0)num++;
				else if(r[i] == 1 && a[i][j] == 1)num++;
			}
			if(num > rows/2)total += num;
			else total += (rows - num);
		}
		if(total > max_num)max_num = total;

	}
	else{
		r[step] = -1;dfs(step+1);
		r[step] = 1;dfs(step+1);
	}
}

int main(){
	while(scanf("%d%d",&rows,&cols),rows||cols){
		max_num = 0;
		for(int i = 0; i < rows; i++)
			for(int j = 0; j < cols; j++)
				scanf("%d",&a[i][j]);
		dfs(0);
		printf("%d\n",max_num);
	}
	return 0;
}