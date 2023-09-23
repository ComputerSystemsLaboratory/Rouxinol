#include<cstdio>

int a[10];

bool dfs(int k, int B,int C)

{

if(k == 10)

return true;

if(a[k]>B)

{

if(dfs(k+1,a[k],C)) return true;

}

if(a[k]>C)

{

if(dfs(k+1,B,a[k]))return true;

}

return false;

}



void slove()

{

if(dfs(0,0,0))printf("YES\n");

else printf("NO\n");

}



int main()

{

int t;

scanf("%d",&t);

while(t--)

{

for(int i = 0 ; i  < 10; i++)

scanf("%d",&a[i]);

slove();

}

return 0;

}