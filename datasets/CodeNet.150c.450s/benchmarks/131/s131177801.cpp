#include <bits/stdc++.h>
using namespace std;

vector<int> mini, maxi, arr;
int a, l;

void num(vector<int> &ll, vector<int> &ss){

  int t = 1;
  int llcp = ll[l-1], sscp = ss[l-1];

  for(int i = l-2; i >= 0; i--){
    t *= 10;
    llcp += ll[i] * t;
    sscp += ss[i] * t;
    // cout << ll[i] << " " << ss[i] << endl;
  }
  // cout << llcp << " " << sscp << endl;
  arr.push_back(llcp - sscp);

  for(int i = 0; i < (int)arr.size(); i++){
    for(int j = i+1; j < (int)arr.size(); j++){
      if(arr[i] == arr[j]){
	cout << i << " " << arr[i] << " " << j-i << endl;
	return;
      }
    }
    // cout << arr[i] << " " << llcp << " " << sscp << endl;
  }

  maxi.clear();
  mini.clear();
  t = 1;
  a = arr[arr.size()-1];
  for(int i = 0; i < l; i++){
    t *= 10;
    mini.push_back((a % t) / (t / 10));
    maxi.push_back((a % t) / (t / 10));
    // cout << (a % t) / (t / 10) << endl;
  }

  sort(maxi.rbegin(),maxi.rend());
  sort(mini.begin(),mini.end());

  num(maxi,mini);

}


int main(){


  while(cin >> a >> l && (a || l)){


    int t = 1;

    arr.push_back(a);

    for(int i = 0; i < l; i++){
      t *= 10;
      mini.push_back((a % t) / (t / 10));
      maxi.push_back((a % t) / (t / 10));
      //cout << (a % t) / (t / 10) << endl;
    }
    sort(maxi.rbegin(),maxi.rend());
    sort(mini.begin(),mini.end());

    num(maxi,mini);

    maxi.clear();
    mini.clear();
    arr.clear();



  }



}