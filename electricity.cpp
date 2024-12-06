/* Write a C program to input electricity unit charges
  and calculate total electricity bill according to the given
  condition: For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit
  For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit An additional surcharge of 20% is added to the bill */
  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int totalunits;
     float initialbill=0.0;
     float extracharge;
     cout << "Enter total units used" << endl;
     cin >> totalunits ;
     if(totalunits<=50){
        initialbill=totalunits*0.50;
     }
     else if(totalunits<=150){
        initialbill=(50*0.50)+((totalunits-50)*0.75);
     }
     else if(totalunits<250){
        initialbill=(50*0.50)+(100*0.75)+((totalunits-150)*1.20);
     }
     else{
         initialbill=(50*0.50)+(100*0.75)+(100*1.20)+((totalunits-250)*1.50);
     }
     extracharge=initialbill*0.20;
     initialbill +=extracharge;
     cout << initialbill;
     return 0;
  }