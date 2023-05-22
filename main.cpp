#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.dodawanieAdresata();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodawanieAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    return 0;
}
