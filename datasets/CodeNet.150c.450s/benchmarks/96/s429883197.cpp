#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<pair<int,int> > vpii(80);
string num;
void print(int s,int f){
  switch(f-48){
  case 1:switch(s%5){
    case 1:cout<<'.';break; case 2:cout<<',';break; case 3:cout<<'!';break;case 4:cout<<'?';break; case 0:cout<<" ";break;}break;
  case 2:switch(s%3){
    case 1:cout<<'a';break; case 2:cout<<'b';break; case 0:cout<<'c';break;}break;
  case 3:switch(s%3){
    case 1:cout<<'d';break;case 2:cout<<'e';break;case 0:cout<<'f';break;}break;
  case 4:switch(s%3){
    case 1:cout<<'g';break;case 2:cout<<'h';break;case 0:cout<<'i';break;} break;
  case 5:switch(s%3){
    case 1:cout<<'j';break;case 2:cout<<'k';break;case 0:cout<<'l';break;} break;
  case 6:switch(s%3){
    case 1:cout<<'m';break;case 2:cout<<'n';break;case 0:cout<<'o';break;} break;
  case 7:switch(s%4){
    case 1:cout<<'p';break;case 2:cout<<'q';break;case 3:cout<<'r';break;case 0:cout<<'s';break;} break;
  case 8:switch(s%3){
    case 1:cout<<'t';break;case 2:cout<<'u';break;case 0:cout<<'v';break;}break; 
  case 9:switch(s%4){
    case 1:cout<<'w';break;case 2:cout<<'x';break;case 3:cout<<'y';break;case 0:cout<<'z';break;}break;
  default :break; 
  }
}
int main(){
  int k=0,l=0,n;
  cin >> n;
  for(int q=0;q<n;q++){
    l=0;
    cin >> num;
    int a;
    for(int i=0;i<num.size();i++){
      if(i==0)
	a=num[0];
      k++;
      if(i!=0&&num[i]=='0' &&num[i-1]=='0'){
	k=0;
	continue;
      }else {
      if(num[i]!='0')
	a=num[i];
      if(num[i]=='0'){
	vpii[l]=make_pair(a,k-1);
	l++;
	k=0;
      }}
    }
    for(int j=0;j<l;j++){
      int w=0;
      print(vpii[j].second,vpii[j].first);
    }
    cout<<endl;
  }
  return 0;
}