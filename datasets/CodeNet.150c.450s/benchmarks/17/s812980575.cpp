#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
  int num[5];
  scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
  sort(num,num+5,greater<int>());
  printf("%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[4]);
}
  