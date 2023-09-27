#include<iostream>
#include<string>

using namespace std;

int main() { 
    string A; 

    while( cin >> A ) {

    for(int i=A.length()-1;i>=0;i--)
    cout << A[i];
    
    cout << "\n";
	}
    return 0; 
} 
