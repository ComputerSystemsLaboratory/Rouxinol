#include<iostream>
#include <algorithm>
 
using namespace std;
 
void triangleCal()
{
    int n;
    int side[3];
  
    cin >>n;
    
    while(n--)  //instead of "for"
    {
        cin >>side[0]>>side[1]>>side[2]; 
        
        sort(side, side+3); // sort date by ascending order
        
       if(side[2] * side[2] == side[1] * side[1] + side[0] * side[0]) 
       {
           cout <<"YES"<<endl;
       }
       else
       {
           cout <<"NO"<<endl;
       }
    }
    
    return;
}
   
int main(){
   
    triangleCal();
    return 0;
}