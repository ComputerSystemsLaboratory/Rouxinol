#include<iostream>
using namespace std;

char set1[5] = {'.',',','!','?',' '};
char set2[3] = {'a','b','c'};
char set3[3] = {'d','e','f'};
char set4[3] = {'g','h','i'};
char set5[3] = {'j','k','l'};
char set6[3] = {'m','n','o'};
char set7[4] = {'p','q','r','s'};
char set8[3] = {'t','u','v'};
char set9[4] = {'w','x','y','z'};

char slove(char key, int count){
	switch(key){
		case '1':
			count%=5;
			return set1[count];
			break;
			
		case '2':
			count%=3;
			return set2[count];
			break;
			
		case '3':
			count%=3;
			return set3[count];
			break;
			
		case '4':
			count%=3;
			return set4[count];
			break;
			
		case '5':
			count%=3;
			return set5[count];
			break;
			
		case '6':
			count%=3;
			return set6[count];
			break;
			
		case '7':
			count%=4;
			return set7[count];
			break;
			
		case '8':
			count%=3;
			return set8[count];
			break;
			
		case '9':
			count%=4;
			return set9[count];
			break;
			
		default:
			cout << "test" << endl;
			return 0;
	}
}


int main(){
	int n;
	while(cin>>n){
		string s;
		for(int i=0; i<n; i++){
			cin >> s;
			string ans="";
			for(string::size_type j=0; j<s.size(); j++){
				int count=0;
				char c=s[j];
				while(c!='0'){
					count++;
					c=s[j+count];
				}
				if(count!=0)
					ans += slove(s[j+count-1], count-1);
				

				j+=count;
			}
			cout << ans << endl;
		}
		
	}
	return 0;
}