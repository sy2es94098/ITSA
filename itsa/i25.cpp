#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    string str, tmp;
    int n, sum = 0;
    cin >> n;
    cin.ignore();
    for( int j = 0 ; j < n ; j++ )
    {
        getline(cin, str);
        for( int i = 0 ; i < str.size() ; i++ )
            sum += (int)str[i];
            cout << sum << endl;
            sum = 0;
    }
}
