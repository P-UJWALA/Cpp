#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<=6;i++){
        for(int j=0;j<=i;j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

// Using number printing the pyramid with same number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout << "enter number of rows";
    cin >> rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }

} 

// Using number printing the pyramid with series of number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout << "enter number of rows";
    cin >> rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }

} 

//Printing the alphabet simplepyramid
#include<bits/stdc++.h>
using namespace std;
int main(){
    char rows;
  cout << "enter number of rows";
cin >> rows;
for(char i='A';i<rows;i++){
for(char j='A';j<=i;j++){
cout << i;
}
    cout << endl;
}
}
