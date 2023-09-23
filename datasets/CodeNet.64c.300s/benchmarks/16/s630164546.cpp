#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int dif = INT_MIN;
  int price_min = INT_MAX;
  int input;
  scanf("%d",&n);
  while(n--){
    scanf("%d",&input);
    if(dif < input - price_min)dif = input - price_min;
    if(price_min > input)price_min = input;
  }
  printf("%d\n",dif);
}
    
    
    