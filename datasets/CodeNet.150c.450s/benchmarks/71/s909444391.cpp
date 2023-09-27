#include <iostream>
using namespace std;

int main() {
      int a,b,c,d,count;
      count = 0;
      int num[100];
      int max;
      int n;
      
      for (int v=0;v<100;v++) {
      	num[v] = 100;
      	cin >> num[v];
      	if (!(0<=num[v]&&num[v]<=50)){
      		max = v-1;
      		break;
      	}
      }
      for (int w=0;w<=max;w++){
      	n=num[w];
      	count = 0;
      	for (int i=0;i<=9;i++) {
            a=i;
            if (n-a<0) {

            	break;
            }
            for (int j=0;j<=n-a&&j<=9;j++) {
            	b=j;
            	if (n-a-b < 0) {
            		break;
            	}
            	for (int k=0;k<=n-a-b&&k<=9;k++) {
            		c=k;
            		if (n-a-b-c < 0) {
            			break;
            		}
            		
            		for (int l=0;l<=n-a-b-c&&l<=9;l++) {
            			d=l;
            			if (n==a+b+c+d) {
            				//cout << a << b << c << d <<(a+b+c+d)<<endl;
            				count++;
            			}
            			if (n-a-b-c-d < 0) {
            			break;
            		}
            		}
            	}
            }
      }
      
      cout << count <<endl;
      }
      return 0;
}