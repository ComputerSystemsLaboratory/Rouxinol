#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
  int m; //???????????????????????°
  cin >> m;
  do {
    string w; //?????????????????????
    cin >> w;
    
    int s;
    s = w.size(); //???????????°???s??¨??????
    set<string> a; //??????????????\??£??????????????????????´?????????????
    
    for (int i = 0; i < s; i++) { //i+1???????????????????????????(1~i??¨i+1~s, ??????????????¨??????)
      string w1 = w.substr(0, i); //??????????????????w1??????????????????
      string w2 = w.substr(i, s - i); //??????????????????w2??????????????????
      
      for (int j = 0; j < 2; j++) {
	//?????????????????¨????????????????????\???????????????
	if (j == 0) {
	  for (int k = 0; k < 4; k++) {
	    //???r???????????´???????????????????????\?????????4??????
	    string w3 = w1, w4 = w2; //w1,w2???????£?
	    if (k == 0) {
	      string w_ans = w3 + w4;
	      a.insert(w_ans);
	    }
	    else if (k == 1) {
	      reverse(w3.begin(), w3.end());
	      string w_ans = w3 + w4;
	      a.insert(w_ans);
	    }
	    else if (k == 2) {
	      reverse(w4.begin(), w4.end());
	      string w_ans = w3 + w4;
	      a.insert(w_ans);
	    }
	    else if (k == 3) {
	      reverse(w3.begin(), w3.end());
	      reverse(w4.begin(), w4.end());
	      string w_ans = w3 + w4;
	      a.insert(w_ans);
	    }
	  }
	}
	//?????????????????¨????????????????????\????????????
	else {
	  for (int k = 0; k < 4; k++) {
	    //?????????????????´???????????????????????\?????????4???
	    string w3 = w1, w4 = w2; //w1,w2???????£?
	    if (k == 0){
	      string w_ans = w4 + w3;
	      a.insert(w_ans);
	    }
	    else if (k == 1) {
	      reverse(w3.begin(), w3.end());
	      string w_ans = w4 + w3;
	      a.insert(w_ans);
	    }
	    else if (k == 2){
	      reverse(w4.begin(), w4.end());
	      string w_ans = w4 + w3;
	      a.insert(w_ans);
	    }
	    else if (k == 3) {
	      reverse(w3.begin(), w3.end());
	      reverse(w4.begin(), w4.end());
	      string w_ans = w4 + w3;
	      a.insert(w_ans);
	    }
	  }
	}
      }
    }
    cout << a.size() << endl; //??¨?¨?????????????
  } while (--m > 0);
}