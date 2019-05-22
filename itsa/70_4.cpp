#include<iostream>
#include<cstdlib>
#include<stdarg.h>
using namespace std;
int number(int num,...)
{   
    int i;
    va_list ap;
    va_start(ap,num);
    for( i = 0 ; i < num ; i++ )
    {

int universalBigLoop(int a[], int b[], int n, int x)
{
    va_list ap;
    int i, j;
    int x = 0;
    for(i = 0 ; i < n ; i++)
    {
        b[x] = a[i] + a[i+1] + va_arg( ap , int);
        x++;
    }
    universalBigLoop(a[], b[], n, x, )
}


int main (){
    int i,n,m,f[20],o[50];
    cin >> n >> m ;
    for(i = 0; i < n ; i++)
    {
        cin >> f[i];
    }
    for(i = 0; i < m ; i++)
    {
        cin >> o[i];
    }
    for(i = 0; i <

