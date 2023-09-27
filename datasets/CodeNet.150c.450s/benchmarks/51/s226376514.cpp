    #include <iostream>
    #include <vector>
    using namespace std;
     
    int main() {
    // your code goes here
    vector<int> stu(30,1);// stu[n-1] <=> 生徒nは未提出
    for(int i=0;i<30;i++){
    int temp;
    cin >> temp;
    stu.at(temp-1)=0;
    }
    for(int n=1;n<=30;n++){
    if(stu.at(n-1)==1)
    cout << n << endl;
    }
    return 0;
    }