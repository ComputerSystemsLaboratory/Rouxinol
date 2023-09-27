#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool find(vector<string> hoge, string huga){
  for(int i=0;i < (int) hoge.size();i++){
	if(hoge[i]==huga) return true;
  }
 return false;}



int main()
{
  int n;
  cin >> n;

  while(n>0){
	string str;
	cin >> str;
    vector<string> trains;
	int ans = 1;
	trains.push_back(str);
	// cout << "hoge" << endl;
	for(int i=1;i<((int) str.length());i++){
	  string ftr=str.substr(0,i);
	  string btr=str.substr(i);
	  if(!find(trains,btr+ftr)){
		trains.push_back(btr+ftr);
		ans++;
		// cout << btr+ftr << endl;		
	  }
	  // f + rvs b

	  reverse(btr.begin(),btr.end());
	  if(!find(trains,ftr+btr)){
		trains.push_back(ftr+btr);
		// cout << ftr+btr << endl;
		ans++;
	  }
	  if(!find(trains,btr+ftr)){
		trains.push_back(btr+ftr);
		ans++;
		// cout << btr+ftr << endl;		
	  }
	  
	  // rvs f + rvs b
	  reverse(ftr.begin(),ftr.end());
	  if(!find(trains,ftr+btr)){
		trains.push_back(ftr+btr);
		// cout << ftr+btr << endl;
		ans++;
	  }

	  if(!find(trains,btr+ftr)){
		trains.push_back(btr+ftr);
		// cout << btr+ftr << endl;
		ans++;
	  }

	  // rvs f + b
	  reverse(btr.begin(),btr.end());
	  if(!find(trains,ftr+btr)){
		trains.push_back(ftr+btr);
		// cout << ftr+btr << endl;
		ans++;
	  }
	  if(!find(trains,btr+ftr)){
		trains.push_back(btr+ftr);
		// cout << btr+ftr << endl;
		ans++;
	  }
	}
	cout << ans << endl;
	n--;
  }
  return 0;
}