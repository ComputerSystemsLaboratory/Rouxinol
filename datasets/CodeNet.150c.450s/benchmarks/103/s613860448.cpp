#include<stdio.h>

int main()
{

int n,y,c,sum;
int f1[10],f2[10],f3[10],f4[10],f5[10],f6[10],f7[10],f8[10],f9[10];
for(int i=0;i<=9;i++)
{f1[i]=i;f2[i]=i;f3[i]=i;f4[i]=i;f5[i]=i;f6[i]=i;f7[i]=i;f8[i]=i;f9[i]=i;}

while(1)
{
c=0;sum=0;
scanf("%d %d",&n,&y);
if(n==0&&y==0)break;
for(int i1=0;i1<10;i1++)
{
	 if(n==1){if(f1[i1]==y)c++;}
	else if(n!=1){
				for(int i2=i1+1;i2<10;i2++)
					{
						if(n==2){if(f1[i1]+f2[i2]==y)c++;}
							else if(n>2){
							for(int i3=i2+1;i3<10;i3++)
										{						
										if(n==3){if(f1[i1]+f2[i2]+f3[i3]==y)c++;}
										else if(n>3){
														for(int i4=i3+1;i4<10;i4++)
																	{
if(n==4){if(f1[i1]+f2[i2]+f3[i3]+f4[i4]==y)c++;}
else if(n>4){
for(int i5=i4+1;i5<10;i5++)
{
if(n==5){if(f1[i1]+f2[i2]+f3[i3]+f4[i4]+f5[i5]==y)c++;}
else if(n>5){
for(int i6=i5+1;i6<10;i6++)
{
if(n==6){if(f1[i1]+f2[i2]+f3[i3]+f4[i4]+f5[i5]+f6[i6]==y)c++;}
else if(n>6){
for(int i7=i6+1;i7<10;i7++)
{
if(n==7){if(f1[i1]+f2[i2]+f3[i3]+f4[i4]+f5[i5]+f6[i6]+f7[i7]==y)c++;}
else if(n>7){
for(int i8=i7+1;i8<10;i8++)
{
if(n==8){if(f1[i1]+f2[i2]+f3[i3]+f4[i4]+f5[i5]+f6[i6]+f7[i7]+f8[i8]==y)c++;}
else if(n>8){
for(int i9=i8+1;i9<10;i9++)
{
{if(f1[i1]+f2[i2]+f3[i3]+f4[i4]+f5[i5]+f6[i6]+f7[i7]+f8[i8]+f9[i9]==y)c++;}

}}}}}}}}}}}}}}}}}
printf("%d\n",c);
c=0;
}
return 0;
}