#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float p,n,r,i;
  cin>>p,n,r;
  i=p * pow(1+r/100,n)-p;
  cout<<i;
  return 0;
}
