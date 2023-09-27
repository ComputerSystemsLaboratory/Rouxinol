#include<cstdio>
#include<map>
using namespace std;

int main(){
  int n,m;
  char a,b;

  while(scanf(" %d ",&n),n){
    map<char,char> t;
    for(int i=0;i<n;i++){
      scanf(" %c %c ",&a,&b);
      t[a] = b;
    }

    scanf(" %d ",&m);
    for(int i=0;i<m;i++){
      scanf(" %c ",&a);
      if(t.find(a)!=t.end())putchar(t[a]);
      else putchar(a);
    }
    putchar('\n');
  }
}
    