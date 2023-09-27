#include<stdio.h>

int main(){

  int t_score[100],h_score[100],t_sum=0,h_sum=0,i,j,k,n,m,temp,flag;
  int h_output, t_output;

  while(1){
    scanf("%d %d",&n,&m);
    t_output = 100;
    h_output = 100;
    flag = 0;
    if( n == 0 && m==0) break;

    for(i=0;i<n;i++){
      scanf("%d",&t_score[i]);
    }
    for(i=0;i<m;i++){
      scanf("%d",&h_score[i]);
    }

    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
	t_sum = 0;
	h_sum = 0;

	temp = t_score[i];
	t_score[i] = h_score[j];
	h_score[j] = temp;

	for(k=0;k<n;k++){
	  t_sum += t_score[k];
	}
	for(k=0;k<m;k++){
	  h_sum += h_score[k];
	}
	if( t_sum == h_sum ){
	  if( h_output + t_output > h_score[j] + t_score[i]){
	    t_output = h_score[j];
	    h_output = t_score[i];
	    flag = 1;
	  }
	}
	temp = h_score[j];
	h_score[j] = t_score[i];
	t_score[i] = temp;
      }
    }
    if( flag == 1){
      printf("%d %d\n",t_output,h_output);
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}