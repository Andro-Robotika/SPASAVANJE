#pragma once
#include "helper.h"

void RobotLine::radionica() {


display("ANDRO");

// ZADATAK: Neka robot opiše četverokut.
go(60, 60);
delayMs(3000);
go(-90, 90);
delayMs(500);
go(60, 60);
delayMs(3000);
go(-90, 90);
delayMs(500);
go(60, 60);
delayMs(3000);
go(-90, 90);
delayMs(500);
go(60, 60);
delayMs(3000);
go(-90, 90);
delayMs(500);
stop(), end();


}
