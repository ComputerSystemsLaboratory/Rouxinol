//#include <stdio.h>
//  int main(){while(1){
//   int a[101]={};
//   int b,c,d;
//   scanf("%d%d",&b,&c);
//   if(b==0 && c==0) break;
//   int i,j;
//   for(i=0;i<b;i++){
//      for(j=1;j<=c;j++){
//         scanf("%d",&d);
//         a[j]+=d;
//      }
//   }
//   int num=0;
//for(i=b;i>=0;i--){
//	for(j=1;j<=c;j++){
//		if(i==a[j]){
//			if(num==0){
//			printf("%d",j);
//			num++;
//			}
//		else{
//			printf(" %d",j);
//			num++;
//		}
//		}
//	}
//}
//printf("\n");
//  }
//return 0;
//  }
#include <stdio.h>
int x(int num, int sum, int n){
	if (num == 0 && sum == 0){ 
		return 1; 
	}     
	if (n > 9){  
		return 0;   
	}     
	return (x(num - 1, sum - n, n + 1) + x(num, sum, n + 1));
} 
int main(void) { 
	int sum, num;    
	while (1){       
		scanf("%d%d", &num, &sum); 
		if (num == 0 && sum == 0) break;   
		printf("%d\n", x(num, sum, 0));  
	}     
	return 0;
}