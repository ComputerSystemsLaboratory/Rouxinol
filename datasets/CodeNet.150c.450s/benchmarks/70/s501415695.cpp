#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

string M[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};

int main(){
	int m,d;
	while(cin>>m>>d,m){
		switch(m){
		case 12:d+=30;
		case 11:d+=31;
		case 10:d+=30;
		case 9:d+=31;
		case 8:d+=31;
		case 7:d+=30;
		case 6:d+=31;
		case 5:d+=30;
		case 4:d+=31;
		case 3:d+=29;
		case 2:d+=31;
		case 1:cout<<M[d%7]<<endl;
		}
	}
}