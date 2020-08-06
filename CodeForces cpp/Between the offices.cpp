#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
  // n : # of days
  // stof : # of flight from Seattle to San Francisco
  // ftos : # of flight from San Francisco to Seattle
  int n, stof = 0, ftos = 0;
  string s;
  
  cin >> n >> s;
  
  for(int i=0; i<n-1; i++) {
    if(s.substr(i,2) == "SF") { stof++; }
    else if(s.substr(i,2) == "FS") { ftos++; }
  }
  
  if(stof > ftos) { cout << "YES" << endl; }
  else { cout << " NO" << endl; }
  
  return 0;
}