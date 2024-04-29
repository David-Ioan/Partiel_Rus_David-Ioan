#include "pomme.h"

void InitPomme() {
	srand(time(NULL));
	taillep = 25;
	yp = rand() % (800 - taillep - 5) + 10;
	xp = rand() % (800 - taillep - 5) + 10;
}

void AffichagePomme() {
	SDL_Rect tete = { xp, yp, taillep, taillep };
	SDL_SetRenderDrawColor(render, 0, 0, 255, 255);
	SDL_RenderFillRect(render, &tete);
}