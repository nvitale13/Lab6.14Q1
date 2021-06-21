#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main() {
 const double PI = 3.1416;
 float diameter;
 float radius;
 float height;
 float VolumeIN;
 float VolumeFT;
 float NUMGallons;
 float NUMUnits;
 float Cost;
 

  cout << "Enter diameter: ";
  cin >> diameter;
  cout << "Enter height: ";
  cin >> height;
  
  radius = diameter / 2;

  VolumeFT = PI * (radius * radius) * height;

  VolumeIN = VolumeFT * 1728;

  NUMGallons = VolumeIN / 231;

  NUMUnits = NUMGallons / 748;

  Cost = NUMUnits * 1.80;

  cout << "Cost: $ " << Cost << endl;

  return 0;
  
  }