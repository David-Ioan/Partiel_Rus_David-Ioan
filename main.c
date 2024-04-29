#include "main.h"

int main() {
	Initialisation();

	while (jeux == true) {
		Render();
		Affichage();
		AffichagePomme();
		Mouvement();
		Pomme();
		Mur();

		SDL_RenderPresent(render);
		SDL_Delay(10);
	}

	Destroy();
}