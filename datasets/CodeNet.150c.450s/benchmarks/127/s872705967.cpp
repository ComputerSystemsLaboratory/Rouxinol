#include<iostream>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

void solve(string str){
  set <string> train;
  string front,back,rev_front,rev_back;
  train.insert(str);
  for(int j = 1; j < str.size(); j++){
    front = str.substr(0,j);
    rev_front = front;
    reverse(rev_front.begin(),rev_front.end());
	    
    back = str.substr(j,str.size()-j);
    rev_back = back;
    reverse(rev_back.begin(),rev_back.end());
	  
    train.insert(back + front);
    train.insert(rev_front + back);
    train.insert(back + rev_front);
    train.insert(front + rev_back);
    train.insert(rev_back + front);
    train.insert(rev_front + rev_back);
    train.insert(rev_back + rev_front);
  }
  cout << train.size() << endl;

}



int main(){
  int m;
  string str;
  cin >> m;
  for( int i = 0; i < m; i++){
    cin >> str;
    solve(str);

  }

  return 0;
}