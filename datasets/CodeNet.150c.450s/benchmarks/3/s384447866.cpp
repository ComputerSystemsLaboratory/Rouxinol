#include<iostream>
#include<string>
using namespace std;

int main(){
  string str,order,rep,t_str;
  int q,a,b;

  cin >> str >> q;

  for (int i = 1; i <= q; i++){
    cin >> order >> a >> b;

    if (order == "replace"){
      cin >> rep;
      str.replace(a,b-a+1,rep);
    }
    else if (order == "reverse"){
      t_str = str.substr(a,b-a+1);

      for (int j = 0; j<t_str.size(); j++){
        str[a + j] = t_str[t_str.size() - 1 - j];
      }
    }
    else{
      cout << str.substr(a,b-a+1) << endl;
    }
  }

  return 0;
}