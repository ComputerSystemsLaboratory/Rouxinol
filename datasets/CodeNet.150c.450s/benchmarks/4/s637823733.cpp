#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
 
using namespace std;
 
int m,f,r;//中間試験の点数、期末テストの点数、再試験の点数、試験を受けてない場合は-1
 
int main()
{
  while(scanf("%d %d %d",&m,&f,&r)){
    if(m == -1&& f == -1 && r== -1){
      break;
    }
    if(m == -1||f== -1){
      cout <<"F"<<endl;
    }
    else if(m+f >=80)
      cout <<"A"<<endl;
    else  if(m+f>=65 &&m+f<80)
      cout <<"B"<<endl;
    else if(m+f >=50&&m+f<65)
      cout <<"C"<<endl;
    else if(m+f >=30&&m+f<50){
      if(r>=50){
    cout <<"C"<<endl;
      }else
    cout <<"D"<<endl;
    }
    else if(m +f <30){
      cout <<"F"<<endl;
    }
  }
  return 0;
}

