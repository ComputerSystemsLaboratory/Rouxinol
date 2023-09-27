#include<iostream>

using namespace std;

int main(){
  
  int n;
  while(cin >> n && n>0){
  int a,b;
  int res_a=0,res_b=0;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    if(a>b) res_a+=(a+b);
    else if(a<b) res_b+=(a+b);
    else{res_a+=a;res_b+=b;}
  }
  cout << res_a << " " << res_b << endl;
}
}

  