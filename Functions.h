// Alix Field		afield@cnm.edu		Field_P4

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H 

using namespace std;


//Prototypes: Function Decleration
void WriteHeader();
string AskName();
void AskPlayerNum(int UserWhite[], int *userRed);
void GenerateGameNum(int CompWhite[], int &compRed);
void Sort(int Num[], int total);
string CheckResults(int UserNum[], int userRed, int CompNum[], int compRed);
void PrintNumbers(string name, int white[], int red);



#endif 