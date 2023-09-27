#include <iostream>
#include <vector>
using namespace std;

void func(int start,int num,int current);
int s,res;

int main(void){
  int n;
  cin >> n; cin >> s;
  while(n!=0 || s!=0){
    res = 0;
    func(0,n,0);
    cout << res << endl;
    cin >> n; cin >> s;
  }
  return 0;
}
  
void func(int start,int num,int current){
  int temp=0;
  for(int i=start; i<10; i++){
    if(current+i<=s) temp = current+i;
    else break;
    if(num!=1) func(i+1,num-1,temp);
    else if(temp==s) {
      res++;
    }
    temp=0;
  }
}