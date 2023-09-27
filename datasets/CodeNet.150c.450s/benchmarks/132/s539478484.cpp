#include<iostream>
#include<vector>


using namespace std;

int main(){
  int n,p,pp,flag;
  while(1){
    cin >> n >> p;
    pp=p;
    flag=0;
    if (n==0) return 0;
    vector<int> hv(n,0);
    for(int turn=0;turn<1000000;turn++){
      if (flag==1) break;
      if (p>0){
        p--;
        hv[turn%n]++;
        if (p==0 && hv[turn%n]==pp){
          cout << turn % n << endl;
          flag=1;
        }
      } else {
        p = hv[turn%n];
        hv[turn%n]=0;
      }
    }
  }
}