#include "tones.h"

void default_tone_callback() {
  tone(TONE_PIN, tones.a, 75);
}

void play_button_tone_callback() {
  tone(TONE_PIN, tones.high_a, 10);
}

void play_pass_tone_callback() {
  tone(TONE_PIN, tones.high_a, 75);
}

void play_fail_tone_callback() {
  tone(TONE_PIN, tones.lower_a, 75);
}

void play_f1_ready_tone_callback() {
  tone(TONE_PIN, tones.c5, 500);
}

void play_f1_go_tone_callback() {
  tone(TONE_PIN, tones.c6, 500);
}

void play_sonic_rings_tone_callback_a() {
  tone(TONE_PIN, tones.g5, 50);
  task_tone.setCallback(play_sonic_rings_tone_callback_b);
  task_tone.restartDelayed(TASK_MILLISECOND * 50);
}

void play_sonic_rings_tone_callback_b() {
  tone(TONE_PIN, tones.c6, 100);  
}