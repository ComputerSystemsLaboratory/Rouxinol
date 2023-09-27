#include <iostream> 
#include <stdio.h>
#define MAX 200005
typedef long long ll; 
using namespace std; 
int main () 
{
    ll N; 
    cin >> N ; 
    int k; 
    cin >> k ; 
    ll arr[MAX]; 
    for(int i=0; i < N; i ++ ) 
    {
        cin >> arr[i]; 
    }
    int answer = N - k;
    //cout << "Printing answer: " << answer << endl; 
    //for(int i=1;i<=answer;i++) 
   // {
        for (int i=0; i < N-k ;  i++ )
        {
            if (arr[k+i]>arr[i])
            {
            cout << "Yes" << endl;
            }   
            else 
            {
            cout << "No" << endl; 
             
            }
        }
    //} 
    
    return 0; 
}
