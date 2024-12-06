//  Write a C program to find all roots of a quadratic equation.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    float d;
    cout << "enter a,b & c values to find roots" << endl;
    cin >> a >> b >> c ;
    d=b*b-4*a*c;
    if(d==0){
        cout << "Roots are " << -b/(2*a) << endl ;
    }
    else if(d>0){
        cout << "Roots are " << endl;
        cout << (-b+sqrt(d))/(2*a);
        cout << (-b-sqrt(d))/(2*a);
    }
    else{
         cout << "Roots are " << endl;
        cout << -b/(2*a);
         cout << (-b+sqrt(-d))/(2*a) << endl;
        cout << (-b-sqrt(-d))/(2*a);
    }
    return 0;
}