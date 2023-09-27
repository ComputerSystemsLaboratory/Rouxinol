#include <iostream>
#include <string>

using namespace std;

int main()
{
	string qn,str,p,answer;
	int q,a,b,y,f;
	cin >> str >> q;
	for (int i = 0 ; i < q ; i++ ){
		cin >> qn;
		if (qn == "replace"){
			cin >> a >> b >> p;
			for (int j = 0 ; j < b - a + 1 ; j++ ){
				str[a + j] = p[j]; 
			}
		} 

		if (qn == "reverse"){
			cin >> a >> b;
				for (int x = a ; x < b ; x++ ){
					y = b;
					answer[x] = str[x];
					
				    str[x] = str[y];
				    str[y] = answer[x];
					b--;
                   
				}
		}
		
		if (qn == "print"){
			cin >> a >> b;
			cout << str.substr(a,b - a + 1) << endl;
		}
	}

 return 0;
}