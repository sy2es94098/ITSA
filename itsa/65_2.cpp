#include<cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double n, sum = 0;
    cin >> n;
    for( double i = 0 ; i < n ; i++ ){
        sum += 4 * (pow( -1, i ) / (( 2 * i) + 1 ));
    }
    cout << fixed << setprecision(5) << sum << endl;
    }

