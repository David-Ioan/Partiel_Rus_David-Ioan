#pragma once
#include "fenetre.h"

bool jeux;

//Init
void Initialisation();
void Destroy();

//fenetre
bool InitSDL();
bool InitFenetre();
bool InitRenderer();
void Render();

//serpent
void InitSerpent();
void Affichage();
void Mouvement();

//collision
void Mur();
void Pomme();

//pomme
void InitPomme();
void AffichagePomme();