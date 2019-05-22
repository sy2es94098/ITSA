#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
void f(int n)
{ 
    int i, j, N = 2, v[9] = {0};
   for(i=0; i<=1; i++){
     v[N-n] = i;
     if(n > 1) f(n-1);
     else {for(j=0; j<N; j++)cout << v[j];
     cout << endl; }
 }
}

int main(){
    int n ,i, c;
    int count;
    cin >> n ;

  /*  count = pow(2, n);
    for( i = 0; i < n; i++){
        for( ; ; count >>= 1){
            if( count & i == 0) 
                cout << '0';
            else 
                cout << '1';
        if(count == 0)
            break;
        }
        cout << endl;
    }*/
     f(n);
    return 0;
}


