#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int w, h;
    int H, W;
    
    int min;
    
    while(1){
        
        cin >> h >> w;
        
        if ( w == 0 && h == 0) break;
        
        int length = w*w + h*h;
        min = 150*150;
        
        bool flag = false;
        
        for(int i = 1; i <= 150 ; i++)
        {
            
            for(int j = i+1; j <= 150 ; j++)
            {
                
                int temp = i*i + j*j;
                
                if(temp > length)
                {
                    
                    if (temp < min)
                    {
                        
                        H = i;
                        W = j;
                        min = temp;
                    }
                
                }
                else if(temp == length)
                {
                    if (i > h)
                    {
                        flag = true;
                        H = i;
                        W = j;
                        min = temp;
                    }
                }
                
                if(flag) break;
            }
            
            if(flag) break;
        }
        
        cout << H << " " << W << endl;
    }
    
    return 0;
}
