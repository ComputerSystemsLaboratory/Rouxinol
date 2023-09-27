#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    while(1)
    {
        int num;
        cin>>num;
        
        if(num == 0)
        {
            break;
        }
        
        vector< int > cardA(num);
        vector< int > cardB(num);
        
        for(int i=0;i<num;++i)
        {
            int pA, pB;
            cin>>pA>>pB;
            cardA[i] = pA;
            cardB[i] = pB;
        }
        
        int pointA = 0;
        int pointB = 0;
        
        for(int i=0;i<num;++i)
        {
            if(cardA[i] ==cardB[i])
            {
                pointA += cardA[i];
                pointB += cardA[i];
            }
            else if(cardA[i] > cardB[i])
            {
                pointA += cardA[i] + cardB[i];
            }
            else
            {
                pointB += cardA[i] + cardB[i];
            }
        }
        
        cout<<pointA<<" "<<pointB<<endl;
    }
    
    return 0;
}