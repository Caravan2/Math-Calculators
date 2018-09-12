#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
  int A, n, y;
  float R, a_1, a_n;
  cout<<"We are calculating final investment S(n): \n\n";
  
  cout<<"please enter A - constart amount of money that you deposit monthly \n";
  cin>>A;
  cout<<"\n";

  cout<<"please enter R - simple interest rate \n";
  cout<<"%";
  cin>>R; 
  cout<<"\n";
  R = R/100; //get decimal from percent.

  cout<<"please enter n - time period (months) \n";
  cin>>n;
  cout<<"\n";

  a_1 = A+A*R*n;
  a_n = A;

  cout<<"number of months = "; cout<<n; cout<<"\n";
  cout<<"constart amount of money that you deposit monthly = "; cout<<A; cout<<"\n";
  cout<<"decimal number of investment rate = "; cout<<R; cout<<"\n";
  cout<<"First term in a sequence, a_1 = "; cout<<a_1; cout<<"\n";
  cout<<"Last tern in a sequence, a_n = "; cout<<a_n; cout<<"\n";
  
  cout<<"S(n) = n/2*(a_1+a_n) = ";cout<<n/2*(a_1+a_n);

}

