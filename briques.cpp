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
  for(int i = 0; i < nombre_briques; i++){
    ligne_briques[i] = 1;
  }

  // Pour chaque brique, on calcule sa position en X et on l’affiche
  for(int i = 0; i < nombre_briques; i++){
    int position_x_brique = i * (largeur_brique + 2);
    gb.display.fillRect(position_x_brique, position_y_ligne, largeur_brique, hauteur_brique);
  }
}