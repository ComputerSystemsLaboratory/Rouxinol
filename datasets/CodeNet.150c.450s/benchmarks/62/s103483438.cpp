#include<iostream>
using namespace std;

int main() {
    int a,b,c,min,mid,max;
    cin >> a >> b >> c;
    max = a;
    if(max < b) {
    	max = b;
    }
    if(max < c) {
    	max = c;
    }
    
    min = a;
    if(min > b) {
    	min = b;
    }
    if(min > c) {
    	min = c;
    }
    
    mid = a;
    if((min == a || min == b) && (max == a || max == b))  {
    	mid = c;
    }
    if((min == b || min == c) && (max == b || max == c))  {
    	mid = a;
    }
       if((min == c || min == a) && (max == c || max == a))  {
    	mid = b;
    }

    cout << min << " " << mid << " " << max << endl;
    return 0;
}
