#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct T {
	unsigned char a,b;
};
T array[1000000];
int main(){
    int n,m,i,j;
    unsigned char a,b;
    string ca,cb;
    bool flag;
    while(cin >> n && n){
        flag = true;
        string out;
        memset(array,0,sizeof(array));
        for(i = 0;i < n;i++){
            cin >> a >> b;
            array[i].a = a;
            array[i].b = b;
        }
        cin >> m;
        for(i = 0;i < m;i++){
            cin >> a;
			ca = a;
            for(j = 0;j < n;j++){
            	cb = array[j].a;
            	if(ca == cb){
            		flag = false;
					break;
            	}
            }
            if(flag){
            	out += a;
            }
            else {
            	out += array[j].b;
            }
            flag = true;
        }
        cout << out << endl;
    }
    return 0;
}