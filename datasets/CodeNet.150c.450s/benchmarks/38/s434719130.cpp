#include<stdio.h>
#include<math.h>
#include<iostream>



int main(void){

	int n,i;
	double x[1000], y[1000], z[1000], a[1000],aa[1000],aaa,xa[1000],ya[1000],za[1000];

	a[0] = 3;
	
	double tmp;

	std::cin >> n;
	i = 0;

	for (i = 0; i < n; i++) {
		

		

		std::cin >> x[i];
		std::cin >> y[i];
		std::cin >> z[i];


		if(x[i] < y[i]){

			tmp = y[i];
			y[i] = x[i];
			x[i] = tmp;
			

		}
		if(y[i] < z[i]){

			tmp = z[i];
			z[i] = y[i];
			y[i] = tmp;
			

		}if(x[i] < y[i]){

			tmp = y[i];
			y[i] = x[i];
			x[i] = tmp;
			

		}
		if(y[i] < z[i]){

			tmp = z[i];
			z[i] = y[i];
			y[i] = tmp;
			

		}
		
		
		
		
		ya[i] = y[i] * y[i];
		xa[i] = x[i] * x[i];
		za[i] = z[i] * z[i];
		aaa = ya[i] + za[i];

		if (aaa == xa[i]) aa[i] = 1;
		else aa[i] = 0;	

		

		



	}

	

	for (i = 0; i < n; i++) {

		if(aa[i] == 0)printf("NO\n");
		if(aa[i] == 1)printf("YES\n");

		


	}



	return 0;





}