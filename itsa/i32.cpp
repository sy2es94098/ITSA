#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    string str;
    char done;
    int asc, num;
    getline(cin, str);
    if(str.size() > 100)
        return 0;
    cin >> num;

    for(int i = 0; i < str.size(); i++){
        asc =(int)str[i];
        if((asc >= 65 && asc <= 90) || (asc >= 97 && asc <= 122) || (asc >= 48 && asc <= 57)){
            asc += num;
            if(asc > 90 && asc < 97)
                asc = asc - 90 + 64 ;
            else if(asc > 122)
                asc = asc - 122 + 96 ;
            else if(asc > 57 && asc < 90)
                asc -= 10 ;
            done = (char)asc;
            cout << done;
            }
        else
            cout << str[i];
    }
    cout << endl;
}


