#include <iostream>
#include <cmath>
using namespace std;

int prs[10000];
int pri=1;

int isPrime(int a){
  int flg;
  if (sqrt(a)>prs[pri]){
    for (int i=prs[pri]+2;i<=sqrt(a);i+=2){
      flg=1;
      for (int j=0;j<=pri;j++){
	if (sqrt(i)<prs[i])break;
	if (i%prs[j]==0){
	  flg=0;
	  break;
	}
      }
      if (flg)prs[++pri]=i;
    }
    //for (int i=0;i<=pri;i++)cout << prs[i] << " ";
  }
  for (int i=0;i<=pri;i++){
    if (sqrt(a)<prs[i])break;
    if (a%prs[i]==0)return 0;
  }
  return 1;
}

int main(){
  prs[0]=2;
  prs[1]=3;
  
  int n,a,cnt=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a;
    cnt += isPrime(a);
  }
  cout << cnt<<endl;
  return 0;
}