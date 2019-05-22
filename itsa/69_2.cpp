#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int i, j, k, m, size, c = 0, data2[2], a, b, count[26];
    cin >> k;
    char K[k], data1[2], c1;
    cin >> K;

    //for( ; ; ){
        cin >> m ;
        if( m == 0)
            break;
        if( m == 1){
            for(i = 0 ; i < 2 ; i++)
                cin >> data1[i];    
            for(i = 0 ; i < k ; i++){
                if(K[i] == data1[0] || K[i] == data1[1]){
                        cout << i + 1 << ' ';
                }
        }
            cout << endl;
        }
        if( m == 2){
            for(i = 0 ; i < 2 ; i++)
                cin >> data2[i];
            a = data2[0];
            b = data2[1];
            for(i = a ; i < b+1 ; i++ )
                cout << i << ' ';
            cout << endl;
        }
        if( m == 3){
            for(i = 0 ; i < 2 ; i++)
                cin >> data2[i];
            cin >> data1[0];
            a = data2[0]; 
            b = data2[1];
            for(i = a ; i < b+1 ; i++ ){
                count[c] = i+1;
                c++;
            }
            for(i = 0 ; i < k ; i++){
                if(K[i] == data1[0]){


                


            
            
        
   // }


    return 0;
}

