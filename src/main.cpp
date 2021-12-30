#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "DAW/Modularsynth.hpp"
#include "DAW/Score.hpp"

int main(int argc, char **argv){
  ModularSynth ms= ModularSynth("synth");
  ms.runPatch();
//  Score s= Score("doc/ly/test.ly");
  system("lilypond doc/ly/test.ly");
  return 0;
}
