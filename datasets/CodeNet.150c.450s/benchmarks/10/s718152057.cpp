#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
	cin >> a >> b >> c;
	cout << a << " " << b << " " << c <<endl
	*/
	int a[4][3][10];
	int b,f,r,v,x;
	cin >> x;
	for(int bb=0;bb<4;bb++){
    	for(int ff=0;ff<3;ff++){
        	for(int rr=0;rr<10;rr++){
    	        a[bb][ff][rr]=0;
        	}
    	}
	}
	for(int i=0;i<x;i++){
	    cin >> b>> f>> r>> v;
	    a[b-1][f-1][r-1]+=v;
	}
	for(int bb=0;bb<4;bb++){
    	for(int ff=0;ff<3;ff++){
        	for(int rr=0;rr<10;rr++){
    	        cout << " "<< a[bb][ff][rr];
    	      //  if(rr!=9)cout << " ";
        	}
    	    cout << '\n';
    	}
        if(bb!=3)cout << "####################" << endl;
	}
}