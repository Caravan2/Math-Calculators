#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
  int D, n, m;

  cout<<"We are calculating final investment An+1 using reccurential formula: \n\n";
  
  cout<<"please enter n for An that you want to find: ";
  cin>>n;
  cout<<"\n";

  cout<<"please enter the value of previous, A"; cout<<n-1;
  cin>>m;
  cout<<"\n";

  cout<<"please enter D - Difference \n";
  cin>>D; 
  cout<<"\n";


  cout<<"D = "; cout<<D; cout<<"\n";
  cout<<"n of An = "; cout<<n; cout<<"\n";
  cout<<"previous term = "; cout<<m; cout<<"\n";
  
  cout<<"An = An-1 + D = ";cout<<m+D;

}

