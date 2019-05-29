#include<iostream>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float data[2], std;
    while(cin >> data[0] >> data[1])
    {
        if(data[1] == 1)
            std = ( data[0] - 80) * 0.7;
        else
            std = ( data[0] - 70) * 0.6;
    cout << fixed << setprecision(1) << std << endl;
    }

}
