#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int i =0;
int nums[10000]={};

int main(){
while(scanf("%d",nums+i)!=EOF) i++;
sort(nums,nums+i);
for(int j =i-1,c=0;c++<3;j--) printf("%d\n",nums[j]);
    return 0;
}