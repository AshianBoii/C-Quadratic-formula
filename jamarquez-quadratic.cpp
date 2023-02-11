//
// Name: Marquez, Jonathan
// Homework: #1
// Due: 2/10/23
// Course: cs-2560-01-sp23
//
// Description: Quadratic formula 
// Calculates the quadratic formula of an exquation given values a,b,c

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
double a,b,c;
double discriminant, denominator;
cout <<"Quadratic Equation solver by J.Marquez"<<endl;
cout<<endl;
cout<<"Enter Values for a b c?"; cin>>a>>b>>c ;
cout<<"\n";
discriminant = pow(b,2) - 4*a*c;
denominator = 2*a;


if(a==0){
cout<<"Not a quadratic equation"<<endl;
}

else if(discriminant<0)
cout<<"Roots are imaginanry\n"<<endl;

else{

cout<<"x= " << setprecision(2)<<(-b+sqrt(discriminant))/denominator<<endl;
cout<<"x= "<<setprecision(2)<<(-b-sqrt(discriminant))/denominator<<endl;
cout<<endl;
}
return 0;
}


