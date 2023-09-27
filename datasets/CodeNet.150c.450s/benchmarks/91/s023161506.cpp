#include<iostream>
#include<vector>

using namespace std;
   
void primeCal()
{
    const int N = 1000000;
    
    vector<bool> prime(N, true);
    
    prime[0] = prime[1] = false;
    
    for (int i = 2; i*i < N; ++i) 
    {
        if (!prime[i]) 
        { 
            continue; 
        }
        
        for (int j = i*i; j < N; j += i) 
        {
            prime[j] = false;
        }
    }
    
    vector<int> count(N);
    
    for (int i = 1; i < N; ++i) 
    {
        count[i] = count[i-1] + prime[i];
    }
    
    int n;
    
    while (cin>>n)
    {
        cout << count[n] << endl;
    }
    
    return;
}
     
int main()
{     
    primeCal();
    return 0;
}