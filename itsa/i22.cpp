#include<iostream>
using namespace std;
int main(){
    int data[9], sumO, sumX;
    for(int i = 0 ; i < 9 ; ++i)
        cin >> data[i];
    if(data[0] == data[1] && data[1] == data[2])
        cout << "True" << endl;
    else if(data[3] == data[4] && data[4] == data[5])
        cout << "True" << endl;
    else if(data[6] == data[7] && data[7] == data[8])
        cout << "True" << endl;
    else if(data[0] == data[3] && data[3] == data[6])
        cout << "True" << endl;
    else if(data[1] == data[4] && data[4] == data[7])
        cout << "True" << endl;
    else if(data[2] == data[5] && data[5] == data[8])
        cout << "True" << endl;
    else if(data[0] == data[4] && data[4] == data[8])
        cout << "True" << endl;
    else if(data[2] == data[4] && data[4] == data[6])
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

