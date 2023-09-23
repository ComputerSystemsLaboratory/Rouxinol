#include<iostream>
using namespace std;

int main(){

  int n,y,d,m;
  int sum;
  cin >> n;

  for(int j=0; j<n; j++){
    cin >> y >> m >> d;
    sum=0;

    if(m%2==0 && y%3!=0){
      sum += 19-d;
    }
    else{
      sum += 20-d;
    }

    //cout << y << m << d << endl;

    for(int i=m+1; i<=10; i++){
      if(i%2==0 && y%3!=0){
        sum += 19;
      }
      else{
        sum += 20;
      }
    }
  //  cout << "ok2" << endl;

    for(int i=y+1; i<1000; i++){
      sum += 20*10;
      if(i%3!=0){
        sum -= 5;
      }
    }

    cout << sum+1 << endl;

  }


  return 0;
}