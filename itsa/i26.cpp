#include<iostream>  
#include<cstdlib>  
#include<math.h>  
#include<string>  
#include<sstream>  
using namespace std;  
int main(){  
   
     int tmp, N, c = 0;  
     cin >> N;  
     int sum[N] = {0}, num[N] = {0};  
     string str;  
     stringstream ss;  
     for( int i = 0 ; i < N ; ++i )  
     {  
         cin >> str;  
         ss << str;  
         ss >> num[c];  
         ss.clear();  
         for( int j = 0; j < str.size(); ++j )  
         {  
             ss << str[j];  
             ss >> tmp;  
             sum[c] += tmp;  
             ss.clear();  
         }  
         c++;  
     }  
     int insert, insert2, move;  
     for( int next = 1; next < N; ++next)  
     {  
         insert = sum[next];  
         insert2 = num[next];  
         move = next;  
         while( (move > 0) && (sum[move-1] >= insert))  
         {  
             if((sum[move-1] == insert) && ( num[move-1] < insert2))  
             {  
                 break;  
             }  
             sum[move] = sum[move-1];  
             num[move] = num[move-1];  
             --move;  
         }  
         sum[move] = insert;  
         num[move] = insert2;  
     }  
     for( int i = 0 ; i < N ; ++i)  
     {  
         cout << num[i] ;  
         if(i< N-1)  
            cout << " ";  
   
     }  
     cout << endl;  
   
 }  

