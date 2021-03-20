#include <Gamebuino-Meta.h>

// Caractéristiques de la balle
const int taille_balle = 4;
int balle_posX = gb.display.width() / 2;
int balle_posY = gb.display.height() - 20;
int balle_speedX = 1;
int balle_speedY = -1;

// Caractéristiques de la raquette
const int largeur_raquette = gb.display.width() / 6;
const int hauteur_raquette = 3;
const int raquette_posY = gb.display.height() - hauteur_raquette;
int raquette_posX = gb.display.width() / 3;

// Nos fonctions
void mise_a_jour_position_balle(){
  balle_posX = balle_posX + balle_speedX;
  balle_posY = balle_posY + balle_speedY;
}

void deplacement_raquette(){
  // Si on reste appuyé vers le haut, la raquette monte
  if (gb.buttons.repeat(BUTTON_LEFT, 0)){
    raquette_posX = raquette_posX - 1;
  }
  // Si on reste appuyé vers le bas, la raquette descend
  if (gb.buttons.repeat(BUTTON_RIGHT, 0)){
    raquette_posX = raquette_posX + 1;
  }
}

void affichage(){
  // On affiche la balle et la raquette
  gb.display.fillRect(balle_posX, balle_posY, taille_balle, taille_balle);
  gb.display.fillRect(raquette_posX, raquette_posY, largeur_raquette, hauteur_raquette);
}

// Setup et loop
void setup() {
  gb.begin();
}

void loop() {
  while (!gb.update());
  gb.display.clear();

  mise_a_jour_position_balle();

  deplacement_raquette();

  affichage();
}