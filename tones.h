#pragma once

#include <Arduino.h>
#include "pin_definitions.h"

#include <TaskSchedulerDeclarations.h>

extern Task task_tone;

struct Scale {
  uint16_t lower_a;
  uint16_t low_a;
  uint16_t c4;
  uint16_t c_sharp;
  uint16_t d;
  uint16_t d_sharp;
  uint16_t e;
  uint16_t f;
  uint16_t f_sharp;
  uint16_t g;
  uint16_t g_sharp;
  uint16_t a;
  uint16_t c5;
  uint16_t g5;
  uint16_t high_a;
  uint16_t c6;
};

Scale tones = {110, 220, 261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 523, 784,  880,  1046};
//        lower_a  low_a  C4   C#   D    D#   E    F    F#   G    G#   A    c5   g5  high_a  c6

void default_tone_callback();
void play_button_tone_callback();
void play_pass_tone_callback();
void play_fail_tone_callback();
void play_f1_ready_tone_callback();
void play_f1_go_tone_callback();
void play_sonic_rings_tone_callback_a();
void play_sonic_rings_tone_callback_b();
