#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int W,H,x,y,r;
	char buf[512];
	int y_n=1; //yes=1,no=0
	
	fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %d %d %d %d", &W, &H, &x, &y, &r);
    
    if(x-r<0 || x+r>W) y_n=0;
    if(y-r<0 || y+r>H) y_n=0;
    
    if(y_n==1) printf("%s\n", "Yes");
    else printf("%s\n", "No");
	
	return 0;
}