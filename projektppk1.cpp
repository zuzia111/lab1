#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Film {
    int id;
    string tytul;
    string gatunek;
    int rok;
    int ilosc;
    int dostepne;
};

struct Klient {
    int id;
    string imie;
    string nazwisko;
    string nrKarty;
};

struct Wypozyczenie {
    int idFilmu;
    int idKlienta;
};

const int MAX = 100;
Film tablicafilmow[MAX];
int liczbaFilmow = 0;

Klient tablicaklientow[MAX];
int liczbaKlientow = 0;

Wypozyczenie wypozyczenia[MAX];
int liczbaWypozyczen = 0;

void dodajFilm() {
    if (liczbaFilmow >= MAX) {
        cout << "wypozyczalniadane filmow jest pelna" << endl;
        return;
    }
    Film f;
    f.id = liczbaFilmow + 1;

    cout << "Podaj tytul: ";
    cin.ignore();
    getline(cin, f.tytul);

    cout << "Podaj gatunek: ";
    getline(cin, f.gatunek);

    cout << "Podaj rok: ";
    cin >> f.rok;

    cout << "Ile sztuk: ";
    cin >> f.ilosc;
    f.dostepne = f.ilosc;
    tablicafilmow[liczbaFilmow] = f;
    liczbaFilmow++;
    cout << "Dodano film o ID: " << f.id << endl;
}
void pokazFilmy() {
    cout << "\n--- LISTA FILMOW ---" << endl;
    for (int i = 0; i < liczbaFilmow; i++) {
        cout << "ID: " << tablicafilmow[i].id << " | " << tablicafilmow[i].tytul << " (" << tablicafilmow[i].rok << ") " << " Dostepne: " << tablicafilmow[i].dostepne << "/" << tablicafilmow[i].ilosc << endl;
    }
    cout << "--------------------" << endl;
}

void usunFilm() {
    int id1;
    cout << "Podaj ID filmu do usuniecia: ";
    cin >> id1;

    int indeks = -1;
    for (int i = 0; i < liczbaFilmow; i++) {
        if (tablicafilmow[i].id == id1) {
            indeks = i;
            break;
        }
    }

    if (indeks == -1) {
        cout << "Nie znaleziono filmu" << endl;
    }
    else {
        for (int i = indeks; i < liczbaFilmow - 1; i++) {
            tablicafilmow[i] = tablicafilmow[i + 1];
        }
        liczbaFilmow--;
        cout << "Film usuniety" << endl;
    }
}

void dodajKlienta() {
    if (liczbaKlientow >= MAX) {
        cout << "Baza klientow jest pelna" << endl;
        return;
    }

    Klient k;
    k.id = liczbaKlientow + 1;
    cout << "Podaj imie: ";
    cin >> k.imie;
    cout << "Podaj nazwisko: ";
    cin >> k.nazwisko;
    cout << "Podaj nr karty: ";
    cin >> k.nrKarty;

    tablicaklientow[liczbaKlientow] = k;
    liczbaKlientow++;
    cout << "Klient dodany. ID: " << k.id << endl;
}

void wypozyczFilm() {
    int idK, idF;
    cout << "Podaj ID Klienta: ";
    cin >> idK;
    cout << "Podaj ID Filmu: ";
    cin >> idF;

    int indeksFilmu = -1;
    for (int i = 0; i < liczbaFilmow; i++) {
        if (tablicafilmow[i].id == idF) {
            indeksFilmu = i;
            break;
        }
    }

    if (indeksFilmu == -1) {
        cout << "Nie ma takiego filmu." << endl;
        return;
    }

    if (tablicafilmow[indeksFilmu].dostepne > 0)
    {
        wypozyczenia[liczbaWypozyczen].idFilmu = idF;
        wypozyczenia[liczbaWypozyczen].idKlienta = idK;
        liczbaWypozyczen++;
        tablicafilmow[indeksFilmu].dostepne--;
        cout << "Film wypozyczony!" << endl;
    }
    else {
        cout << "Brak dostepnych egzemplarzy." << endl;
    }
}

