#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int days,years,weeks,d;
  cin>>days;
  years = days/365;
  days = days%365;
  weeks = days/7;
  days = days%7;
  d=days;
  cout<<years<<months<<d;
  return 0;
}
