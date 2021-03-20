#include <Gamebuino-Meta.h>

// On définit le nombre de briques que l’on veut sur la ligne ainsi que les dimensions des briques
const int nombre_briques = 4;
const int largeur_brique = (gb.display.width() / nombre_briques) - 2;
const int hauteur_brique = 3;
const int position_y_ligne = 20;

// On déclare le tableau qui représente la ligne
int ligne_briques[nombre_briques];

void setup() {
  gb.begin();
}

void loop() {
  while (!gb.update());
  gb.display.clear();

  // On initialise la ligne. Un 1 indique que la brique est visible
  ligne_briques[0] = 1;
  ligne_briques[1] = 1;
  ligne_briques[2] = 1;
  ligne_briques[3] = 1;

  // Pour chaque brique, on calcule sa position en X et on l’affiche
  int position_x_brique1 = 0;
  gb.display.fillRect(position_x_brique1, position_y_ligne, largeur_brique, hauteur_brique);

  int position_x_brique2 = largeur_brique + 2;
  gb.display.fillRect(position_x_brique2, position_y_ligne, largeur_brique, hauteur_brique);

  int position_x_brique3 = 2 * (largeur_brique + 2);
  gb.display.fillRect(position_x_brique3, position_y_ligne, largeur_brique, hauteur_brique);

  int position_x_brique4 = 3 * (largeur_brique + 2);
  gb.display.fillRect(position_x_brique4, position_y_ligne, largeur_brique, hauteur_brique);
}