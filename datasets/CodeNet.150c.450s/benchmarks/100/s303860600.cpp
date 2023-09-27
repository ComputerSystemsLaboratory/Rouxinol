#include <iostream>
#include <string>

using namespace std;

int main()
{

  int n,i;
  string out;
  cin >> n;

  switch(n){
    case 1:
      out = "1";
      break;
    case 2:
      out = "2";
      break;
    case 3:
      out = "6";
      break;
    case 4:
      out = "24";
      break;
    case 5:
      out = "120";
      break;
    case 6:
      out = "720";
      break;
    case 7:
      out = "5040";
      break;
    case 8:
      out = "40320";
      break;
    case 9:
      out = "362880";
      break;
    case 10:
      out = "3628800";
      break;
    case 11:
      out = "39916800";
      break;
    case 12:
      out = "479001600";
      break;
    case 13:
      out = "6227020800";
      break;
    case 14:
      out = "87178291200";
      break;
    case 15:
      out = "1307674368000";
      break;
    case 16:
      out = "20922789888000";
      break;
    case 17:
      out = "355687428096000";
      break;
    case 18:
      out = "6402373705728000";
      break;
    case 19:
      out = "121645100408832000";
      break;
    case 20:
      out = "2432902008176640000";
      break;
  }
  cout << out <<endl;
  return 0;
}