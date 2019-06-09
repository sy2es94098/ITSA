#include<cstdlib>
#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
#define A 10
using namespace std;
int main(){
    int i, num, number[9];
    string str;
    string numstr;
    stringstream ss;
    cin >> str;
    numstr = numstr.assign(str, 1, 10);
    cout << numstr <<endl;
    ss << numstr;
    ss >> num;
    for(i = 0; i < 9 ; i ++)
    {
        number[i] =(int)( num / pow(10, 8 - i))%10;
    }

    str = str.assign(str,0,1);
     cout << str <<endl;
}
