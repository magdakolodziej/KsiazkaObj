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
    adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

}

void KsiazkaAdresowa::wylogowanieUzytkownika() {

    uzytkownikMenedzer.wylogowanieUzytkownika();
}
void KsiazkaAdresowa::dodawanieAdresata() {

    adresatMenedzer.dodawanieAdresata(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    cout << uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() << endl;
    if (uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() == 0)
        cout << "Brak zalogowanego uzytkownika";
    else
        adresatMenedzer.wyswietlWszystkichAdresatow();
}
