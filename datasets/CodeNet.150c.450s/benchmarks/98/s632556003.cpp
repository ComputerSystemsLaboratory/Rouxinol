#include "algorithm"
#include "iostream"
#include "cmath"
#include "string"
#include "map"
#include "set"
#include "iomanip"
using namespace std;

#define TEST 0
#if TEST
FILE *in = freopen("./Q/question.txt", "r", stdin);
FILE *out = freopen("./A/answer.txt", "w", stdout);
#endif


int main(){
  int n,m;
  while(true){
    int sa=0,ans=201,idxi=-1,idxj=-1;
    cin >> n >>m;
    set<int> tarous,hanakos;
    if(!n&&!m)break;
    for(int i=0;i<n+m;++i){
      int a;
      cin >> a;
      if(i<n){
        tarous.insert(a);
        sa+=a;
      }else{
        hanakos.insert(a);
        sa-=a;
      }
    }
    // cout <<sa<<endl;
    // cout <<tarousum <<" "<<hanakosum <<endl;
    if(!(sa&1)){
      bool FLAG=false;
      for(auto&& itr1=tarous.begin();itr1!=tarous.end();++itr1){
        for(auto&& itr2=hanakos.begin();itr2!=hanakos.end();++itr2){
          if(*itr1-*itr2==sa/2){
            if(ans>*itr1+*itr2){
              ans=*itr1+*itr2;
              idxi=*itr1;
              idxj=*itr2;
              FLAG=true;
              break;
            }
          }
        }
        if(FLAG)break;
      }
    }
    if(ans==201)cout <<-1<<endl;
    else cout <<idxi<<" "<<idxj<<endl;
    tarous.clear();
    hanakos.clear();
  }
  #if TEST
  fclose(in);
  fclose(out);
  #endif
  return 0;
}