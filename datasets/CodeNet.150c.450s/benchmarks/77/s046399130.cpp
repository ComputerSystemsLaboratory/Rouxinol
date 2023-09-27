#include <stdio.h>
#include <string.h>

char a[22][22];

int main()
{
  int n,x,y,m,s;
  int i;
  char d[3];

  while(1){
    scanf("%d", &n);
    if(n==0)
      break;

    memset(a,0,sizeof(a));

    for(i=0;i<n;i++){
      scanf("%d%d", &x, &y);
      a[x][y]=1;
    }

    scanf("%d", &m);
    x=10,y=10;
    while(m-- > 0){
      scanf("%s%d", d, &s);
      while(s-- > 0){
	if(d[0] == 'E')x++;
	else if(d[0] == 'S')y--;
	else if(d[0] == 'W')x--;
	else if(d[0] == 'N')y++;
	
	if(a[x][y])n--,a[x][y]=0;
      }
    }

    if(n==0)
      printf("Yes\n");
    else printf("No\n");
  }
  return 0;
}

