#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number to reverse" << endl;
    cin >> n;
    while(n!=0){
        int last=n%10;
        cout << last;
        n=n/10;
    }
    return 0;
}
