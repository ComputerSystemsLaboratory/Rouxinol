#include <iostream>
using namespace std;

int prog(int y, int m, int d){
  int ret, i;
  for(i=1;i<y;i++){
    if(i % 3 == 0){
      ret += 200;
    }else{
      ret += 195;
    }
  }
  for(i=1;i<m;i++){
    if(y % 3 == 0 || i % 2 == 1){
      ret += 20;
    }else{
      ret += 19;
    }
  }
  ret += (d - 1);
  return ret;
}


int main(void){
  int n, m_day;
  cin >> n;
  m_day = prog(1000, 1, 1);
  while (0<n--){
    int y, m, d;
    cin >> y >> m >> d;
    cout << m_day - prog(y, m, d) << endl;
  }
  return 0;
}

