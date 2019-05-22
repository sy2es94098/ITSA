#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
    char str[10000] = {0}, strc[10000] = {0}, tmp;
    int left, right;
    size_t len;
    cin >> str;
    len = strlen(str);
    for(int i = 0 ; i < 9000 ; i++){
        if(str[i] == 'a'){
            right = len - 1;
            left = i + 1 ;
            for( ; right > left ; ){
                tmp = str[left];
                str[left]  = str[right];
                str[right] = tmp;
                left++;
                right--;
            }

        }
        if(str[i] == 'b'){
        right = len;
        left = i + 1;
        for( ; left != len ; ){
            str[right] = str[left];
            left++;
            right++;
        }
        }
        if(str[i] == 'c'){
            left = i + 1;
            right = left + 2;
        for( int j = 0 ; j < 9000 ; j++ ){
            str[left] = 0;
            strc[j] = str[right];
            right++;
            left++;
        }
        strcat(str, strc);
        }
            





    
    }                
    for(int i = 0 ; i < 10000 ; i++){
        cout << str[i] ;
    }
    cout << endl;
    return 0;
}
