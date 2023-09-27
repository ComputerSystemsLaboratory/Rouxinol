#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int mile=0;

  for(int i=0;i<999;i++){
    for(int k=0;k<10;k++){
      if(k%2==0||i%3==2) mile += 20;
      else mile += 19;
    } 
  }
  mile += 1;
  //cout << "mile " << mile << endl;
  for(int i=0;i<n;i++){
    int y,m,d;
    cin >> y >> m >> d;
    int count=0;
    // year
    for(int j=0;j<y;j++){
      if(j+1!=y){
        for(int k=0;k<10;k++){
          if(j%3==2||k%2==0){
            count += 20;
          }else{
            count += 19;
          }
        }
      }
      else{
        for(int k=0;k<m;k++){
          if(k==m-1){
            count += d;
          }else if(j%3==2||k%2==0){
            count += 20;
          }else{
            count += 19;
          }
        }
      }
    }
    cout << mile - count << endl;
  }

return 0;
}