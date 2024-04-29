#include "fenetre.h"

bool InitSDL() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("Erreur SDL INIT failed\n");
		return false;
	}
	return true;
}

bool InitFenetre() {
	fenetre = SDL_CreateWindow("Snake",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		800, 800, SDL_WINDOW_SHOWN);
	if (fenetre == NULL) {
		printf("Erreur creation de la fenetre SDL");
		SDL_Quit();
		return false;
	}
	return true;
}

bool InitRenderer() {
	render = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (render == NULL) {
		printf("Erreur creation rendu SDL\n");
		SDL_DestroyWindow(fenetre);
		SDL_Quit();
		return false;
	}
	return true;
}

void Render() {
	SDL_SetRenderDrawColor(render, 255, 255, 255, 255); //WHITE SQUARRE
	SDL_RenderClear(render);
}