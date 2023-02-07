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
    // Ustawiamy now¹ pojemnoœc tablicy a tak¿e jej rozmiar i tworzymy j¹
    capacity = c;
    size = 0;
    T = new std::string[capacity]{ "NULL" };

    // Komórki pustej tablicy przechowuj¹ wartoœæ NULL
    for (int i = 0; i < capacity; i++)
        T[i] = "NULL";
}

bool HashTable::empty()
{
    // Jeœli rozmiar wynosi 0, oznacza to, ¿e tablica jest pusta
    if (size == 0)
        return 1;
    return 0;
}

bool HashTable::full()
{
    // Jeœli rozmiar jest równy pojemnoœci, oznacza to, ¿e tablica jest pe³na
    if (size == capacity)
        return 1;
    return 0;
}

int HashTable::hashFunction(std::string s)
{
    // Tworzymy zmienn¹ do przechowywania klucza
    int uniqueKey = 0;

    // Unikalny klucz jest sum¹ wartoœci liter wchodz¹cych w ³añcuch tekstowych w kodzie ASCII
    for (int i = 0; i < s.size(); i++)
        uniqueKey += s[i];

    return uniqueKey % capacity;
}

int HashTable::insert(std::string s)
{
    // Mechanizm obs³ugi kolizji: Próbkowanie liniowe

    // Jeœli tablica nie jest pe³na, mo¿liwe jest dodanie nowego elementu
    if (!full())
    {
        // Tworzymy zmienn¹ odpowiadaj¹c¹ za zliczanie o ile nale¿y przesun¹æ 
        int tries = 0;

        // Pobieramy wartoœæ funkcji haszuj¹cej dla wstawianego ³añcucha tekstowego
        int hash = hashFunction(s);

        // Przechodzimy przez kolejne elementy tablicy
        while (T[(hash + tries) % capacity] != "NULL" && T[(hash + tries) % capacity] != "FREE")
            tries++;

        // W wolne miejsce wstawiamy nowy ³añcuch tekstowy
        T[(hash + tries) % capacity] = s;

        // Zwiêkszamy rozmiar tablicy
        size++;
        return tries;
    }

    // Jeœli tablica jest pe³na, zwróæ odpowiedni¹ wartoœæ
    return -1;
}

void HashTable::del(std::string s)
{
    // Jeœli tablica nie jest pusta, mo¿emy wykonaæ usuwanie
    if (!empty())
    {
        // Tworzymy zmienn¹ odpowiadaj¹c¹ za zliczanie o ile nale¿y przesun¹æ 
        int tries = 0;

        // Pobieramy wartoœæ funkcji haszuj¹cej dla wstawianego ³añcucha tekstowego
        int hash = hashFunction(s);

        // Przechodzimy przez kolejne elementy tablicy, sprawdzaj¹c czy natrafiliœmy na element do usuniêcia
        while (T[(hash + tries) % capacity] != "NULL" && tries < capacity)
        {
            // Jeœli natrafiliœmy na element do usuniêcia, zmieniamy wartoœæ komórki tablicy na "FREE"
            if (T[hash + tries] == s)
                T[hash + tries] = "FREE";

            // Jeœli nie natrafiliœmy na element do usuniêcia, zwiêkszamy wartoœæ przesuniêcia
            tries++;
        }
    }
}

std::string HashTable::search(std::string s)
{
    // Jeœli tablica nie jest pusta, mo¿emy j¹ przeszukaæ
    if (!empty())
    {
        // Tworzymy zmienn¹ odpowiadaj¹c¹ za zliczanie o ile nale¿y przesun¹æ 
        int tries = 0;

        // Pobieramy wartoœæ funkcji haszuj¹cej dla wstawianego ³añcucha tekstowego
        int hash = hashFunction(s);

        // Przechodzimy przez kolejne elementy tablicy
        while (T[(hash + tries) % capacity] != "NULL" && tries < capacity)
        {
            // Sprawdzamy czy znaleŸliœmy po¿¹dany element
            if (T[hash + tries] == s)
            {
                // Jeœli znaleŸliœmy, zwracamy komunikat
                std::cout << s << " znaleziono na indeksie: " << hash + tries << std::endl;
                return T[hash + tries];
            }

            // Jeœli nie znaleŸliœmy elementu, szukamy dalej, przesuwaj¹c siê o 1
            tries++;
        }

        return "Brak";
    }

    // Jeœli tablica jest pusta, zwracamy odpowiedni komunikat
    return "Tablica jest pusta";
}




