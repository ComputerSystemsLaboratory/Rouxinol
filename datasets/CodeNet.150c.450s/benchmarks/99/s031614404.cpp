#include <iostream>
#include <string>
using namespace std;

string str = "mcxi";

int chint(string s)
{
     int num = 0, t = 1000, i = 0, j = 0, k = 1;
     while (j < str.size()) {
	  if (str[j] == s[i]) {
	       num += (k * t);
	       t /= 10;
	       k = 1;
	       j++;
	       i++;
	  }else if ('1' < s[i] && s[i] <= '9') {
	       k = s[i] - '0';
	       i++;
	  }else {
	       j++;
	       t /= 10;
	  }
     }

     return num;
}

string chstr(int num)
{
     string s;
     int i = 1000, t, j = 0;
     while (num) {
	  t = num / i;
	  num %= i;
	  if (t > 1) {
	  	char c;
	  	c = t + '0';
	  	s = s + c + str[j];
	  }else if (t > 0)  s += str[j];
	  i /= 10;
	  j++;
     }
     
     return s;
}

int main(void)
{
     string str1, str2;
     int n;
     cin >> n;
     while (n) {
	  cin >> str1 >> str2;
	  int ans;
	  ans = chint(str1) + chint(str2);
	  str1 = chstr(ans);
	  cout << str1 << endl;
	  n--;
     }

     return 0;
}