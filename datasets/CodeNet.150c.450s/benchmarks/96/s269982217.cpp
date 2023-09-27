#include<iostream>
#include<string>
using namespace std;
int main(){
  char hyou[9][5]={
    {' ','.',',','!','?'},
    {'c','a','b','0','0'},
    {'f','d','e','0','0'},
    {'i','g','h','0','0'},
    {'l','j','k','0','0'},
    {'o','m','n','0','0'},
    {'s','p','q','r','0'},
    {'v','t','u','0','0'},
    {'z','w','x','y','0'}
  };
  string a;
  int n,b=1;
  cin>>n;
  for(int i=0;i<n;i++){
    b=1;
    cin>>a;
    if(a.size()==1)cout<<hyou[a[0]-'0'][1];
    int size=a.size();
    for(int j=0;j<size-1;j++){
      if(a[j]=='0'){
	b=1;
	continue;
      }
      if(a[j]==a[j+1])b++;
      else{
	if(a[j]=='7'||a[j]=='9')b%=4;
	else if(a[j]=='1')b%=5;
	else b%=3;
	cout<<hyou[a[j]-'0'-1][b];
      }
    }
    cout<<endl;
  }
  return 0;
}