#include<iostream>
using namespace std;
int main(){
    int same, data[9], startR[3], startC[3], startD[2];
    for( int i = 0 ; i < 9 ; i++)
        cin >> data[i];
    for( int i = 0 ; i < 3 ; i++){
        startR[i] = data[i];
        startC[i] = data[i*3];
    }
    startD[0] = data[0];
    startD[1] = data[2];
    for( int i = 0 ; i < 3 ; i++){
        same = 0 ;
        for( int j = startC[i] ; j < 3 ; j++ ){
            if( startC[i] == data[j] )
                same++;
            if( same == 3){
                cout << "True";
                return 0;
            }
        }
        same = 0 ;
        for( int j = startR[i] ; j < 9 ; j += 3){
            same = 0;
            if( startR[i] == data[j] )
                same++;
            if( same == 3){
                cout << "True";
                return 0;
            }
        }
    }
    same = 0;
    for( int j = startD[0] ; j < 9 ; j += 4 ){
        if( startD[0] == data[j] )
            same++;
        if( same == 3){
            cout << "True";
            return 0;
        }
    }
    same = 0;
    for( int j = startD[1] ; j < 7 ; j += 2 ){
        if( startD[1] == data[j] )
            same++;
        if( same == 3){
            cout << "True";
            return 0;
        }
    }
    cout << "False";
}



