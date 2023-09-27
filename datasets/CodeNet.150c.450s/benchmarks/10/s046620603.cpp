#include<iostream>
using namespace std;
int main(){
     int n;
     cin >> n;

     int Room[4][3][10] = {0};

     for(int i = 0; i < n; i++) {
         int a, b, c, num;
         cin >> a >> b >> c >> num;
         Room[a - 1][b - 1][c - 1] += num;
     }

     for(int a = 0; a < 4; a++) {
         for(int b = 0; b < 3; b++) {
             for(int c = 0; c < 10; c++) {
                 cout << " " << Room[a][b][c];
                 if(c == 9) cout << "\n";
             }
         }
         if(a != 3) cout << "####################\n";
     }
     return 0;
}