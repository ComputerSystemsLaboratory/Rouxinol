#include <iostream>

using namespace std;

int main(){
  while(1){
    int n ,p;
    cin >> n >> p ;
    if(n==0&&p==0)break;
    int N[50]={0};
    int T;
    T=p;
    int mayor=-1;
    while(1){
      for(int i=0;i<n;i++){
        if(T==0){
          T=N[i];
          N[i]=0;
        }else{
          N[i]++;
          T--;
          if(N[i]==p){
            mayor=i;
            break;
          }
        }
      }
      if(mayor!=-1)break;
    }
    cout << mayor << endl;
  }
}

