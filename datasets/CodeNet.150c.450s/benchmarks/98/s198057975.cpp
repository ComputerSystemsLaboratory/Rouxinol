#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
  
using namespace std;
 
int main()
{
    int x, y;
    while(1){
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        int t[100], h[100];
        int t_sum = 0, h_sum = 0;
       
      
	 for(int i = 0; i < x; i++){
            cin >> t[i];
            t_sum += t[i];
        }
         for(int i = 0; i < y; i++){
            cin >> h[i];
            h_sum += h[i];
        }
        if((t_sum + h_sum) % 2 == 1) cout << -1 << endl;
        else{
            int t_sum_new, h_sum_new;
            for(int i = 0; i < x; i++){
                for(int j = 0; j < y; j++){
                    t_sum_new = t_sum + h[j] - t[i];
                    h_sum_new = h_sum + t[i] - h[j];
                    if(t_sum_new == h_sum_new){
                        cout << t[i] << ' ' << h[j] << endl;
                        i = 101;
                        break;
                    }
                }
                if(i == x - 1) cout << -1 << endl;
            }
        }
    }
   return 0;
}