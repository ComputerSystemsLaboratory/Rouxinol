#include<iostream>

using namespace std;
   
void Loan()
{
    int m;
    int sum = 100000;
    int week;
    
    cin>>week;
    
    for(int i=0; i<week; i++)
    {
        sum = sum * 1.05;
        
        m = sum % 1000;
        
        if(m > 0)
        {
            sum = sum - m + 1000; 
        }
        
    }
    
   cout<<sum<<endl;
   return;
}
     
int main()
{     
    Loan();
    return 0;
}