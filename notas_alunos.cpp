#include <iostream>
using namespace std;

int main()
{
    int numero_alunos;
    cout << "Quantos alunos você quer calcular? ";
    cin >> numero_alunos;
    string nome_aluno[100];
    float nota_aluno[100];
    int idade_aluno[100];

    for(int i = 0; i < numero_alunos; i++)
    {
        cout << "Qual o nome do aluno? ";
        cin >> nome_aluno[i];
        cout << "Quantos anos ele tem? ";
        cin >> idade_aluno[i];
        cout << "Qual nota ele tirou? ";
        cin >> nota_aluno[i];
        cout << "Dados do aluno " << i + 1 << " " << "salvos \n" << endl;
    }
    
    cout << "Confira abaixo os dados salvos: " << endl;
    for(int i = 0; i < numero_alunos; i++)
    {
        cout << "\n";
        cout << "Nome do aluno " << i + 1 << ": " << nome_aluno[i] << endl;
        cout << "Idade do aluno " << i + 1 << ": " << idade_aluno[i] << endl;
        cout << "Nota do aluno " << i + 1 << ": " << nota_aluno[i] << endl;
        if(nota_aluno[i] >= 7)
        {
            cout << "Passado";
        }
        else
        {
            cout << "Reprovado";
        }
        cout << "\n";
    }
    return 0;
}