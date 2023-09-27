
#include<iostream>
using namespace std;
int main(){
  int a=0,b=0, n[150], nos, sum[150]={0};
  char str[150][100][3];
  while(1){
    cin >> n[a];
    if (n[a]==0) break;
    for(b=0;b<n[a];b++){
      cin >> str[a][b];
    }
    a++;
  }
  nos = a;
  for(a=0;a<nos;a++)
    {  
     for(b=0;b+1<n[a];b+=2)
       {
         if (str[a][b][0]-str[a][b+1][0]) sum[a]++;
       }
     cout << sum[a] << endl;
    }
  return 0;
}