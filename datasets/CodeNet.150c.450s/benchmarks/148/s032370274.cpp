#include<bits/stdc++.h>
using namespace std ;
int main(){
  	int N ; cin >> N ;
  	int ac = 0, wa = 0, re = 0, tle = 0 ;
  	string temp ;
  	while( N-- ) {
    	cin >> temp ;
      	if( temp == "AC" ) ac++ ;
      else if( temp == "WA" ) wa++ ;
      else if( temp == "TLE" ) tle++ ;
      else if( temp == "RE" ) re++ ;
    }
  	cout << "AC x " << ac << endl ;
  cout << "WA x " << wa << endl ;
  cout << "TLE x " << tle << endl ;
  cout << "RE x " << re << endl ;
	return 0 ;
}
