
#include <stdio.h>
int main(){
	while(1){
int a,b,sum=0;
int x[11][10001],z[11][10001],y[10],max=0;
scanf("%d %d",&a,&b);
if(a==0) break;
for(int i=1;i<=a;i++){
for(int j=1;j<=b;j++){
scanf("%d",&x[i][j]);
z[i][j]=x[i][j];
}}
for(y[0]=0;y[0]<=1;y[0]++){
for(y[1]=0;y[1]<=1;y[1]++){
for(y[2]=0;y[2]<=1;y[2]++){
for(y[3]=0;y[3]<=1;y[3]++){
for(y[4]=0;y[4]<=1;y[4]++){
for(y[5]=0;y[5]<=1;y[5]++){
for(y[6]=0;y[6]<=1;y[6]++){
for(y[7]=0;y[7]<=1;y[7]++){
for(y[8]=0;y[8]<=1;y[8]++){
for(y[9]=0;y[9]<=1;y[9]++){
for(int i=1;i<=a;i++){
for(int j=1;j<=b;j++){
x[i][j]=z[i][j];
}}
if(y[0]==1){
	for(int i=1;i<=b;i++){
		if(x[1][i]==1){
			x[1][i]=0;
		}else{
			x[1][i]=1;
		}}
}
if(y[1]==1){
	for(int i=1;i<=b;i++){
		if(x[2][i]==1){
			x[2][i]=0;
		}else{
			x[2][i]=1;
		}}
}
if(y[2]==1){
	for(int i=1;i<=b;i++){
		if(x[3][i]==1){
			x[3][i]=0;
		}else{
			x[3][i]=1;
		}}
}
if(y[3]==1){
	for(int i=1;i<=b;i++){
		if(x[4][i]==1){
			x[4][i]=0;
		}else{
			x[4][i]=1;
		}}
}
if(y[4]==1){
	for(int i=1;i<=b;i++){
		if(x[5][i]==1){
			x[5][i]=0;
		}else{
			x[5][i]=1;
		}}
}
if(y[5]==1){
	for(int i=1;i<=b;i++){
		if(x[6][i]==1){
			x[6][i]=0;
		}else{
			x[6][i]=1;
		}}
}
if(y[6]==1){
	for(int i=1;i<=b;i++){
		if(x[7][i]==1){
			x[7][i]=0;
		}else{
			x[7][i]=1;
		}}
}
if(y[7]==1){
	for(int i=1;i<=b;i++){
		if(x[8][i]==1){
			x[8][i]=0;
		}else{
			x[8][i]=1;
		}}
}
if(y[8]==1){
	for(int i=1;i<=b;i++){
		if(x[9][i]==1){
			x[9][i]=0;
		}else{
			x[9][i]=1;
		}}
}
if(y[9]==1){
	for(int i=1;i<=b;i++){
		if(x[10][i]==1){
			x[10][i]=0;
		}else{
			x[10][i]=1;
		}}
}
	for(int k=1;k<=b;k++){
		for(int j=1;j<=a;j++){
		if(x[j][k]==1){
			sum++;
		}
	}
	if(sum>a/2){
		for(int j=1;j<=a;j++){
		if(x[j][k]==1){
			x[j][k]=0;
		}else{
			x[j][k]=1;
		}
	}
	}sum=0;}
for(int i=1;i<=b;i++){
for(int j=1;j<=a;j++){
if(x[j][i]==0){
	sum++;
}}}
if(max<sum){max=sum;}
sum=0;
}}}}}}}}}}
printf("%d\n",max);
max=0;
}
return 0;
}