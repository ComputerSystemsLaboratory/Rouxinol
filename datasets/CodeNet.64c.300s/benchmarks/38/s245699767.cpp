#include <stdio.h>
#include <algorithm>
using namespace std;

int pow(int a,int n){
	if(n <= 0){
		return 1;
	}
	return a * pow(a,n - 1);
}

int main(){
	int n;
	int a[10];
	int ans1 = 0;
	int ans2 = 0;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		ans1 = 0;
		ans2 = 0;
		for(int j = 0; j < 10; j++){
			scanf("%d",&a[j]);
		}
		for(int j = 0; j < 10; j++){
			if(ans1 >= ans2 && ans1 < a[j]){
				ans1 = a[j];
			}else if(ans2 > ans1 && ans2 < a[j]){
				ans2 = a[j];
			}else if(ans1 < a[j]){
				ans1 = a[j];
			}else if(ans2 < a[j]){
				ans2 = a[j];
			}else{
				printf("NO\n");
				break;
			}
			if(j == 9){
				printf("YES\n");
			}
		}
	}
	///////////////////////////////////
	//Sleep(200000);///////////////////// 提出するときは必ず外す！
	///////////////////////////////////
	return 0;

}