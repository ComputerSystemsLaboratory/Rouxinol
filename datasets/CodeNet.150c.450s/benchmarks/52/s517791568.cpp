#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string> 
#include <vector> 
using namespace std;

int main(){
/*??¢??????????????¨40????????????
	string in[100],n;
	int i = 1,stop = 0,si;
	while(stop == 0){
		cin >> n;
		if(n == "#"){stop = 1;}else{in[i] = n;i++;}						
	}
	string ans[i];
	for(int ii = 1;i > ii;ii++){
		ans[ii] = "A";
		si = in[ii].size();
		for(int iii = 0;si > iii;iii++){
			string c = in[ii].substr(iii,1);
			      if(ans[ii] == "A"){
				if(c == "1"){
					ans[ii] = "Y";
				}else if(c == "0"){
					ans[ii] = "X";
				}
			}else if(ans[ii] == "X"){
				if(c == "1"){
					ans[ii] = "Z";
				}else if(c == "0"){
					ans[ii] = "No";
				}
			}else if(ans[ii] == "Y"){
				if(c == "1"){
					ans[ii] = "No";
				}else if(c == "0"){
					ans[ii] = "X";
				}
			}else if(ans[ii] == "Z"){
				if(c == "1"){
					ans[ii] = "B";
				}else if(c == "0"){
					ans[ii] = "W";
				}
			}else if(ans[ii] == "W"){
				if(c == "1"){
					ans[ii] = "Y";
				}else if(c == "0"){
					ans[ii] = "B";
				}
			}else if(ans[ii] == "B"){
				if(c == "1"){
					ans[ii] = "X";
				}else if(c == "0"){
					ans[ii] = "Y";
				}
			}	
			if(iii == si - 1 and ans[ii] == "B"){ans[ii] = "Yes";}
			if(iii == si - 1){
				if(ans[ii] != "Yes"){ans[ii] = "No";}
				cout << ans[ii] << endl;
			}											
		}
	}*/
	/*	int	X,Y[3],P,ANS[2];
		cin >> X >> Y[1] >> Y[2] >> Y[3] >> P;
		ANS[1] = P * X;
		cout << "[AiUEO]" << P << " " << X << endl;
		if(P > Y[2]){
			ANS[2] = Y[1] + ( Y[3] * ( P - Y[2] ) );
		}else{
			ANS[2] = Y[1];
		}
		if(ANS[1] > ANS[2]){
			cout << ANS[2] << endl;
			cout << ANS[1] << endl;
		}else{
			cout << ANS[2] << endl;
		}*/
//
    int num, top;
    int train[1024];
    int i;

    top = 0;

    while (scanf("%d", &num) != EOF){
        if (num == 0){
            printf("%d\n", train[top - 1]);
            train[top - 1] = 0;
            top--;
        }
        else { 
            train[top] = num;
            top++;
        }
    }

}