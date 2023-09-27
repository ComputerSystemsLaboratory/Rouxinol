#include <iostream>  
using namespace std;  
 
  
const int MAX_NUM = 100;  
const int MAX_WEIGHT = 10000;  

  
int weight[MAX_NUM];  
int value[MAX_NUM];  
 
int dp[MAX_WEIGHT];  
  

void Solve( int n, int w )  
{     
    for( int i=1; i<=n; i++ )  
    {  
        for( int j=w; j>=weight[i]; j-- )  
        {             
            if( dp[j-weight[i]] + value[i] > dp[j] )  
                dp[j] = dp[j-weight[i]] + value[i];           
        }  
    }  
    cout << dp[w] << endl;  
}  

int main()  
{    
    int n, w;  
    cin >> n >> w;        
    for( int i=1; i<=n; i++ )  
    {  
        cin >> value[i] >> weight[i];  
    }  
    Solve( n, w );  
 
    return 0;  
}  