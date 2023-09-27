#include <iostream>

using namespace std;

#define MAX_C 100

int main()
{
    int r, c, v;
    
    int csum[MAX_C], rsum;
    
    for(int i = 0; i < MAX_C; i++) { csum[i] = 0; }
    
    cin >> r >> c;
    
    for(int i = 0; i < r; i++)
    {
        rsum = 0;
        
        for(int j = 0; j < c; j++)
        {
            cin >> v;
            
            cout << v;
            
            rsum += v;
            
            csum[j] += v;
            
            if(j + 1 == c)
            {
                cout << ' ' << rsum << endl;
            }
            else
            {
                cout << ' ';
            }
        }
    }
    
    rsum = 0;
    
    for(int i = 0; i < c; i++)
    {
        cout << csum[i];
        
        rsum += csum[i];
        
        if(i + 1 == c)
        {
            cout << ' ' << rsum << endl;
        }
        else
        {
            cout << ' ';
        }
    }
    
    return 0;
}