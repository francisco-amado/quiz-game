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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[0].solution);

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
            if (answer[i] == KEY[1]) {
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[1].solution);

        printf("Terceira pergunta:\n");
        printf("%s\n", getQuestionList().questionList[2].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[2].wrongAnswer1);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[2].wrongAnswer2);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[2].solution);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[2].wrongAnswer3);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[2].solution);

        printf("Quarta pergunta:\n");
        printf("%s\n", getQuestionList().questionList[3].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[3].wrongAnswer1);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[3].wrongAnswer2);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[3].wrongAnswer3);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[3].solution);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            if(answer[i] == KEY[3]) {
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[3].solution);

        printf("Quinta pergunta:\n");
        printf("%s\n", getQuestionList().questionList[4].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[4].solution);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[4].wrongAnswer2);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[4].wrongAnswer3);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[4].wrongAnswer1);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            if(answer[i] == KEY[0]) {
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[4].solution);

        printf("Sexta pergunta:\n");
        printf("%s\n", getQuestionList().questionList[5].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[5].wrongAnswer2);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[5].solution);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[5].wrongAnswer3);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[5].wrongAnswer1);
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[5].solution);

        printf("Sétima pergunta:\n");
        printf("%s\n", getQuestionList().questionList[6].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[6].wrongAnswer2);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[6].wrongAnswer3);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[6].solution);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[6].wrongAnswer1);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[6].solution);

        printf("Oitava pergunta:\n");
        printf("%s\n", getQuestionList().questionList[7].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[7].wrongAnswer2);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[7].wrongAnswer3);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[7].wrongAnswer1);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[7].solution);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            if(answer[i] == KEY[3]) {
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[7].solution);

        printf("Nona pergunta:\n");
        printf("%s\n", getQuestionList().questionList[8].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[8].solution);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[8].wrongAnswer3);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[8].wrongAnswer1);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[8].wrongAnswer2);
        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            printf("Jogador %d\n", i);
            scanf(" %c", &answer[i]);
            printf("\n");
        }

        printf("\n");

        for(int i = 1; i < numberOfPlayers + 1; i++) {
            if(answer[i] == KEY[0]) {
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[8].solution);

        printf("Última pergunta:\n");
        printf("%s\n", getQuestionList().questionList[9].problem);
        printf("%c. %s\n", KEY[0], getQuestionList().questionList[9].wrongAnswer3);
        printf("%c. %s\n", KEY[1], getQuestionList().questionList[9].solution);
        printf("%c. %s\n", KEY[2], getQuestionList().questionList[9].wrongAnswer1);
        printf("%c. %s\n", KEY[3], getQuestionList().questionList[9].wrongAnswer2);
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

        printf("A resposta certa era: %s\n", getQuestionList().questionList[9].solution);

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