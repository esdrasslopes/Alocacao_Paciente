#include "paciente.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alocacao_paciente(paciente_t *paciente, char *nome, short idade){
    int leitos[5][10];
    int andar;
    int leito;
    char localpaciente[5][10][100]; // O 100 representa o número de caracteres aceitos;

    srand(time(NULL)); // O time pega um número inteiro que representaria os segundo e sorteio no rand. O null seria um especificador de que não interessa dia ou coisa assim mas apenas o número inteiro.

    for (andar = 0; andar < 5; andar++){
        for (leito = 0; leito < 10; leito++){
            leitos[andar][leito] = (andar + 1) * 100 + leito;  // Faz com que os leitos tenham valores de 100 até 500 e o andar seja de 1 a 5 e não de 0 a 4.
            snprintf(localpaciente[andar][leito], 100, "%s", ""); // guarda em cada posição dessa matriz um espaço vazio;
        }
    }

    andar = rand() % 5;
    leito = rand() % 10;
    // Andar e leito recebem número aleatórios 

    snprintf(localpaciente[andar][leito], 100, "%s", nome);
    //Utiliza os números aleatórios gerados e nessa posição da martriz guarda o nome do paciente;

    for (andar = 0; andar < 5; andar++) {
        for (leito = 0; leito < 10; leito++) {
            if(localpaciente[andar][leito][0] != '\0'){
                 printf("Paciente : %s \nIdade: %hd \nLeito:%d no andar %d\n", nome, idade,  leitos[andar][leito], andar  +1); // Como cada posição da matriz tinha um " " e em uma posição aleátoria foi adicionado o nome do paciente, é checado se a primeira posição de cada posição na mtriz é diferente de \0 que sempre é colocado em uma string.
            }
        }
    }
}
