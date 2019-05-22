#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
    float data[10], max, min;
    for( int i = 0 ; i < 10 ; i++)
        cin >> data[i];
    max = data[0];
    min = data[0];
    for( int i = 1 ; i < 10 ; i++)
    {
        if(data[i] > max)
            max = data[i];
        if(data[i] < min)
            min = data[i];
    }
    cout << "maximum:" << fixed << setprecision(2) << max << endl << "minimum:" << min <<endl;
    return 0;
}
        


