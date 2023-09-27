#include <stdio.h>

int main(void)
{
  int n,i,j,ch;
  int card[4][13];
  char zu;
  int	nu;
  
  for(i=0; i<4; i++){
    for(j=0; j<13; j++)
      card[i][j]=0;
  }

  scanf("%d",&n);

  for(i=0;	i<n;	i++){
    scanf("%s%d",&zu,&nu);
    if(zu == 'S')
      ch = 0;
    else	if(zu == 'H')
      ch = 1;
    else	if(zu == 'C')
      ch = 2;
    else
      ch = 3;
    card[ch][nu-1] = 1;
  }

  for(i=0;	i<4;	i++){
    for(j=0;	j<13;	j++){
      if(card[i][j] == 0){
	if(i == 0)
	  printf("S %d\n",j+1);
	else	if(i == 1)
	  printf("H %d\n",j+1);
	else	if(i == 2)
	  printf("C %d\n",j+1);
	else
	  printf("D %d\n",j+1);
      }
    }
  }	
	return(0);
}