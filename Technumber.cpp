#include<iostream>
using namespace std;
int countfun(int sqr){
    int c=0;
    while(sqr!=0){
        int last = sqr%10;
        c=c+1;
        sqr = sqr/10;
    }
    return c;
}
int main(){
    int a;
    cout << "enter number" << endl;
    cin >> a;
    int temp =a;
    int sqr = a*a;
    int l,r,total;
    switch (countfun(sqr))
    {
    case 4: l = sqr%100;
            r =sqr /100;
            total = l+r;
        break;
    case 6:l = sqr %1000;
            r = sqr/1000;
            total = l+r;
            break;
    
    default:cout << "exit";
    }
    if(a==total){
       cout << "tech number" << endl;
    }
    else{
        cout << "Not a tech number" << endl;
    }
    return 0;
}