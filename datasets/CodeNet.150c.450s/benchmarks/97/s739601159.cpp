
//  A

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n[200],d[200],ans_a, ans_b,x[200],y[200];
    int i,l = 0,a,max_x,max_y,min_x,min_y;
    
    while(1){
        
        scanf("%d",&a);
        x[0] = 0; y[0] = 0;
        if(a == 0)
            break;
        if(a == 1){
            ans_a = 1;
            ans_b = 1;
        }
        else{
            for(i=0;i<a-1;i++)
                scanf("%d %d",&n[i],&d[i]);
            max_x = x[0];
            max_y = y[0];
            min_x = x[0];
            min_y = y[0];
            
            for(i=0;i<a-1;i++){
                if(n[i] == 0){
                    x[i+1] = 0;
                    y[i+1] = 0;
                }
                else {
                    x[i+1] = x[n[i]];
                    y[i+1] = y[n[i]];
                }
                
                switch(d[i]){
                    case 0:x[i+1]--;break;
                    case 1:y[i+1]--;break;
                    case 2:x[i+1]++;break;
                    case 3:y[i+1]++;break;
                }
                
                if(max_x < x[i+1] )
                    max_x = x[i+1];
                if(max_y < y[i+1])
                    max_y = y[i+1];
                if(min_x > x[i+1] )
                    min_x = x[i+1];
                if(min_y > y[i+1])
                    min_y = y[i+1];
            }
            ans_a = max_x + abs(min_x) + 1;
            ans_b = max_y + abs(min_y) + 1;
        }
        cout << ans_a << " " << ans_b << endl;
    }

    return 0;
}