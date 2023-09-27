#include <iostream>
using namespace std;

int main(){
        int n;
        cin>>n;

        while(n--){
                int y,m,d;
                cin>>y>>m>>d;

                int day=0;

                int k;
                switch(y%3){
                        case 1: k=2;
                                        break;
                        case 2: k=1;
                                        break;
                        default:k=0;
                }

                // all big months
                if(y<999){
                        if(k==0){
                                day+=((1000-(y+k))/3)*(10*20);
                        }else{
                                day+=((1000-(y+k))/3+1)*(10*20);
                        }

                        // Except for big months
                        if(k==0){
                                day+=((1000-y-1)-((1000-(y+k))/3))*(5*19+5*20);
                        }else{
                                day+=((1000-y-1)-((1000-(y+k))/3+1))*(5*19+5*20);
                        }
                }

                if(y%3==0){
                        day+=(10-m)*20+(20-d)+1;
                }else{
                        if(m%2==0){
                                day+=((10-m)/2)*19+((10-m)/2)*20+(19-d)+1;
                        }else{
                                day+=(1+(10-m)/2)*19+((10-m)/2)*20+(20-d)+1;
                        }
                }
                cout<<day<<endl;

        }

        return 0;
}