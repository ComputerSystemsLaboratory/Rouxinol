#include <bits/stdc++.h>
using namespace std;
int main() {
for (int i = 0; i < 50; i++){
int M, F, R; 
cin >> M >> F >> R; 
if(M == -1 && F == -1 && R == -1) break; 
else if(M == -1 || F == -1) cout << "F" << endl; 
else if(M + F >= 80) cout << "A" << endl; 
else if(M + F >= 65) cout << "B" << endl; 
else if(M + F >= 50) cout << "C" << endl;
else if(M + F >= 30 && R >= 50) cout << "C" << endl; 
else if(M + F >= 30 && R < 50) cout << "D" << endl; 
else if(M + F < 30) cout << "F" << endl; 
}
}
