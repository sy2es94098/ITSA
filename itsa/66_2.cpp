#include<iostream>
#include<sstream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    string str, op;
    stringstream ss;
    int num[2], c = 0;
    cin >> str;
    str = str.insert(str.size(), " ");
    for( int i = 0 ; i < str.size() ; i++ )
    {
        if( str[i] >= 48 && str[i] <= 57 ){
            ss << str[i];
            ss >> num[c];
            ss.clear();
            c++;
        }
        if( str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            op = str[i];
        }

    }
    if(op == "+")
            cout << fixed << setprecision(1) << (float)num[1] - num[0] << endl;
    if(op == "*")
        cout << fixed << setprecision(1) << (float)num[1] / num[0] << endl;
    if(op == "-"){
        if(str[0] == 'x')
            cout << fixed << setprecision(1) << (float)num[1] + num[0] << endl;
        else
            cout << fixed << setprecision(1) << (float)num[0] - num[1] << endl;
    }
    if(op == "/"){
        if(str[0] == 'x'){
            if(num[0] == 0)
                cout << "no solution" << endl;
            else
                cout << fixed << setprecision(1) << (float)num[1] * num[0] << endl;
        }
        else{
            if(num[0] == 0){
                if( num[1] == 0 )
                    cout << "infinite solution" << endl;
                else
                    cout << "no solution" << endl;
            }
            else
                cout << fixed << setprecision(1) << (float)num[0] / num[1] << endl;
        }
    }
}

