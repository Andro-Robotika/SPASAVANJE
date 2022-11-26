#pragma once
#include "helper.h"

void RobotLine::radionica() {
  static int broj = 0;
  if (line(0) and line(8) and broj < 2) {
    go(-60, 60);
    delayMs(500);
    broj++;
  }
  else if (line(1) and line(4) and broj == 2) {
    go(60, -60);
    delayMs(1100);
  }
  else if (line(0) and line(4) and line(8) and broj == 3) {
    go(60, 60);
    delayMs(500);
  }
  else if (line(0) and line(4) and line(8) and broj == 4) {
    go(-60, 60);
    delayMs(800);
  }
  else {
    lineFollow();

  }

}
