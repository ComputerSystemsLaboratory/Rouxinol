#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    double X[6] = {};
    
    while( cin >> X[0]) {
    	for(int i=1;i<6;i++) 
    	cin >> X[i];
   
    double y = ( X[2] * X[3] - X[0] * X[5]) / ( X[1] * X[3] - X[0] * X[4] );

    if( X[0] !=0 )
    cout << fixed << setprecision(3) << (X[2] - X[1] * y) / X[0] << " " << y << "\n";
    
    else
    cout << fixed << setprecision(3) << (X[5] - X[4] * y) / X[3] << " " << y << "\n";
}
	return 0;
}
