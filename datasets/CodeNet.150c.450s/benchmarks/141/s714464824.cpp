#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main (int argc, char * const argv[]) {
    // insert code here...
    double x1, y1, x2, y2, x3, y3, xp, yp;
	
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		/*
		if( ((x1-x2)*yp-xp*(y1-y2))>0 && ((x2-x3)*yp-xp*(y2-y3))>0 && ((x3-x1)*yp-xp*(y3-y1))>0 ){
			cout<<"YES"<<endl;
		}else if( ((x1-x2)*yp-xp*(y1-y2))<0 && ((x2-x3)*yp-xp*(y2-y3))<0 && ((x3-x1)*yp-xp*(y3-y1))<0 ){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		*/
		
		if( (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1) >0 && (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2) >0 && (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3) >0 ){
			cout << "YES" << endl;
		}else if( (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1) <0 && (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2) <0 && (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3) <0 ){
			cout << "YES" << endl;
		}else{
			cout <<"NO" <<endl;
		}
	}
	return 0;
}