#include <iostream>
#include <string>

using namespace std;

int main()
{
 string L,R,all,r,l;

 int m,h = 2,p,q;


 while (1){

 	cin >> all;

 	cin >> m ;

 	if (all == "-")break;

 	for (int i = 0 ; i < m  ; i++ ){

 		cin >> h ;
 		p = h ;
 		q = all.size();

 		 L = all.substr(0,h);
 		 R = all.substr(p,q - h + 1);
 		 l = L;
 		 r = R;
 		 all =  r + l;
 	}

 	cout << all << endl;

 }


 return 0;

}