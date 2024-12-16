#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout << "Enter a number"<< endl ;
    cin >> n;
    cout << n << endl;
    for( ;n!=0;n=n/2)
    {
       int last = n%10;
       sum += last;
    }
    cout << sum << endl;
    return 0;


}