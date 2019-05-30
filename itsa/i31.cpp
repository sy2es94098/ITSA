#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int space;
    string str = "\n";
    while(getline(cin, str))
    {
        space = 0;
        str=str.insert(str.size(), " ");
        for( int i = 0 ; i < str.size() ; i++){
            if(str[i] == ' ')
                space++;
        }
        int num = 0, sum = 0, tmp = 0, data[space] = {0};
        stringstream ss;
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

}


