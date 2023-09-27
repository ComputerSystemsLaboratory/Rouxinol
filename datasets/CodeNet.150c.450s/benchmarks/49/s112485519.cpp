#include <iostream>
using namespace std;

int main() {int n,i,a,b,max,min,sum,answer;
while(cin >> n, n ) {
i =2;
cin >> a;
max=a;
min=a;
sum =a;
while(i<=n)
{cin >> b;
if(b>max){max=b;}
if(b<min){min=b;}
sum = sum+b;
i++;
}
//if(b==0){break;}
answer=(sum-max-min)/(n-2);
cout << answer << endl;
}
	// your code goes here
	return 0;
}