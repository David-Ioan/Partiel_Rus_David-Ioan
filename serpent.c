#include "serpent.h"

void InitSerpent() {
	xs[0] = 10;
	ys[0] = 10;
	taille = 50;
	taillecorps = 1;
}

void Affichage() {
	for (int i = 0; i < taillecorps; i++) {
		SDL_Rect tete = { xs[i], ys[i], taille, taille };
		SDL_SetRenderDrawColor(render, 255, 16, 16, 255);
		SDL_RenderFillRect(render, &tete);
	}
}

void Mouvement() {
	ys[0] += vitessey;
	xs[0] += vitessex;
	SDL_PollEvent(&event);
	switch (event.type) {
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym) {
		case SDLK_s:
			vitessex = 0;
			vitessey = 5;
			break;
		case SDLK_z:
			vitessex = 0;
			vitessey = -5;
			break;
		case SDLK_d:
			vitessex = 5;
			vitessey = 0;
			break;
		case SDLK_q:
			vitessex = -5;
			vitessey = 0;
			break;
		}
	}
}