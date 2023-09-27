#include <stdio.h>
//sekolah budi dimana tahun dibagi menjadi N semester
//n semester,k yang ingin dibanding dari smester k sampai n
// 
int main(){
int n,k;
scanf("%d %d",&n,&k);
int nilai[n];//input skor uas sesuai semester yg diminta
for(int i = 0;i<n;i++){
	scanf("%d",&nilai[i]);
}
	for(int j=0;j<n-k;j++){
		if(nilai[j]<nilai[j+k]){
			puts("Yes");
		}
		else{
			puts("No");
		}
	}
	return 0;
}