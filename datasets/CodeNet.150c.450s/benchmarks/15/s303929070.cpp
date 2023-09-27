#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
 int n,count = 0;;
 int a[10002];
 int q,b;
 cin >> n;
 for(int i = 0;i < n;i++){
 scanf("%d",&a[i]);
 }
 cin >> q;
 for(int i = 0;i < q;i++){
 	scanf("%d",&b);
 	for(int i = 0;i < n;i++){
 		if(a[i] == b){
 		count++;
 		break;
 		}
 	}
 }
 cout << count <<endl;
	return 0;
}