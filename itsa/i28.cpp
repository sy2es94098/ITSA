#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main(){
    int N;
    string priz[3];
    for( int i = 0 ; i < 4 ; i++ )
        getline(cin,priz[i]);
    cin >> N;
    string data[N];
    for( int i = 0 ; i < N ; i++ )
        getline(cin,data[i]);
    for( int i = 0 ; i < N ; i++ ){
        for( int j = 0 ; j < 4 ; j++){
            for( int k = 3 ; k < 8 ; k++){
                if(priz[j][k] == data[i][k])

        
}


