#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> hoge;
  for(int i=0; i<5; i++){
    int n;
    scanf("%d",&n);
    hoge.push_back(n);
  }

  sort(hoge.begin(),hoge.end());

  for(int i=0; i<5; i++){
    printf("%d",hoge[4-i]);
    if(i!=4)
      putchar(' ');
  }
  putchar('\n');
}