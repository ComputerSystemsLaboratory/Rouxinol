#include <bits/stdc++.h>
using namespace std;

class dice{
public:
	int init_label[6];
    int label[6];
    int tmp1, tmp2;

	void setnumber(){
		for(int i=0; i<6; i++)
			cin >> init_label[i];
    }

    void check(int over, int front){
    	if(over == label[0]){
    		if(front == label[1]){
    			cout << label[2] << endl;
    		}
    		else if(front == label[2]){
    			cout << label[4] << endl;
    		}
    		else if(front == label[4]){
    			cout << label[3] << endl;
    		}
    		else if(front == label[3]){
    			cout << label[1] << endl;
    		}
    	}
    }

    void rotation(string sign){
            tmp1 = label[0];
            tmp2 = label[5];
            if(sign == "N"){
                label[0] = label[1];
                label[5] = label[4];
                label[1] = tmp2;
                label[4] = tmp1;
            }
            if(sign == "S"){
                label[0] = label[4];
                label[5] = label[1];
                label[4] = tmp2;
                label[1] = tmp1;
            }
            if(sign == "W"){
                label[0] = label[2];
                label[5] = label[3];
                label[2] = tmp2;
                label[3] = tmp1;
            }
            if(sign == "E"){
                label[0] = label[3];
                label[5] = label[2];
                label[3] = tmp2;
                label[2] = tmp1;
            }
            if(sign == "NN"){
            	label[0] = tmp2;
            	label[5] = tmp1;
            	int tmp3 = label[4];
            	label[4] = label[1];
            	label[1] = tmp3;
            }
        }

    void initialization(void){
    	for(int i=0; i<6; i++){
    		label[i] = init_label[i];
    	}
    }
};

int main(){
	dice d;
	d.setnumber();
	int n; cin >> n;
	string rot_info[6] = {"","N","W","E","S","NN"};

	for(int i=0; i<n; i++){
		int over,front; cin >> over >> front;
		for(int j=0; j<6; j++){
			d.initialization();
			d.rotation(rot_info[j]);
			d.check(over,front);
		}
	}
	return 0;
}