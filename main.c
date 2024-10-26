#include "paciente.h"
#include <stdio.h>

int main() {
    paciente_t infopaciente;

    printf("Qual o nome do paciente? ");
    scanf("%s", infopaciente.nome);

    printf("Qual a idade do paciente? ");
    scanf("%hd", &infopaciente.idade);

    paciente_t *pacienteptr;
    pacienteptr = &infopaciente;

    alocacao_paciente( pacienteptr,  infopaciente.nome,  infopaciente.idade);

    return 0;
}