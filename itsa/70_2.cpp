#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{

    float a, i, b, k, suma = 0, sumb = 0, sum;
    for(i = 0; i < 10000000 ; i += 2 )
    {
        a = 1/(2*i+1);
        suma += a;
    }

    for(float j = 1; j < 10000001 ; j += 2)
    {
        b = 1/(2*j+1);
        sumb += b;
    }
    sum = suma - sumb;
    sum *= 4;
    cout << setprecision(20) << sum;

}
