#pragma once

class HashTable
{
public:
    std::string* T;
    int capacity;
    int size;
public:
    HashTable(int c);
    bool empty();
    bool full();
    int hashFunction(std::string s);
    int insert(std::string s);
    void del(std::string s);
    std::string search(std::string s);
    void print();
};
