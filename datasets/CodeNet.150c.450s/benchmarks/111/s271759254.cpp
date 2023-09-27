#include<iostream>
using namespace std;
int n;
int num[101];
long long int mem[21][101]={0};
long long int tyosa(int x,int y);
int main(){
  cin >> n;
  for(int i=0;i<n;i++){ 
    cin >> num[i];
  }
  cout<<tyosa(num[0],0)<<endl;
  return 0;
}
long long int tyosa(int x,int y){


  if(x<0||x>20){
    return 0;
  }
  if(y==n-2&&x==num[n-1]){
    return 1;
  }
  if(y==n-2&&x!=num[n-1]){
    return 0;
  }
  if(mem[x][y]!=0){ 
    return mem[x][y];
  }
  return mem[x][y]=tyosa(x+num[y+1],y+1)+tyosa(x-num[y+1],y+1);
}