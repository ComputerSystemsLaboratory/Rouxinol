#include <stdio.h>

bool d[12];

int a[4];
int b[4];

int main()
{
while(1 == scanf("%d",a))
{
for(int i = 1; i < 4; i++)
{
scanf("%d",a + i);
}
for(int i = 0; i < 4; i++)
{
scanf("%d",b + i);
}
for(auto& i : d)
{
i = false;
}
for(auto i : a)
{
d[i] = true;
}
int hi = 0;
int bu = 0;
for(int i = 0; i < 4; i++)
{
if(a[i] == b[i])
{
hi++;
}
else if(d[b[i]])
{
bu++;
}
}
printf("%d %d\n",hi,bu);
}
}