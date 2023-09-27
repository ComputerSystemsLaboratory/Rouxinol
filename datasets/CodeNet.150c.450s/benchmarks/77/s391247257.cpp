#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  while((cin>>N)&&(N!=0)){
    int locx=10;
    int locy=10;
    vector<int> x;
    vector<int> y;
    //cout << N << endl;
    for(int i=0;i<N;i++){
      //      cout << "whei" << endl;
      int varx;
      int vary;
      cin >> varx >> vary;
      x.push_back(varx);
      y.push_back(vary);
      //     cout << "x = " << var << " ";
    }

    int M;
    cin >> M;
    int cnt=0;
    for(int i=0;i<M;i++){
      char direction;
      cin >> direction;
      if(direction == 'W'){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
          locx -= 1;
          for(int k=0;k<N;k++){
            if(locx==x[k]&&locy==y[k]){
              x[k]=-1;
              y[k]=-1;
              cnt++;
            }
          }
        }
      }else if(direction == 'E'){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
          locx += 1;
          for(int k=0;k<N;k++){
            if(locx==x[k]&&locy==y[k]){
              x[k]=-1;
              y[k]=-1;
              cnt++;
            }
          }
        }
      }else if(direction == 'N'){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
          locy += 1;
          for(int k=0;k<N;k++){
            if(locx==x[k]&&locy==y[k]){
              x[k]=-1;
              y[k]=-1;
              cnt++;
            }
          }
        }
      }else if(direction == 'S'){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
          locy -= 1;
          for(int k=0;k<N;k++){
            if(locx==x[k]&&locy==y[k]){
              x[k]=-1;
              y[k]=-1;
              cnt++;
            }
          }
        }
      }
    }
    if(cnt==N)cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}