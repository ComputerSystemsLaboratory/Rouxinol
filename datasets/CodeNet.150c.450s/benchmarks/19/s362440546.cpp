 #include <iostream>
 #include <cstdio>
 using namespace std;
 
 int main(){
 	int a, b, x;
 	int ans[10000];
 	
 	for(int i = 0; i <= 10000; i += 2){
 		cin >> a >> b;
 		if(a > b){
 			x = a;
 			a = b;
 			b = x;
 		}
 		ans[i] = a;
 		ans[i+1] = b;
 		if((a == 0) && (b == 0)){
 			break;
 		}
 	}
 	
 	for(int j = 0; j <= 10000; j += 2){
 		if((ans[j] == 0) && (ans[j+1] == 0)){
 			break;
 		}
 		printf("%d %d\n", ans[j], ans[j+1]);
 	}
 	
 	return 0;
 }