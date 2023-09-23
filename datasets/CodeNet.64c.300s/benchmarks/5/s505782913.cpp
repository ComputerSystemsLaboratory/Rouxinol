#include<stdio.h>
#include<algorithm>
#include<functional> 
 
using namespace std;
   
int main(){
   
 int i, height[10];
 for(i=0;i<10;i++){
  scanf("%d", &height[i]);
 }
 sort(height, height+10, greater<int>());
   
 for(i=0;i<3;i++){
  printf("%d\n", height[i]);
 }

 return 0;
}