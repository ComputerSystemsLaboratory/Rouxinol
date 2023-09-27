#include <bits/stdc++.h>

using namespace std;
int main(){
  int r,c;
  int sum,sum2;
  cin >> r >>c;
  int row[r+1][c+1];
  int r_num, c_num;
  for(r_num=0;r_num<r;r_num++){

    for(c_num=0;c_num<c;c_num++){

      cin >>row[r_num][c_num];
    }
  }


  for(r_num=0;r_num<r;r_num++){
    sum = 0;
    for(c_num=0;c_num<c;c_num++){
      cout <<row[r_num][c_num]<<" ";
      sum += row[r_num][c_num];
    }

    cout<<sum<<endl;
  }
  sum2 = 0;
  for(c_num=0;c_num<c;c_num++){
    sum = 0;
    for(r_num=0;r_num<r;r_num++){
      sum += row[r_num][c_num];
    }

    cout<<sum<<" ";
    sum2 += sum;
  }
  cout <<sum2 <<endl;

}

