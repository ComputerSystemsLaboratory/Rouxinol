#include<iostream>  
#include<algorithm>  
#include<cstdio>  
#include<cstring>  
#include <deque> 
using namespace std;  

bool state = false ;

int main()
{
	int n ;
	while(1)
	{
		cin >> n ;
		if( ! n ) return 0 ;
		
		int p[5005];
		
		for(int i = 0 ; i < n ; i ++)
		{
			cin >> p[i] ;
		}
		
		long long max , contain ;
		contain = 0 ;
		max = 0x3f3f3f3f ;
		max *= -1 ;
		
		for(int i = 0 ; i < n ; i ++)
		{
			if(contain < 0) contain = 0 ;
			 
			contain += p[i] ;
			
			if(contain > max) max = contain ;
		}
		
	//	if(state) cout << endl ;
		
	//	state = true ;
	
		cout << max << endl ;
		
	} 
	return 0 ;
 } 