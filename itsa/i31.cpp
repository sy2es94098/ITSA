#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int space;
    stringstream ss;
    string str;
    getline(cin, str);
    str=str.insert(str.size(), " ");
    for( int i = 0 ; i < str.size() ; i++){
        if(str[i] == ' ')
            space++;
    }
    int num, sum, tmp, data[space];
    for( int i = 0 ; i < space ; i++){
        ss.clear();
        ss << str;
        ss >> data[i];
    }
    for( int i = 0 ; i < space ; i++){
        for( int j = i+1 ; j < space ; j++){
            if(data[i] == data[j])
                tmp++;
        }
        if(tmp > sum ){
            sum = tmp;
            num = data[i]; 
        }
    }
    if( sum > space/2)
        cout << num << endl;
    else
        cout << "NO" << endl;
}


