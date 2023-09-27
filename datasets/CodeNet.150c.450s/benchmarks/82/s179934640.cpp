#include <iostream>
#include <string>
using namespace std;
 
class Dice{
private:
    int d[6];
public:
    Dice(int n0, int n1, int n2, int n3, int n4, int n5){ //Constructor
        d[0]=n0; d[1]=n1; d[2]=n2; d[3]=n3; d[4]=n4; d[5]=n5;
    }
    int get_top(){
        return d[0];
    }
    int get_front(){
        return d[1];
    }
    int get_right(){
        return d[2];
    }
    int get_left(){
        return d[3];
    }
    int get_back(){
        return d[4];
    }
    int get_bottom(){
        return d[5];
    }
    void Roll(string op){
        for(unsigned int i=0;i<op.length();i++){
            switch(op[i]){
                case 'N': RollN(); break;
                case 'E': RollE(); break;
                case 'W': RollW(); break;
                case 'S': RollS(); break;
            }
        }
    }
    void RollN(){
        int tmp=d[0];
        d[0]=d[1];
        d[1]=d[5];
        d[5]=d[4];
        d[4]=tmp;
    }
    void RollE(){
        int tmp=d[0];
        d[0]=d[3];
        d[3]=d[5];
        d[5]=d[2];
        d[2]=tmp;
    }
    void RollW(){
        int tmp=d[0];
        d[0]=d[2];
        d[2]=d[5];
        d[5]=d[3];
        d[3]=tmp;
    }
    void RollS(){
        int tmp=d[0];
        d[0]=d[4];
        d[4]=d[5];
        d[5]=d[1];
        d[1]=tmp;
    }
};
 
int main(){
    int a, b, c, d, e, f, q;
    cin >> a >> b >> c >> d >> e >> f >> q;
    Dice di(a, b, c, d, e, f);
    int top, front;
    for(int i=0;i<q;i++){
    	cin >> top >> front;
    	for(int j=0;j<4;j++){
    		bool flg = false;
    		di.RollE();
    		for(int k=0;k<4;k++){
    			di.RollN();
    			for(int l=0;l<4;l++){
    				di.RollE();
    				if(di.get_top()==top && di.get_front()==front){
    					flg=true; break;
    				}
    			}
    			if(flg) break;
    		}
    		if(flg) break;
    	}
        cout << di.get_right() << endl;
    }

    return 0;
}