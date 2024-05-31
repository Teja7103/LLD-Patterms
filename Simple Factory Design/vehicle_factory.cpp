#include "vehicle_factory.hpp"
#include "bike.hpp"
#include "car.hpp"
using namespace std;

Vehicle* VehicleFactory::getVehicle(string vehicleType) {
  if (vehicleType == "car") {
    return new Car();
  } else if (vehicleType == "bike") {
    return new Bike();
  }
}