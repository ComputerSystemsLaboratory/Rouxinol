#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int f, s, t, tmp;
   cin >> f >> s >> t;

   if(f > s) { tmp = s; s = f; f = tmp; }
   if(s > t) { tmp = t; t = s; s = tmp; }
   if(f > s) { tmp = f; f = s; s = tmp; }
   
  
   cout << f  << " " << s << " " << t << endl;
}
   
   
      
   
   
   