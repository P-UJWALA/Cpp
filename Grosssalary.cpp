// Write a C program to input basic salary of an employee and calculate its Gross salary 
// according to following: Basic Salary <= 10000 : HRA = 20%, DA = 80% 
// Basic Salary <= 20000 : HRA = 25%, DA = 90% Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<bits/stdc++.h>
using namespace std;
int main(){
    float salary,HRA,DA,gross_salary;
    cout << "enter the monthly salary of employee" << endl;
    cin >> salary;
    if(salary <= 10000){
        HRA= salary*0.20;
        DA= salary*0.80;
   }
   else if(salary <= 20000){
         HRA= salary*0.25;
        DA= salary*0.90;
   }
     else{
         HRA= salary*0.30;
        DA= salary*0.95;
   }
   gross_salary=salary+HRA+DA;
   cout << gross_salary;
   return 0;
}