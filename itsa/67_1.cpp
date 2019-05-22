#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int i, j, k, big, end = 0, num = 0, num2 = 0, right, data[4] = {0}, repeat[4] = {0}, sum[4] = {0} ;
    for( i = 0 ; i < 4 ; i++ )
        cin >> data[i];
    for( i = 0 ; i < 3 ; i++ )
    {
        for( j = i + 1 ; j < 4 ; j++ )
        {
            for( k = 0 ; k < num2 + 1 ; k++)
            {
            
                if(data[i] == data[j] && data[j] != repeat[k])
                {
                    repeat[num] = data[i];
                    num2 = num;
                    num++;
                }
            }

        }
    }
    for( i = 0 ; i < num ; i++ )
    {
        for( j = 0 ; j < 4 ; j++ )
        {   
            if( repeat[i] == data[j])
                sum[i] += 1; 
        }
    }
    if( sum[0] == 0)
        cout <<"R" << endl;
    if( sum[0] == 2 && sum[1] == 0){
        for( i = 0; i < 4 ; i++ )
             end += data[i];
        end = end - 2*repeat[0];
        cout << end <<endl;
    }
    if( sum[0] == 2 && sum[1] == 2){
        if(repeat[0] > repeat[1])
            big = repeat[0];
        else
            big = repeat[1];
        cout << big*2 << endl;
    }
    if( sum[0] == 3)
        cout <<"R" << endl;
    if( sum[0] == 4)
        cout <<"WIN" << endl;
    return 0;
}

                   




