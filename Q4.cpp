#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int days,years,months,d;
  cin>>days;
  years = days/365;
  days = days%365;
  months = days/30;
  days = days%30;
  d=days;
  cout<<years<<months<<d;
  return 0;
}
