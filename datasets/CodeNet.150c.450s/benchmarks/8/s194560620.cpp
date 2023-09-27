// memo : A is smaller than Z
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<string> Taro, Hanako;
  string s1, s2;
  int i, j, n, Taro_Score = 0, Hanako_Score = 0, end_checker;
  
  cin >> n;
  for(i = 0; i < n; i++) {
	cin >> s1 >> s2;
	Taro.push_back(s1);
	Hanako.push_back(s2);
  }
  
  for(i = 0; i < Taro.size(); i++) {
	end_checker = 0;
	for(j = 0; j < Taro[i].length(); j++) {
	  //T:cat,H:dog -> Taro wins
	  if(Taro[i][j] > Hanako[i][j]) {
		Taro_Score += 3;
		end_checker = 1;
		break;
	  }
	  //T:dog,H:cat -> Hanako wins
	  else if(Taro[i][j] < Hanako[i][j]) {
		Hanako_Score += 3;
		end_checker = 1;
		break;
	  }
	}
	if(end_checker == 1) {
	  continue;
	}
	
	if(Taro[i].length() > Hanako[i].length()) {
	  Taro_Score += 3;
	  end_checker = 1;
	}
	else if(Taro[i].length() < Hanako[i].length()) {
	  Hanako_Score += 3;
	  end_checker = 1;
	}
	else  {
	  Taro_Score++;
	  Hanako_Score++;
	  end_checker = 1;
	}
  }
  cout << Taro_Score << " " << Hanako_Score << endl;
  return 0;
}