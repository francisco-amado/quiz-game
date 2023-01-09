#include <stdio.h>
#include <locale.h>
#include "questions.c"

int main() {

    setlocale(LC_ALL, "");
    
    char startGame;
    int score[4] = {0, 0, 0, 0};
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
        printf("%s\n", getQuestionList().questionList[0].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[0].wrongAnswer1);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[0].wrongAnswer2);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[0].solution);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[0].wrongAnswer3);
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
        printf("%s\n", getQuestionList().questionList[1].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[1].wrongAnswer1);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[1].solution);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[1].wrongAnswer2);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[1].wrongAnswer3);
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