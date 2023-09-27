 #include <iostream>
 #include <bitset>
 #include <algorithm>
 
 using namespace std;
 
 bitset<10000> cookie[10];
 
 int main() {
    int r;
     int c;
     while (cin >> r >> c && r > 0) {
         int i, j;
         
         for (i = 0; i < r; i++) {
             for (j = 0; j < c; j++) {
                 bool upwards;
                 cin >> upwards;
                 cookie[i][j] = upwards;
             }
         }
         
         int result = 0;
         int permute = 1 << r;
         for (i = 0; i < permute; i++) {
            for (j = 0; j < r; j++) {
             if (i & 1 << j) {
                 cookie[j].flip();
             }
            }
            
            int possibleResult = 0;
            for (int p = 0; p < c; p++) {
             int upCount = 0;
             for (int q = 0; q < r; q++) {
                 if (cookie[q][p]) {
                     upCount++;
                 }
             }
             possibleResult += max(upCount, r - upCount);
            }
            result = max(result, possibleResult);   
             
            for (j = 0; j < r; j++) {
                if (i & 1 << j) {
                    cookie[j].flip();
                }
            }                                
        }
        cout << result << endl;
     }   
     return 0;
 }