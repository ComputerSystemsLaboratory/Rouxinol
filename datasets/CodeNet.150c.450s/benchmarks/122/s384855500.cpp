#include <bits/stdc++.h>
using namespace std;



int main(){

  priority_queue<int> maxq;

  while(1){
    char str[9];
    scanf("%s",str);

    if(str[0] == 'i'){
      int num;
      scanf("%d",&num);
      maxq.push(num);
    }else if(str[1] == 'x'){
      int ans = maxq.top();
      maxq.pop();
      printf("%d\n",ans);
    }else break;
  }


}