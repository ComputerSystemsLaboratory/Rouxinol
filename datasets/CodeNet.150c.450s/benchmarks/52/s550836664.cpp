#include <cstdio>
#include <stack>
using namespace std;
  int main(){
   int train[11],n;
   stack<int> s;
   while(scanf("%d",&n) != EOF){
      if(n != 0){
        s.push(n);
           }else{
             printf("%d\n",s.top());
			 s.pop();
         }
}
return 0;
}
      