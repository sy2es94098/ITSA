#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    float r, price = 0;
    int n, p;
    cin >> r >> n >> p;
    for( int i = 0 ; i < n ; i++)
    {
        price += p;
        price *= (1 + r);
    }
    cout << (int)price << endl;
}
