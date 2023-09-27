#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;

  cin >> n;

  while(n--){
    int sum = 0;
    
    for(int i = 0; i < 2; i++){
      string s;
      cin >> s;

      int num = 0;
      for(int k = 0; k < s.size(); k++){
	if(s[k] >= '1' && s[k] <= '9'){
	  int a = s[k] - '0';
	  k++;
	  
	  if(s[k] == 'm'){
	    num += 1000*a;
	  }
	  else if(s[k] == 'c'){
	    num += 100*a;
	  }
	  else if(s[k] == 'x'){
	    num += 10*a;
	  }
	  else if(s[k] == 'i'){
	    num += 1*a;
	  }
	}
	else {
	  if(s[k] == 'm'){
	    num += 1000;
	  }
	  else if(s[k] == 'c'){
	    num += 100;
	  }
	  else if(s[k] == 'x'){
	    num += 10;
	  }
	  else if(s[k] == 'i'){
	    num += 1;
	  }
	}
      }
      sum += num;
    }
    //cout << "sum = " << sum << endl;

    if(sum/1000 > 0){
      if(sum/1000 != 1) cout << sum/1000;
      cout << "m";
      sum %= 1000;
    }
    if(sum/100 > 0){
      if(sum/100 != 1) cout << sum/100;
      cout << "c";
      sum %= 100;
    }
    if(sum/10 > 0){
      if(sum/10 != 1) cout << sum/10;
      cout << "x";
      sum %= 10;
    }
    if(sum > 0){
      if(sum != 1) cout << sum;
      cout << "i";
    }
    cout << endl;
  }
  return 0;
}

