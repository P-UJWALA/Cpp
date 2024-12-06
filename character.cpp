// Write a C program to check whether a character is alphabet or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cout << "Enter a value of 'a'" << endl;
    cin >> a;
    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
        cout << "it is an alphabet " << a;
    }
    else{
        cout << "it is not a alphabet " << a;
    }
    return 0;
}