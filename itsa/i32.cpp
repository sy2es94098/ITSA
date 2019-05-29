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
        if(asc >= 65 && asc <= 90){
            asc += num;
            if(asc > 90)
                asc -= 26;
        }
        else if(asc >= 97 && asc <= 122){
            asc += num;
            if(asc > 122)
                asc -= 26 ;
        }
        else if(asc > 48 && asc < 57){
            asc += num;
            if(asc > 57)
                asc -= 10 ;
        }
        else
            cout << str[i];
    done = (char)asc;
    cout << done;

    }

    cout << endl;
}


