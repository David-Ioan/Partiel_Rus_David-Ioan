#include "Init.h"

void Initialisation() {
	if (InitSDL() == true) {
		if (InitFenetre() == true) {
			InitRenderer();
		}
	}
	jeux = true;
	InitSerpent();
	InitPomme();
}

void Destroy() {
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(fenetre);
	SDL_Quit();
}