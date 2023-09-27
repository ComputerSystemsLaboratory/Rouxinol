#include "algorithm"
#include "iostream"
#include "cmath"
#include "string"
#include "map"
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
    int tarousum=0,hanakosum=0,ans=1000,idxi=-1,idxj=-1;
    cin >> n >>m;
    int tarous[n],hanakos[m];
    if(!n&&!m)break;
    for(int i=0;i<n+m;++i){
      int a;
      cin >> a;
      if(i<n){
        tarous[i]=a;
        tarousum+=a;
      }else{
        hanakos[i-n]=a;
        hanakosum+=a;
      }
    }

    // cout <<tarousum <<" "<<hanakosum <<endl;
    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
        if(tarousum<=hanakosum){
          if(hanakos[j]>=tarous[i]){
          if((tarousum+hanakos[j]-tarous[i])==(hanakosum+tarous[i]-hanakos[j])){
            if(ans>hanakos[j]+tarous[i]){
              ans=hanakos[j]+tarous[i];
              idxi=i;
              idxj=j;
            }
          }
        }
      }else{
        if(hanakos[j]<tarous[i]){
        if((tarousum+hanakos[j]-tarous[i])==(hanakosum+tarous[i]-hanakos[j])){
          if(ans>hanakos[j]+tarous[i]){
            ans=hanakos[j]+tarous[i];
            idxi=i;
            idxj=j;
          }
        }
      }
      }
      }
    }
    if(ans==1000)cout <<-1<<endl;
    else cout <<tarous[idxi]<<" "<<hanakos[idxj]<<endl;
  }
  #if TEST
  fclose(in);
  fclose(out);
  #endif
  return 0;
}