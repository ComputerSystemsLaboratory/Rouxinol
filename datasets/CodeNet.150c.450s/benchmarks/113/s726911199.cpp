#include<iostream>
 using namespace std;

int main(){

int x[10000]; 

 	for (int i=1; i<=10000; i=i+1 )
 	{
 	cin >> x[i] ;

		if( x[i] == 0 )
 		{
 		break;
 		}else{
		cout<< "Case "<< i << ": "<< x[i] << endl;
 		}

 	}

 return 0;
 }
