#include <cstdio>
#include <deque>
 
using namespace std;
 
int main(){
  deque<int> st;
  int n;
  while(~scanf("%d",&n)){
    if(n){
      st.push_back(n);
    }else{
      printf("%d\n",st.back());
      st.pop_back();
    }
  }
}