#include "KsiazkaAdresowa.h"



void KsiazkaAdresowa::rejestracjaUzytkownika(){

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){

uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){

uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika(){

uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika(){

uzytkownikMenedzer.wylogowanieUzytkownika();
}
void KsiazkaAdresowa::dodawanieAdresata(){

adresatMenedzer.dodawanieAdresata(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}
