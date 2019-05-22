#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i,j,k,n,m;
    cin >> n >> m;
    int a[n*m];
    for(k = 0; k < n*m; k++){//function to store data in array
        cin >> a[k];
    }
    for(i = 0 ; i < n ; i++)//print array in trans form
    {
        for(j = 0 ; j < m; j++){
            int z = i+ n*j;
            cout << a[z]<<' ';
        }
        cout<< endl;
    }
}
