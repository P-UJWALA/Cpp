// Write a C program to check whether a year is leap year or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout << "Enter year to check the leap year not" << endl;
    cin >> year;
    if(year%4==0 || year%400==0 && year%100!=0){
        cout << "Year is leap year" << year;
    }
    else{
     cout <<"year is not a leapyear" << year;

    }
    return 0;
}