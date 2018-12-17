#include <string>
#include <iostream>
#include "GradeBook.h"

using namespace std;


  GradeBook::GradeBook (string NomeCurso){
    setNomeCurso(NomeCurso);
  }
  void GradeBook::setNomeCurso (string NomeCurso) {
    if (NomeCurso.length() <= 25)
      this->NomeCurso = NomeCurso;
    else {
      this->NomeCurso = NomeCurso.substr(0, 25);
      cout << "O nome do curso ultrapassou 25 caractereres\n"
           << "Pegamos apenas os 25 primeiros"<< endl;
    }
  }
  string GradeBook::getNomeCurso () {
     return NomeCurso;
  }

  void GradeBook::displayMessage () {
    cout << "Bem vindo ao curso de " << getNomeCurso() << "!" << endl;
  }
  void GradeBook::mediaClasse () {
    double media = 0;
    int totalAlunos = 0;
    float valor = 0;

   cout << "Insira a quantidade de alunos da classe" << endl;
   cin >> totalAlunos;
    for (auto i = 0;i < totalAlunos; i++) {
      cout << "Insira a nota do " << i+1 << " aluno:" << endl;
      cin >> valor;
      media += valor;
    }
    cout.precision(2);
    cout << "A média da classe foi: " << fixed << static_cast<double>(media/totalAlunos) << endl;
  }
