#include <Gamebuino-Meta.h>

int balle_posX = 20;
int balle_posY = 20;
int balle_speedX = 1;
int balle_speedY = 1;
int balle_taille = 4;

int raquette1_posX = 10;
int raquette1_posY = 30;

int raquette2_posX = 65;
int raquette2_posY = 30;

int raquette_hauteur = 12;
int raquette_largeur = 3;

void setup() {
  gb.begin();
}

void loop() {
  while (!gb.update());
  gb.display.clear();

  balle_posX = balle_posX + balle_speedX;
  balle_posY = balle_posY + balle_speedY;

  gb.display.fillRect(balle_posX, balle_posY, balle_taille, balle_taille);
  gb.display.fillRect(raquette1_posX, raquette1_posY, raquette_largeur, raquette_hauteur);
  gb.display.fillRect(raquette2_posX, raquette2_posY, raquette_largeur, raquette_hauteur);
}
