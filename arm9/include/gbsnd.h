#include "global.h"

extern bool soundDisabled;
extern bool hyperSound;

void initSND();
void refreshSND();
void enableChannel(int i);
void disableChannel(int i);
void updateSound(int cycles);
void handleSoundRegister(u8 ioReg, u8 val, const int cycles=0);
void updateSoundSample();
void handleSDLCallback(void* userdata, u8* buffer, int len);
