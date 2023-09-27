#include <iostream>                                                                                                                      
#include <vector>                                                                                                                        
                                                                                                                                         
std::vector<int> s;                                                                                                                      
                                                                                                                                         
                                                                                                                                         
void unite(int x, int y)                                                                                                                 
{                                                                                                                                        
    int sx(s.at(x)), sy(s.at(y));                                                                                                        
                                                                                                                                         
    for (int i = 0; i < s.size(); ++i)                                                                                                   
        if (s[i] == sy)                                                                                                                  
            s[i] = sx;                                                                                                                   
}                                                                                                                                        
                                                                                                                                         
                                                                                                                                         
bool same(int x, int y)                                                                                                                  
{                                                                                                                                        
    return s[x] == s[y];                                                                                                                 
}                                                                                                                                        
                                                                                                                                         
                                                                                                                                         
int main()                                                                                                                               
{                                                                                                                                        
    int n, q;                                                                                                                            
    std::cin >> n >> q;                                                                                                                  
                                                                                                                                         
    s.assign(n, 0);                                                                                                                      
    for (int i = 0; i < n; ++i)                                                                                                          
        s[i] = i;                                                                                                                        
                                                                                                                                         
    for (int i = 0; i < q; ++i)                                                                                                          
    {                                                                                                                                    
        int cmd, x, y;                                                                                                                   
        std::cin >> cmd >> x >> y;                                                                                                       
                                                                                                                                         
        if (cmd == 0)                                                                                                                    
            unite(x, y);                                                                                                                 
        else                                                                                                                             
            std::cout << (same(x, y) ? 1 : 0) << std::endl;                                                                              
    }                                                                                                                                    
                                                                                                                                         
    return 0;                                                                                                                            
}                                                                                                                                        
                                 