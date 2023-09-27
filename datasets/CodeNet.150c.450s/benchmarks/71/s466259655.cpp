#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string> 
#include <vector> 
using namespace std;

int main(){
//old
		/* 2014 ??????1
		int a[2],ans;
		cin >> a[0] >> a[1];
		ans = a[0] * a[1];
		cout << ans << endl;
		*/
		/* 2014 ??????2
		int a[6],ans = 0;
		cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
		if(a[0] + a[1] * 5 + a[2] * 10 + a[3] * 50 + a[4] * 100 + a[5] * 500 >= 1000) ans = 1;
		cout << ans << endl;
		*/
		/* 2014 ??????3
		int a,i = 0;
		cin >> a;
		int b[a],c[a],ans[a];
		while(a > i){
			cin >> b[i] >> c[i];
			ans[i] =  b[i] % c[i];
			if(ans[i] == 0) ans[i] = c[i];
			i++;
		}
		i = 0;
		while(a > i){
		cout << ans[i] << endl;
		i++;
		}
		*/
		/* 2014 ??????4
		int a[2],i = 1;
		cin >> a[0];
		int n[a[0]],m[a[0]];
		while (a[0] >= i){
			cin >> n[i] >> m[i];
			i++;
		}
		i = 1;
		cin >> a[1];
		int o[a[1]],p[a[1]];
		while (a[1] >= i){
			cin >> o[i] >> p[i];
			i++;
		}
		i = 1;
		int ii,c,aa;
		aa = a[0] + a[1];
		int ans[aa][2],hh[aa],mm[aa],chk,count = 1;
		while(aa >= i){
			ii = 1;
			chk = 1;
			if(a[0] >= i){
				while(i - 1 >= ii){
					if(n[i] == hh[ii] and m[i] == mm[ii]){
						chk = 0;
					}
					ii++;
				}
				if(chk == 1){ 
					hh[count] = n[i];
					mm[count] = m[i];
					count++;
				}
			}else{
				while(i - 1 >= ii){
					if(o[i - a[0]] == hh[ii] and p[i - a[0]] == mm[ii]){
						chk = 0;
					}
					ii++;
				}
				if(chk == 1){ 
					hh[count] = o[i - a[0]];
					mm[count] = p[i - a[0]];
					count++;
				}		

			}
			i++;
		}
		aa = count - 1;
		i = 1;
		while(aa >= i){
			ii = 1;
			c = 1;
				while(aa >= ii){
						if(hh[i] > hh[ii] or hh[i] == hh[ii] and mm[i] > mm[ii] and i != ii){
							c++;
						}
				ii++;
				}
			ans[c][0] = hh[i];
			ans[c][1] = mm[i];
		 i++;
		}
		i = 1;
		while(aa >= i){
			if(aa == i){
				if(ans[i][1] < 10){
					cout << ans[i][0] << ":" << "0" << ans[i][1] << endl;;
				}else{
					cout << ans[i][0] << ":" << ans[i][1] << endl;;
				}

			}else{
				if(ans[i][1] < 10){
					cout << ans[i][0] << ":" << "0" << ans[i][1] << " ";
				}else{
					cout << ans[i][0] << ":" << ans[i][1] << " ";
				}
			}
			i++;
		}
		//????????°???
		int n,i,ans = 100000,a,risi[2];
		cin >> n;
		for(i = 1;n >= i;i++){
			risi[0] =  ans * 0.05;
			risi[1] = risi[0];
			while(risi[1] >= 1000){risi[1] = risi[1] - 1000;}
				if(risi[1] > 0){risi[0] = risi[0] - risi[1] + 1000;}
			ans = ans + risi[0];
		}
		cout << ans << endl;
		*/
//old

	int in,i[4];
	while(cin >> in){
	int ans = 0;
	for(i[0] = 0;9 >= i[0];i[0]++){
		//if(0 > in - i[0]) break;
		//cout << "[1]" <<  i[0] << endl;				
		for(i[1] = 0;9 >= i[1];i[1]++){
			//if(0 > in - ( i[0] + i[1] ) ) break;
			//cout << "[2]" << i[1] << endl;
			for(i[2] = 0;9 >= i[2];i[2]++){
				//if(0 > in - ( i[0] + i[1] + i[2] ) ) break;
				//cout << "[3]" << i[2] << endl;
				for(i[3] = 0;9 >= i[3];i[3]++){
					//if(0 > in - ( i[0] + i[1] + i[2] + i[3] ) ) break;
					//cout << "[4]" << i[3] << endl;
					//cout << "[1] " << i[0] << "  [2] " << i[1] << "  [3] " << i[2] << "  [4] " << i[3] << endl; 
					if(i[0] + i[1] + i[2] + i[3] == in){
					//cout << "[1] " << i[0] << "  [2] " << i[1] << "  [3] " << i[2] << "  [4] " << i[3] << endl; 
					ans++;
					}
				}	
			}
		}
	}
	cout << ans << endl;	
	}

	/*int in;
	cin >> in;
	int a[in];
	for(int i = 1;in >= i;i++){
		cout << "[IN] [" << i << "] ";
		cin >> a[i];
	}
	for(int i = 1;in >= i;i++){cout << "[OUT] ["<< i << "] " <<  a[i] << endl;}*/
}