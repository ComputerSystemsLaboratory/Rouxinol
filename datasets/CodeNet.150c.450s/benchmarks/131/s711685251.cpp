#include <iostream>
#include <string>
#include <sstream>

using namespace std;


/*
int stoi(string s){
  int ans = 0;
  for(int i = 0 ; i < s.length() ; i++){
      ans += (s[i] - 48) * pow(10, s.length() - i);
  }
  return ans;
}
*/

int main(void){
  while(1){
    string s;
    int L;

    cin >> s;
    cin >> L;
    if(s == "0" && L == 0){return 0;}

    int c = s.length();
    if(s.length() != L){
      for(int i = 0 ; i < L - c ; i++){
        s = s + "0";
      }
    }

    int a[21];
    a[0] = stoi(s);
    int diff = 0;

    bool stop = false;
    int cur = 1;

    int ansi;
    int ansj;
    int ansa;

//    cout << "s = " << s << endl;

    while(!stop){

      string max = s;
      string min = s;


      /* ???????????????max??¨min????±??????? */
      for(int i = 0 ; i < L-1 ; i++){
        for(int j = i ; j < L ; j++){
          if(max[i] < max[j]){
            char tmp;
            tmp = max[i];
            max[i] = max[j];
            max[j] = tmp;
          }

          if(min[i] > min[j] && min[j] >= 48){
            char tmp;
            tmp = min[i];
            min[i] = min[j];
            min[j] = tmp;
          }
        }
      }

//      cout << "max = " << max << endl;
//      cout << "min = " << min << endl;

      int maxi = stoi(max);
      int mini = stoi(min);
      diff = maxi - mini;


      a[cur] = diff;
      for(int i = 0 ; i <= cur ; i++){
        for(int j = i + 1 ; j <= cur ; j++){
          if(a[i] == a[j]){
            stop = true;
            ansi = j;
            ansj = i;
            ansa = diff;
          }
        }
      }

      cur++;

      stringstream ss;
      ss << diff;
      s = ss.str();

      c = s.length();
      if(s.length() != L){
        for(int i = 0 ; i < L - c ; i++){
          s = s + "0";
        }
      }


//      cout << "s = " << s << endl;

    }

    cout << ansj << " " << ansa << " " << ansi - ansj << endl;

  }

}