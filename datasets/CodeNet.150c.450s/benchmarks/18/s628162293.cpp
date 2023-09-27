#include<iostream>

using namespace std;

int main() { 
    int weeks; 

    while( cin >> weeks ) {

	int sum = 100000;
	
    for(int i=0;i<weeks;i++){
    	
    sum *= 1.05;
    if( sum % 1000 !=0 )
    sum = ( sum / 1000 +1 ) * 1000;
    
	}
    cout << sum << "\n";
	}
    return 0; 
} 
