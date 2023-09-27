#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<sstream>
#include<iomanip>

using namespace std;

#define INF 999999999

string revstr(string st){
	/*
	cout << st << endl;
	*/
	
	for(int i=0;i < st.size() / 2; i++){
		swap( st[i], st[st.size() - i - 1]);
	}
	return st;
}

int main(){
	int ans, m, i, j, k,q;
	string in, s;
	vector<string> mat;
	
	cin >> m;
	for(i = 0; i < m; i++){
		ans = 0;
		mat.clear();
		
		cin >> in;
		/*
		cout << in << endl;
		*/
		
		for(j=1; j<in.size();j++){
			for(q=0;q<8;q++){
				/*
				cout << in.substr(0,j) << " " << in.substr(j) << endl;
				*/
				if(q==0)s = in.substr(0,j) + in.substr(j);
				else if(q==1)s = revstr(in.substr(0,j)) + in.substr(j);
				else if(q==2)s = in.substr(0,j) + revstr(in.substr(j));
				else if(q==3)s = revstr(in.substr(0,j)) + revstr(in.substr(j));
				else if(q==4)s = in.substr(j) + in.substr(0,j);
				else if(q==5)s = revstr(in.substr(j)) + in.substr(0,j);
				else if(q==6)s = in.substr(j) + revstr(in.substr(0,j));
				else if(q==7)s = revstr(in.substr(j)) + revstr(in.substr(0,j));
				
				/*
				cout << q << " " << s << endl;
				*/
				
				int flag = 0;
				for(k=0;k<ans;k++){
					if(s == mat[k]){
						flag++;
						break;
					}
				}
				if(!flag){
					mat.push_back(s);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}