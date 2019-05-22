#include<iostream>
#include<cstdlib>
using namespace std;
void insertionSort( int size, int (&a)[100] )
{
    int insert, move;
    for( int next = 1 ; next < size ; ++next)
    {
        insert = a[next];
        move = next;
        while((move != 0) && (a[move-1] > insert)){
            a[move] = a[move - 1];
            --move;
            }
            a[move] = insert;
    }
}
int main(){
    int n, t, m , k, space = 0;
    cin >> n;
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> t >> m >> k;
        int sum = 0, data[100] = {0};
        for(int j = 0 ; j < k ; j++)
        {
            cin >> data[j];
        }
        insertionSort( k, data );
        for( int j = 0 ; j < m ; ++j){
           sum += data[j]; 
        }
        if(sum > t)
            cout << "Impossible" << endl;
        else{
            sum = 0;
            for( int j = 0 ; j < m ; ++j){
                sum += data[j];
            }
            cout << sum << endl;
        }
    }
}

