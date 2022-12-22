#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct question {
    char question[100];
    char solution[100];
    char wrongAnswer1[100];
    char wrongAnswer2[100];
    char wrongAnswer3[100];  
} question;

int main() {

    setlocale(LC_ALL, "");

    question q1;
    strcpy(q1.question, "Quantos minutos dura um jogo de futebol?");
    strcpy(q1.solution, "90");
    strcpy(q1.wrongAnswer1, "70");
    strcpy(q1.wrongAnswer2, "50");
    strcpy(q1.wrongAnswer3, "60");

    question q2;
    strcpy(q2.question, "Em que ano foi lançada a Sony Playstation?");
    strcpy(q2.solution, "1994");
    strcpy(q2.wrongAnswer1, "1989");
    strcpy(q2.wrongAnswer2, "1997");
    strcpy(q2.wrongAnswer3, "1995");
    
    char startGame;
    int score[4];
    char answer[4];
    const char KEY[] = {'A', 'B', 'C', 'D'};
    int numberOfPlayers;

    printf("Quiz Game\n");
    printf("Y para começar / E para sair\n");
    printf("\n");
    gameSelection: scanf(" %c", &startGame);

    if(startGame == 'Y') {
        printf("Escolha o número de jogadores (até 4):\n");
        scanf(" %d", &numberOfPlayers);
        printf("\n");

        printf("Primeira pergunta:\n");
        printf("%s\n", q1.question);
        printf("%c. %s\n", KEY[0], q1.wrongAnswer1);
        printf("%c. %s\n", KEY[1], q1.wrongAnswer2);
        printf("%c. %s\n", KEY[2], q1.solution);
        printf("%c. %s\n", KEY[3], q1.wrongAnswer3);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            if(answer[i] == KEY[2]) {
                printf("Certo!\n");
                score[i] += 1;
                printf("Pontuação: %d\n", score[i]);
                printf("\n");
            } else {
                printf("Errado...\n");
                printf("Pontuação: %d\n", score[i]);
                printf("\n");
            }
        }

        printf("Segunda pergunta:\n");
        printf("%s\n", q2.question);
        printf("%c. %s\n", KEY[0], q2.wrongAnswer1);
        printf("%c. %s\n", KEY[1], q2.solution);
        printf("%c. %s\n", KEY[2], q2.wrongAnswer2);
        printf("%c. %s\n", KEY[3], q2.wrongAnswer3);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

         for(int i = 1; i < numberOfPlayers + 1; i++) {
            if(answer[i] == KEY[1]) {
                printf("Certo!\n");
                score[i] += 1;
                printf("Pontuação: %d\n", score[i]);
                printf("\n");
            } else {
                printf("Errado...\n");
                printf("Pontuação: %d\n", score[i]);
                printf("\n");
            }
        }

        printf("Acabou o jogo!\n");
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            printf("Pontuação: %d\n", score[i]);
            printf("\n");
        }

    } else if(startGame == 'E'){
        printf("Obrigado por jogar!\n");
    } else {
        printf("Carregue Y ou E para escolher\n");
        goto gameSelection;
    }

    return 0;
}