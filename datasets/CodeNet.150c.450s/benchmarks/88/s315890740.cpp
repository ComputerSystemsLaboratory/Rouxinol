#include <bits/stdc++.h>
using namespace std;

int main(void){
int h,w;
int i,j,k;
int ans[2];

while(true){
cin>>h>>w;
if(h==0)return 0;
ans[0]=-1;
for(i=1;i<150;i++){
	for(j=1;j<150;j++){
		if(j<=i)continue;
		if((h*h+w*w)==(i*i+j*j)&&h<i&&!(h==i||h==j)){ans[0]=i;ans[1]=j;break;}
	}
	if(ans[0]!=-1)break;
}
int mintaikaku[3]={45000,150,150};
if(ans[0]==-1){
	for(i=1;i<150;i++){
		for(j=1;j<150;j++){
			if(j<=i)continue;
			if((i*i+j*j)>(h*h+w*w)&&mintaikaku[0]>i*i+j*j&&!(h==i&&w==j)){mintaikaku[0]=(i*i+j*j);mintaikaku[1]=i;mintaikaku[2]=j;}
		}
		if(ans[0]!=-1)break;
	}
}
if(ans[0]==-1)cout<<mintaikaku[1]<<" "<<mintaikaku[2]<<endl;
else cout<<ans[0]<<" "<<ans[1]<<endl;
}
return 0;
}

