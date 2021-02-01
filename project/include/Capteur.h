#ifndef CAPTEUR_H
#define CAPTEUR_H

#define DEVICE_ID 0x04;
#define CHANNEL 1;

class Capteur{
private:
  int fd;
  double voltage;
  double distance;

public:
  Capteur();
  double getDonnees();//distance
};

#endif CAPTEUR_H