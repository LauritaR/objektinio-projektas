#include "mylib.h"


struct studentukas{
    string vardas, pavarde; 
    vector<int> pazymiukai; //struktura objektams saugoti
    int egzas;
};

void pildyk(studentukas &temp);
float galutinisVID(studentukas &temp);
float galutinisMed(studentukas &temp);
bool sortPavarde(studentukas& a, studentukas& b);
bool sortVardas(studentukas&a, studentukas&b);
void spausdinimas(studentukas &temp);
void skaitymas(string read_studentukas, string write_studentukas);

