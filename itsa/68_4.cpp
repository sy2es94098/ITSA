#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
#include<math.h>
using namespace std;
int main(){
    stringstream ss;
    string str;
    long S, sum = 0, sum2 = 0,  tmp, total;
    cin >> str;
    S = str.size();
    for( long i = 0 ; i < S ; i++)
    {
        tmp = 1*pow(10,i);
        sum += tmp;
    }
    ss << str;
    ss >> total;
    for( long i = total - sum ; sum2 < total ; i++ ){
        sum2 = i;
        for( long j = 1 ;; j++ ){
            tmp =(long)( i / pow(10, j) );
            sum2 += tmp;
            if(sum2 == total){
                cout << i <<endl;
                exit(0);
            }
            if(tmp == 0)
                break;
        }
    }
    cout << -1 <<endl;
    return 0;
}
