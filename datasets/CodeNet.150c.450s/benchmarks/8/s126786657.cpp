#include<iostream>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
  int n,ta=0,ha=0;
  string a,b;
  cin >> n;
  vector<string> taro;
  vector<string> hana;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    taro.push_back(a);
    hana.push_back(b);
    for(int j=0;j<10000;j++){
      if(taro[i] == hana[i]){
	ta++;
	ha++;
	break;
      }
      if(taro[i].substr(0,j) > hana[i].substr(0,j)){
	ta += 3;
	break;
      }
      else if(hana[i].substr(0,j) > taro[i].substr(0,j)){
	ha+=3;
	break;
      }
    }
  }
  cout << ta <<" "<< ha << endl;
  return 0;
}