#include<iostream>
#include<cstdlib>
#include<sstream>
using namespace std;
int main(){
    stringstream ss;
    int data[10];
    char str[10];
    for( int i = 0 ; i < 10 ; i++ )
        cin >> str[i];
    for( int i = 0 ; i < 10 ; i++ )
    {
        if( str[i] == 'X')
            data[i] = 10;
        else
        {
            ss << str[i];
            ss >> data[i];
            ss.clear();
        }
    }
    for( int i = 1 ; i < 10 ; i++ )
    {
        int a, b;
        a = data[i-1];
        b = data[i];
        data[i] = a + b ;
    }
    for( int i = 1 ; i < 10 ; i++ )
    {
        int a, b;
        a = data[i-1];
        b = data[i];
        data[i] = a + b ;
    }
    if(data[9] % 11 == 0)
        cout << "YES";
    else
        cout << "NO" << endl;
    return 0;
}

