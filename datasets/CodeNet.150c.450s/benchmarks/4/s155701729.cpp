#include<iostream>
using namespace std;

int main(){
  int m, f, r;
  char grade;

  while(1){
    cin >> m >> f >> r;
    if (m == -1 && f == -1 && r == -1) break;

    if (m == -1 || f == -1) grade = 'F';
    else if (m + f >= 80) grade = 'A';
    else if (65 <= m + f && m + f < 80) grade = 'B';
    else if (50 <= m + f && m + f < 65) grade = 'C';
    else if (30 <= m + f && m + f < 50) {
      grade = 'D';
      if(r >= 50) grade = 'C';
    }
    else if (m + f < 30) grade = 'F';



    cout << grade << endl;
  }

return 0;
}