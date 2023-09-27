#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
long long arr[100005];
int main()
{ 

int n; 
cin>>n; 
long long sum = 0; 
for (int i = 0; i < n; i++)
{
int x; 
cin >> x; 		
arr[x] += 1; 	
sum += x; 
} 	
int q;
cin >> q; 
while (q--)
{ 		
int b, c; 	
cin >> b >> c; 	
arr[c] += arr[b]; 	
sum = sum + arr[b] * c-arr[b]*b ; 
arr[b] = 0; 	
cout << sum << '\n'; 	} 	
}
