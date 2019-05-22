#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int month, day;
    cin >> month >> day;
    if(month == 1){
        if(day >= 21)
            cout << "Aquarius";
        else
            cout << "Capricorn";
    }
    if(month == 2){
        if(day >= 19)
            cout << "Pisces";
        else
            cout << "Aquarius";
    }
    if(month == 3){
        if(day >= 21)
            cout << "Aries";
        else
            cout << "Pisces";
    }
    if(month == 4){
        if(day >= 21)
            cout << "Taurus";
        else
            cout << "Aries";
    }
    if(month == 5){
        if(day >= 22)
            cout << "Gemini";
        else
            cout << "Taurus";
    }
    if(month == 6){
        if(day >= 22)
            cout << "Cancer";
        else
            cout << "Gemini";
    }
    if(month == 7){
        if(day >= 23)
            cout << "Leo";
        else
            cout << "Cancer";
    }
    if(month == 8){
        if(day >= 24)
            cout << "Virgo";
        else
            cout << "Leo";
    }
    if(month == 9){
        if(day >= 24)
            cout << "Libra";
        else
            cout << "Virgo";
    }
    if(month == 10){
        if(day >= 24)
            cout << "Scorpio";
        else
            cout << "Libra";
    }
    if(month == 11){
        if(day >= 23)
            cout << "Sagittarius";
        else
            cout << "Scorpio";
    }
    if(month == 12){
        if(day >= 22)
            cout << "Capricorn";
        else
            cout << "Sagittarius";
    }
    cout << endl;
}
