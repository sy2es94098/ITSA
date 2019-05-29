#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
    float degree, summer, non;
    cin >> degree;
    if( degree <= 120)
    {
        summer = 2.1*degree;
        non = 2.1*degree;
    }
    else{
        if( degree > 120 && degree <= 330 )
        {
            summer = 120 * 2.1 + (degree - 120) * 3.02;
            non = 120 * 2.1 + (degree - 120) * 2.68;
        }
        else{
            if( degree > 331 && degree <= 500 )
            {
                summer = 120 * 2.1 + 210 * 3.02 + (degree - 330) * 4.39;
                non = 120 * 2.1 + 210 * 2.68 + (degree - 330) * 3.610;
            }
                else{
                    if( degree > 500 && degree <= 700 )
                    {
                        summer = 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + (degree - 500) * 4.97;
                        non = 120 * 2.1 + 210 * 2.68 + 170 * 3.610 + (degree - 500) * 4.01;
                    }
                    else{
                        summer = 120 * 2.1 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + ( degree - 700 ) * 5.63;
                        non = 120 * 2.1 + 210 * 2.68 + 170 * 3.610 + 200 * 4.01 + ( degree - 700 ) * 4.50;
                    }
                }
        }
    }
    cout << fixed << setprecision(2) << "Summer months:" << summer << endl << "Non-Summer months:" << non <<endl;
}




