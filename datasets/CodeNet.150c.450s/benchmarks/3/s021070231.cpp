#include <iostream>
using namespace std;

void print(int a, int b, string str) {
  for (int i=a; i<=b; ++i) {
    cout << str[i];
  }
  cout << endl;
}

string replace(int a, int b, string str, string p) {
  int j=0;
  for(int i=a; i<=b; ++i){
    str[i]=p[j];
    j++;
  }
  return str;
}

string reverse(int a, int b, string str) {
  char tmp;
  for (int i=0; i<(b-a+1)/2; ++i) {
    tmp=str[b-i];
    str[b-i]=str[a+i];
    str[a+i]=tmp;
  }
  return str;
}

int main(int argc, char *argv[])
{
  string str, p, order;
  int a, b, q;
  cin >> str >> q;

  for (int i=0; i<q; ++i) {
    cin >> order;
    if (order == "print") {
      cin >> a >> b;
      print(a, b, str);
    } else if(order == "reverse"){
      cin >> a >> b;
      str=reverse(a, b, str);
    } else if (order == "replace") {
      cin >> a >> b >> p;
      str=replace(a, b, str, p);
    }
  }

  return 0;
}

