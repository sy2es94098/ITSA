#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main(){
    int tmp, tmp2, A = 0, B = 0, answer[4], guess[4];
    cin >> tmp;
    for( int i = 0 ; i < 4 ; i++ ){
        answer[i] = (int)(tmp/pow(10,3-i));
        tmp2 = pow(10,3-i);
        tmp = tmp % tmp2;
    }
    for(;;)
    {
        cin >> tmp;
        if( tmp == 0)
            return 0 ;
        for( int i = 0 ; i < 4 ; i++ ){
            guess[i] = (int)(tmp/pow(10,3-i));
            tmp2 = pow(10,3-i);
            tmp = tmp % tmp2;
        }
        for( int i = 0 ; i < 4 ; i++ ){
            if( answer[i] == guess[i] )
                A++;
        }
        for( int i = 0 ; i < 4 ; i++ ){
            for( int j = 0 ; j < 4 ; j++ ){
                if( answer[i] == guess[j] && i != j ){
                   
                    B++;
                    break;
                }
            }
        }
        cout << A << 'A' << B << 'B' << endl;
        A = 0;
        B = 0;
    }
}
