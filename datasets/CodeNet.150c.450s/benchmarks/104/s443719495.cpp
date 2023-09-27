#include <iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define ARRAY_MAX 50

int main(){
	// your code goes here
  int vertical,horizontal;
  int tmp;
  int array[ARRAY_MAX][ARRAY_MAX];
  int num[ARRAY_MAX];
  char c;

  cin >> vertical >> horizontal;

  for(int i = 0;i < vertical;i++){
    num[i] = i+1;
  }

  for(int i = 0;i < horizontal;i++){
    cin >> array[i][0] >> c >> array[i][1];
  }
  
 
  for(int i = 0;i < vertical;i++){
    tmp = num[array[i][0]-1];
    num[array[i][0]-1] = num[array[i][1]-1];
    num[array[i][1]-1] = tmp;
  }

  for(int i = 0;i < vertical;i++){
    printf("%d\n",num[i]);
  }
  return 0;
}