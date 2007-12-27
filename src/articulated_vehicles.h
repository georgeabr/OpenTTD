/* $Id$ */

/** @file articulated_vehicles.h */

#ifndef ARTICULATED_VEHICLES_H
#define ARTICULATED_VEHICLES_H

#include "vehicle_type.h"

uint CountArticulatedParts(EngineID engine_type, bool purchase_window);
void AddArticulatedParts(Vehicle **vl, VehicleType type);

#endif /* ARTICULATED_VEHICLES_H */
