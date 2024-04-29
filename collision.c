#include "collision.h"

void Mur() {
	if (xs[0] == 0 || xs[0] + taille == 800 || ys[0] == 0 || ys[0] + taille == 800) {
		jeux = false;
	}
}

void Pomme() {
	if (xs[0] + taille >= xp && ys[0] + taille >= yp &&
		xs[0] <= xp + taillep && ys[0] <= yp + taillep) {
		yp = rand() % (800 - taillep - 5) + 10;
		xp = rand() % (800 - taillep - 5) + 10;
	}
}