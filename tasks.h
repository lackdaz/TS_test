#define TASK_H
#define _TASK_MICRO_RES         // Support for microsecond resolution
#define _TASK_PRIORITY
#define _TASK_SLEEP_ON_IDLE_RUN
#define _TASK_WDT_IDS
#define _TASK_TIMECRITICAL
#include <TaskScheduler.h>

extern Scheduler runner;

Task task_tone(TASK_IMMEDIATE, TASK_ONCE, NULL, &runner, false);