#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    string s;
    for (int i=0;i<n;i++) {
        cin>>s;
        int j=0;
        while (j<s.size()) {
            int count=0;
            if (s.at(j)=='1') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==6) {
                        count-=5;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<".";
                } else if (count==2) {
                    cout<<",";
                } else if (count==3) {
                    cout<<"!";
                } else if (count==4) {
                    cout<<"?";
                } else if (count==5) {
                    cout<<" ";
                }
            } else if (s.at(j)=='2') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==4) {
                        count-=3;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"a";
                } else if (count==2) {
                    cout<<"b";
                } else if (count==3) {
                    cout<<"c";
                }
            } else if (s.at(j)=='3') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==4) {
                        count-=3;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"d";
                } else if (count==2) {
                    cout<<"e";
                } else if (count==3) {
                    cout<<"f";
                }
            } else if (s.at(j)=='4') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==4) {
                        count-=3;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"g";
                } else if (count==2) {
                    cout<<"h";
                } else if (count==3) {
                    cout<<"i";
                }
            } else if (s.at(j)=='5') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==4) {
                        count-=3;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"j";
                } else if (count==2) {
                    cout<<"k";
                } else if (count==3) {
                    cout<<"l";
                }
            } else if (s.at(j)=='6') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==4) {
                        count-=3;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"m";
                } else if (count==2) {
                    cout<<"n";
                } else if (count==3) {
                    cout<<"o";
                }
            } else if (s.at(j)=='7') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==5) {
                        count-=4;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"p";
                } else if (count==2) {
                    cout<<"q";
                } else if (count==3) {
                    cout<<"r";
                } else if (count==4) {
                    cout<<"s";
                }
            } else if (s.at(j)=='8') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==4) {
                        count-=3;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"t";
                } else if (count==2) {
                    cout<<"u";
                } else if (count==3) {
                    cout<<"v";
                }
            } else if (s.at(j)=='9') {
                while (s.at(j)!='0') {
                    count++;
                    if (count==5) {
                        count-=4;
                    }
                    j++;
                }
                if (count==1) {
                    cout<<"w";
                } else if (count==2) {
                    cout<<"x";
                } else if (count==3) {
                    cout<<"y";
                } else if (count==4) {
                    cout<<"z";
                }
            }
            j++;
        }
        cout<<endl;
    }
}
