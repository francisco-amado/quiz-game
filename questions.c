#include <string.h>
#include <locale.h>

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

    setlocale(LC_ALL, "");

    question q1;
    strcpy(q1.problem, "Qual foi a primeira selecção a ganhar o campeonato do mundo de futebol da FIFA?");
    strcpy(q1.solution, "Uruguai");
    strcpy(q1.wrongAnswer1, "Brasil");
    strcpy(q1.wrongAnswer2, "França");
    strcpy(q1.wrongAnswer3, "Inglaterra");

    question q2;
    strcpy(q2.problem, "Em que ano foi lançada a Sony Playstation?");
    strcpy(q2.solution, "1994");
    strcpy(q2.wrongAnswer1, "1992");
    strcpy(q2.wrongAnswer2, "1997");
    strcpy(q2.wrongAnswer3, "1995");

    question q3;
    strcpy(q3.problem, "Quem foi o primeiro presidente de Portugal após o 25 de Abril?");
    strcpy(q3.solution, "António de Spínola");
    strcpy(q3.wrongAnswer1, "Francisco da Costa Gomes");
    strcpy(q3.wrongAnswer2, "Adelino da Palma Carlos");
    strcpy(q3.wrongAnswer3, "Mário Soares");

    question q4;
    strcpy(q4.problem, "Quantas são as leis da termodinâmica?");
    strcpy(q4.solution, "3");
    strcpy(q4.wrongAnswer1, "4");
    strcpy(q4.wrongAnswer2, "2");
    strcpy(q4.wrongAnswer3, "5");

    question q5;
    strcpy(q5.problem, "Como se chama o tipo de memória volátil mais utilizado em computadores?");
    strcpy(q5.solution, "RAM");
    strcpy(q5.wrongAnswer1, "ROM");
    strcpy(q5.wrongAnswer2, "Flash");
    strcpy(q5.wrongAnswer3, "SSD");

    question q6;
    strcpy(q6.problem, "Qual é a capital do Cazaquistão?");
    strcpy(q6.solution, "Astana");
    strcpy(q6.wrongAnswer1, "Nur-Sultan");
    strcpy(q6.wrongAnswer2, "Almaty");
    strcpy(q6.wrongAnswer3, "Aktobe");

    question q7;
    strcpy(q7.problem, "Qual é o termo correcto para designar uma descida gradual da taxa de inflação?");
    strcpy(q7.solution, "Desinflação");
    strcpy(q7.wrongAnswer1, "Deflação");
    strcpy(q7.wrongAnswer2, "Estagflção");
    strcpy(q7.wrongAnswer3, "Desvalorização");

    question q8;
    strcpy(q8.problem, "O que significa em português a palavra latina \"parvum\"?");
    strcpy(q8.solution, "Pequeno");
    strcpy(q8.wrongAnswer1, "Parvo");
    strcpy(q8.wrongAnswer2, "Estúpido");
    strcpy(q8.wrongAnswer3, "Burro");

    question q9;
    strcpy(q9.problem, "Qual era o nome civil do papa católico João XXI?");
    strcpy(q9.solution, "Pedro Julião");
    strcpy(q9.wrongAnswer1, "Nicholas Breakspear");
    strcpy(q9.wrongAnswer2, "Albino Luciani");
    strcpy(q9.wrongAnswer3, "Pierre de Beaufort");

    question q10;
    strcpy(q10.problem, "Qual foi a produção que tornou conhecida mundialmente a actriz norte-americana "
                        "Jennifer Coolidge?");
    strcpy(q10.solution, "American Pie");
    strcpy(q10.wrongAnswer1, "The White Lotus");
    strcpy(q10.wrongAnswer2, "2 Broke Girls");
    strcpy(q10.wrongAnswer3, "Joey");

    questionList ql;
    ql.questionList[0] = q1;
    ql.questionList[1] = q2;
    ql.questionList[2] = q3;
    ql.questionList[3] = q4;
    ql.questionList[4] = q5;
    ql.questionList[5] = q6;
    ql.questionList[6] = q7;
    ql.questionList[7] = q8;
    ql.questionList[8] = q9;
    ql.questionList[9] = q10;

    return ql;
}

