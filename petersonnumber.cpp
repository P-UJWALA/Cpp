#include<iostream>
using namespace std;
int factorial(int last){
    int fact =1;
    if(last == 0 || last == 1){
        return 1;
    }
    for(int i=2;i<=last;i++){
       fact = fact*i;
    }
    return fact;
}
int main(){
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    int temp  =a;
    int sum=0;
    for(;temp!=0;temp=temp/10){
        int last = temp%10;
        sum=sum+factorial(last);

    }
    if(a==sum){
        cout << "peterson number";
    }
    else{
        cout << "Not a peterson number";
    }
    return 0;
    
}