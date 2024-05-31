#pragma once
#include "vehicle.hpp"
#include<string>
#include<iostream>
using namespace std;

class VehicleFactory{
public:  
  static Vehicle* getVehicle(string vehicleType);
};