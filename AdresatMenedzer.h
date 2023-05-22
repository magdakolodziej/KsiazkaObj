#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer{

vector <Adresat> adresaci;


Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
int pobierzIdNowegoAdresata();
void wyswietlDaneAdresata(Adresat adresat);
PlikZAdresatami plikZAdresatami;


public:

void dodawanieAdresata(int idZalogowanegoUzytkownika);
void wyswietlWszystkichAdresatow();
void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);


};
#endif
