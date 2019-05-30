#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n, a1, a2, a3, money, fif, five, one, tmp;
    cin >> n ;
    cin.ignore();
    cin >> a1 ;
    cin.ignore() ;
    cin >> a2 ;
    cin.ignore() ;
    cin >> a3 ;
    if( (a1 * 15 + a2 * 20 + a3 * 30) > n )
    {
        cout << 0 << endl;
        return 0;
    }
    else{
        money = n - ( a1 * 15 + a2 * 20 + a3 * 30 );
        fif = (int)(money / 50);
        tmp = money % 50;
        five = (int)(tmp / 5);
        one = tmp % 5;
    }
    cout << one << ',' << five << ',' << fif << endl;
}



