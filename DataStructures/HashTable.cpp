#include <iostream>
#include <string>
#include "HashTable.h"

void HashTable::print()
{
    // Wypisujemy kolejne elementy tablicy
    for (int i = 0; i < capacity; i++)
        std::cout << "T[" << i << "]: " << T[i] << std::endl;
}

HashTable::HashTable(int c)
{
    // Ustawiamy now� pojemno�c tablicy a tak�e jej rozmiar i tworzymy j�
    capacity = c;
    size = 0;
    T = new std::string[capacity]{ "NULL" };

    // Kom�rki pustej tablicy przechowuj� warto�� NULL
    for (int i = 0; i < capacity; i++)
        T[i] = "NULL";
}

bool HashTable::empty()
{
    // Je�li rozmiar wynosi 0, oznacza to, �e tablica jest pusta
    if (size == 0)
        return 1;
    return 0;
}

bool HashTable::full()
{
    // Je�li rozmiar jest r�wny pojemno�ci, oznacza to, �e tablica jest pe�na
    if (size == capacity)
        return 1;
    return 0;
}

int HashTable::hashFunction(std::string s)
{
    // Tworzymy zmienn� do przechowywania klucza
    int uniqueKey = 0;

    // Unikalny klucz jest sum� warto�ci liter wchodz�cych w �a�cuch tekstowych w kodzie ASCII
    for (int i = 0; i < s.size(); i++)
        uniqueKey += s[i];

    return uniqueKey % capacity;
}

int HashTable::insert(std::string s)
{
    // Mechanizm obs�ugi kolizji: Pr�bkowanie liniowe

    // Je�li tablica nie jest pe�na, mo�liwe jest dodanie nowego elementu
    if (!full())
    {
        // Tworzymy zmienn� odpowiadaj�c� za zliczanie o ile nale�y przesun�� 
        int tries = 0;

        // Pobieramy warto�� funkcji haszuj�cej dla wstawianego �a�cucha tekstowego
        int hash = hashFunction(s);

        // Przechodzimy przez kolejne elementy tablicy
        while (T[(hash + tries) % capacity] != "NULL" && T[(hash + tries) % capacity] != "FREE")
            tries++;

        // W wolne miejsce wstawiamy nowy �a�cuch tekstowy
        T[(hash + tries) % capacity] = s;

        // Zwi�kszamy rozmiar tablicy
        size++;
        return tries;
    }

    // Je�li tablica jest pe�na, zwr�� odpowiedni� warto��
    return -1;
}

void HashTable::del(std::string s)
{
    // Je�li tablica nie jest pusta, mo�emy wykona� usuwanie
    if (!empty())
    {
        // Tworzymy zmienn� odpowiadaj�c� za zliczanie o ile nale�y przesun�� 
        int tries = 0;

        // Pobieramy warto�� funkcji haszuj�cej dla wstawianego �a�cucha tekstowego
        int hash = hashFunction(s);

        // Przechodzimy przez kolejne elementy tablicy, sprawdzaj�c czy natrafili�my na element do usuni�cia
        while (T[(hash + tries) % capacity] != "NULL" && tries < capacity)
        {
            // Je�li natrafili�my na element do usuni�cia, zmieniamy warto�� kom�rki tablicy na "FREE"
            if (T[hash + tries] == s)
                T[hash + tries] = "FREE";

            // Je�li nie natrafili�my na element do usuni�cia, zwi�kszamy warto�� przesuni�cia
            tries++;
        }
    }
}

std::string HashTable::search(std::string s)
{
    // Je�li tablica nie jest pusta, mo�emy j� przeszuka�
    if (!empty())
    {
        // Tworzymy zmienn� odpowiadaj�c� za zliczanie o ile nale�y przesun�� 
        int tries = 0;

        // Pobieramy warto�� funkcji haszuj�cej dla wstawianego �a�cucha tekstowego
        int hash = hashFunction(s);

        // Przechodzimy przez kolejne elementy tablicy
        while (T[(hash + tries) % capacity] != "NULL" && tries < capacity)
        {
            // Sprawdzamy czy znale�li�my po��dany element
            if (T[hash + tries] == s)
            {
                // Je�li znale�li�my, zwracamy komunikat
                std::cout << s << " znaleziono na indeksie: " << hash + tries << std::endl;
                return T[hash + tries];
            }

            // Je�li nie znale�li�my elementu, szukamy dalej, przesuwaj�c si� o 1
            tries++;
        }

        return "Brak";
    }

    // Je�li tablica jest pusta, zwracamy odpowiedni komunikat
    return "Tablica jest pusta";
}




