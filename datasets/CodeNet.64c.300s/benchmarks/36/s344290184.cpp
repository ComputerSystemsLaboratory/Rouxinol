#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a<b&&b<c||a==b&&a<c||a<b&&b==c)
{
printf("%d %d %d\n",a,b,c);
}
else if(a<c&&c<b||a==c&&c<b||c==b&&a<c)
{
printf("%d %d %d\n",a,c,b);
}
else if(b<a&&a<c||b==a&&a<c||a==c&&b<a)
{
printf("%d %d %d\n",b,a,c);
}
else if(b<c&&c<a||b==c&&c<a||c==a&&b<c)
{
printf("%d %d %d\n",b,c,a);
}
else if(c<a&&a<b||c==a&&a<b||a==b&&c<a)
{
printf("%d %d %d\n",c,a,b);
}
else if(c<b&&b<a||c==b&&b<a||c<b&&b==a)
{
printf("%d %d %d\n",c,b,a);
}
return 0;
}