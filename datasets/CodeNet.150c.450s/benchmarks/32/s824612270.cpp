#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

int main(){
  //std::ifstream in("input.txt");
  //std::cin.rdbuf(in.rdbuf());
  int m,nmin,nmax;
  while(1){
    cin >> m>>nmin>>nmax;
    if(m==0 && nmin==0 && nmax==0){
      return 0;
    }
    int pi,pib,sa,ans;
    int samax=0;
    for(int i=0;i<m;i++){
      if(i>0)pib=pi;
      cin >> pi;
      if(i==0)pib=pi;
      if(nmin<=i && i <=nmax){
	sa=pib-pi;
	if(sa>=samax){
	  samax=sa;
	  ans=i;
	}
      }
      //   if(i>nmax)break;
    }
    cout << ans <<endl;
  }
}