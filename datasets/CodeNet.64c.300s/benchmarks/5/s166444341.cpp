#include <iostream>
#include <algorithm>
#define c cin
#define o cout
#define el endl
using namespace std;

int main(){
	int mount[10];
	for(int i=0;i<10;i++) c>>mount[i];
	sort(mount, mount+10);
	for(int i=9;i>6;i--) o<<mount[i]<<el;
}