void zwrocFilm() {
    int idK, idF;
    cout << "Podaj ID Klienta: ";
    cin >> idK;
    cout << "Podaj ID Filmu: ";
    cin >> idF;

    int indeksWypozyczenia = -1;
    
    for (int i = 0; i < liczbaWypozyczen; i++) {
        if (wypozyczenia[i].idKlienta == idK && wypozyczenia[i].idFilmu == idF) {
            indeksWypozyczenia = i;
            break;
        }
    }

    if (indeksWypozyczenia != -1) {
       
        for (int i = indeksWypozyczenia; i < liczbaWypozyczen - 1; i++) {
            wypozyczenia[i] = wypozyczenia[i + 1];
        }
        liczbaWypozyczen--;

        for (int i = 0; i < liczbaFilmow; i++) {
            if (tablicafilmow[i].id == idF) {
                tablicafilmow[i].dostepne++;
                break;
            }
        }
        cout << "Film zwrocony." << endl;
    }
    else {
        cout << "Nie znaleziono takiego wypozyczenia." << endl;
    }
}

void zapisz() {
    ofstream plik("wypozyczalniadane.txt");
    plik << liczbaFilmow << endl;
    for (int i = 0; i < liczbaFilmow; i++) {
        plik << tablicafilmow[i].id << endl;
        plik << tablicafilmow[i].tytul << endl;
        plik << tablicafilmow[i].gatunek << endl;
        plik << tablicafilmow[i].rok << endl;
        plik << tablicafilmow[i].ilosc << endl;
        plik << tablicafilmow[i].dostepne << endl;
    }

    plik << liczbaKlientow << endl;
    for (int i = 0; i < liczbaKlientow; i++) {
        plik << tablicaklientow[i].id << endl;
        plik << tablicaklientow[i].imie << endl;
        plik << tablicaklientow[i].nazwisko << endl;
        plik << tablicaklientow[i].nrKarty << endl;
    }

    plik.close();
    cout << "Dane zapisane!" << endl;
}

void wczytaj() {
    ifstream plik("wypozyczalniadane.txt");
    if (!plik.good()) {
        cout << "Brak pliku z wypozyczalniadane." << endl;
        return;
    }

    plik >> liczbaFilmow;
    for (int i = 0; i < liczbaFilmow; i++) {
        plik >> tablicafilmow[i].id;
        plik.ignore();
        getline(plik, tablicafilmow[i].tytul);
        getline(plik, tablicafilmow[i].gatunek);
        plik >> tablicafilmow[i].rok;
        plik >> tablicafilmow[i].ilosc;
        plik >> tablicafilmow[i].dostepne;
    }
    plik >> liczbaKlientow;
    for (int i = 0; i < liczbaKlientow; i++) {
        plik >> tablicaklientow[i].id;
        plik >> tablicaklientow[i].imie;
        plik >> tablicaklientow[i].nazwisko;
        plik >> tablicaklientow[i].nrKarty;
    }

    plik.close();
    cout << "Dane wczytane!" << endl;
}

int main() {
    int wybor;

    do {
        cout << "\n=== MENU WYPOZYCZALNI ===" << endl;
        cout << "1. Dodaj film" << endl;
        cout << "2. Usun film" << endl;
        cout << "3. Pokaz wszystkie filmy" << endl;
        cout << "4. Dodaj klienta" << endl;
        cout << "5. Wypozycz film" << endl;
        cout << "6. Zwroc film" << endl;
        cout << "7. Zapisz dane" << endl;
        cout << "8. Wczytaj dane" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybierz: ";
        cin >> wybor;

        switch (wybor) {
        case 1: dodajFilm(); break;
        case 2: usunFilm(); break;
        case 3: pokazFilmy(); break;
        case 4: dodajKlienta(); break;
        case 5: wypozyczFilm(); break;
        case 6: zwrocFilm(); break;
        case 7: zapisz(); break;
        case 8: wczytaj(); break;
        case 0: cout << "Koniec." << endl; break;
        default: cout << "Zla opcja." << endl;
        }

    } while (wybor != 0);

    return 0;
}