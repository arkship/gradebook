#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

int main () {

string nomeCurso;
cout << "Qual o nome do seu curso, truta?" << endl;
getline(cin, nomeCurso);

GradeBook myGradeBook(nomeCurso);

myGradeBook.displayMessage();

myGradeBook.mediaClasse();
  return 0;
}
