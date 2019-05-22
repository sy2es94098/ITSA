#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int grade[3], N, low, high ;
    cin >> N;

    for( int i = 0 ; i < N ; i++ )
    {
        low = 0;
        high = 0;
        for( int j = 0 ; j < 3 ; j++)
        {
            cin >> grade[j];
            if( grade[j] < 60 )
                low++;
            if( grade[j] >= 80 )
                high++;

        }
        

        if( grade[0] >= 60 && grade[1] >= 60 && grade[2] >= 60 )
            cout << 'P' << endl;
        else{
            if( low == 1 && grade[0] + grade[1] + grade[2] >= 220)
                cout << 'P' << endl;
            else{
                if(low == 1 && grade[0] + grade[1] + grade[2] <= 220)
                    cout << 'M' << endl;
                else{
                    if( low <= 2 && high == 1)
                        cout << 'M' << endl;
                    else
                        cout << 'F' << endl;
                }
            }
        }
    }
}
            
            

        
