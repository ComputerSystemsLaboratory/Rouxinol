#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;


int main(){

	int n;
	int year, month, date;
	int ans;

	cin >> n;

	for(int set=0 ; set<n ; set++){
		ans=0;
		cin >> year >> month >> date;

		for(int i=year ; i<1000 ; i++){
			if(i == year){

				for(int j=month ; j<=10 ; j++){

					if(j == month){
						if(i%3==0 || j%2==1){
							for(int k=date ; k<=20 ; k++){
								ans++;
							}
						}else{
							for(int k=date ; k<20 ; k++){
								ans++;
							}
						}
					}else{
						if(i%3==0 || j%2==1){
							for(int k=1 ; k<=20 ; k++){
								ans++;
							}
						}else{
							for(int k=1 ; k<20 ; k++){
								ans++;
							}
						}
					}
				}

			}else{
				for(int j=1 ; j<=10 ; j++){

					if(i%3==0 || j%2==1){
						for(int k=1 ; k<=20 ; k++){
							ans++;
						}
					}else{
						for(int k=1; k<20 ; k++){
							ans++;
						}
					}
				}
			}

		}
		cout << ans << endl;


	}
	return 0;
}