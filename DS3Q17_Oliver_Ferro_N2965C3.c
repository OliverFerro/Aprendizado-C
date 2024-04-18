#include <stdio.h>
#include <string.h>

struct Aluno {
    char ra[8];
    char nome[50];
             };

int VerificarRA(struct Aluno aluno, char *ra) {
    // Lembrar que o STRCMP compara 2 strings 
    if (strcmp(aluno.ra, ra) == 0) {
        return 1; // RA certo
    } else {
        return 0; // RA errado
    }
}

int main() {
    struct Aluno aluno = {"N2965C3", "Oliver Alexandrino Ferro"};
    char ra[8];
    
    printf("Digite seu RA: ");
    scanf("%s", ra);

    if (VerificarRA(aluno, ra)) {
        printf("RA pertence a: %s \n", aluno.nome);
    } else {
        printf("RA incorreto. Acesso negado.\n");
    }

    return 0;
}

