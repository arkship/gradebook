#ifndef GRADEBOOK_H
#define GRADEBOOK_H

using namespace std;

#include <string>


class GradeBook {
  private:
    string NomeCurso;

  public:
    GradeBook(string);
    void setNomeCurso (string);
    string getNomeCurso ();
    void displayMessage();
    void mediaClasse();
  };

#endif
