#define _TASK_MICRO_RES         // Support for microsecond resolution
#define _TASK_PRIORITY
#define _TASK_SLEEP_ON_IDLE_RUN
#define _TASK_WDT_IDS
#define _TASK_TIMECRITICAL

#include "tones.h"
#include "pin_definitions.h"
#include "tasks.h"

#include <TaskScheduler.h>

Scheduler runner;

void setup()
{
  
}

void loop() {
  runner.execute();
}