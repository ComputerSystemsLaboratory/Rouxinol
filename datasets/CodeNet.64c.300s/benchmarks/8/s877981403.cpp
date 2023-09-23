#include<iostream>
using namespace std;
int main(void){
      int n,x;
      cin>>n;
      for(int i=1;i<=n;i++){
            x=i;
            if(x%3==0){
                  cout <<" "<<i;
            }
            else
            while(x){
            if(x%10==3){
                  cout <<" "<<i;
                  break;
                  }
                  x/=10;
            }
      }
      cout << endl;
      return 0;
}
