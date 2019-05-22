#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;
int main(){
    int i, sum, space = 0;
    string str;
    stringstream ss;
    getline(cin, str);
    str=str.insert(str.size(), " ");
    for( int i = 0 ; i < str.size() ; i++){
        if(str[i] == ' ')
            space++;
    }
    int data[space];
    for( int i = 0 ; i < space ; i++){
        ss.clear();
        ss << str;
        ss >> data[i];
        sum += data[i];
    }
    cout << "Size: " << space << endl;
    cout << "Average: " << fixed << setprecision(3) << (float)sum/(float)space << endl;
}

    

