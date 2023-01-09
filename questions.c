#include <string.h>

typedef struct question {
    char problem[100];
    char solution[100];
    char wrongAnswer1[100];
    char wrongAnswer2[100];
    char wrongAnswer3[100];
} question;

typedef struct questionList {
    struct question questionList[10];
} questionList;

struct questionList getQuestionList() {

    question q1;
    strcpy(q1.problem, "Quantos minutos dura um jogo de futebol?");
    strcpy(q1.solution, "90");
    strcpy(q1.wrongAnswer1, "70");
    strcpy(q1.wrongAnswer2, "50");
    strcpy(q1.wrongAnswer3, "60");

    question q2;
    strcpy(q2.problem, "Em que ano foi lançada a Sony Playstation?");
    strcpy(q2.solution, "1994");
    strcpy(q2.wrongAnswer1, "1989");
    strcpy(q2.wrongAnswer2, "1997");
    strcpy(q2.wrongAnswer3, "1995");

    questionList ql;
    ql.questionList[0] = q1;
    ql.questionList[1] = q2;

    return ql;
};

