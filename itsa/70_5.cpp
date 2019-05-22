#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int i, n, c, Max, j = 0, l = 0, m = 0, sum = 0, max[10000] = {0}, a[10000], positive[10000] = {0};
    cin >> n;
    for( i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        l++;
        if(a[i] > 0 ){
            positive[j] = i;
            j++;
        }

    }

    for( int k = 0 ; k < j ; k++)
    {
        cout << positive[k] << endl;
        i = positive[k];
        sum=0;
    for(i ; i < n ; i++)
    {
        sum += a[i];
        if (sum > max[m]){
          max[m] = sum;
        }
    }
    m++;
    }   
    Max=max[0];
    for( i = 0 ; i < m ; i++)
    {
        cout << max[i] ;
        if(max[i+1] > max[i])
            Max = max[i+1];
    }
    cout << Max <<endl;
    return 0 ;
}

