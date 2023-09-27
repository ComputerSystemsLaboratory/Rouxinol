#include <iostream>
#include<cmath>

using namespace std;

void Solution()
{
//    int a1, a2, a3, a4;
//    int b1, b2, b3, b4;
//    
//    int a[2][4] = {a1, a2, a3, a4, b1, b2, b3, b4};
    
    int a[4];
    int b[4];
    
    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
    {
        int hit = 0;  // should define hit and below inside the loop, otherwise, it can be accumulated
        int blow = 0;
        
        cin>>b[0]>>b[1]>>b[2]>>b[3];
        
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if(a[i] == b[j])
                {
                    if (i == j)
                    {
                        hit++;
                    }
                    
                    if(i != j)
                    {
                        blow++;
                    }
                }
                else
                    continue;
            }
        }
        
        cout<<hit<<" "<<blow<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}