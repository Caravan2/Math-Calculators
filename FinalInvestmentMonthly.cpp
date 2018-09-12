#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
  int A, n;
  float R;
  cout<<"We are calculating final investment A(n): \n\n";
  
  cout<<"please enter A(0) - The Principal Amount \n";
  cin>>A;
  cout<<"\n";

  cout<<"please enter R - The Interest Rate \n";
  cout<<"%";
  cin>>R; 
  cout<<"\n";
  R = R/100; //get decimal from percent.

  cout<<"please enter n - Time Period";
  cin>>n;
  cout<<"\n";

  cout<<"A(0) = "; cout<<A; cout<<"\n";
  cout<<"R = "; cout<<R; cout<<"\n";
  cout<<"n = "; cout<<n; cout<<"\n";
  
  cout<<"S(n) = A(0)*(1+Rn) = ";cout<<A*(1+R*n);

}

