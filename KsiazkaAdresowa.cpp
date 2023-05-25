#include "KsiazkaAdresowa.h"



void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {

    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::dodawanieAdresata() {
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer -> dodawanieAdresata();
    }

    else {
        cout << "Aby dodac adrestata, nalezy najpierw sie zalogowac" << endl;
        system ("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    } else {
        cout << "Brak zalogowanego uzytkownika" << endl;
        system ("pause");
    }
}
