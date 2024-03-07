#include <stdio.h>

int main() {
    char scelta;

    printf("Benvenuto al gioco di quiz!\n");
    printf("Lo scopo del gioco è rispondere correttamente alle domande per accumulare punti.\n");

    while (scelta != 'B' && scelta != 'b') { 
        printf("\nMenu Iniziale:\n");
        printf("A) Iniziare una nuova partita\n");
        printf("B) Uscire dal gioco\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        if (scelta == 'A' || scelta == 'a') {
            char nome[20];
            printf("\nInserisci il tuo nome: ");
            scanf("%s", nome);
            printf("Benvenuto, %s!\n", nome);

            int punteggio = 0;

            printf("\nDomanda 1: Qual è la capitale della Francia?\n");
            printf("A) Parigi\nB) Roma\nC) Nizza\n");
            char risposta1;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta1);
            if (risposta1 == 'A' || risposta1 == 'a') {
                punteggio++;
            }

            printf("\nDomanda 2: Quale artista ha dipinto il soffitto della Cappella Sistina a Roma?\n");
            printf("A) Donatello\nB) Michelangelo\nC) Raffaello\n");
            char risposta2;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta2);
            if (risposta2 == 'B' || risposta2 == 'b') {
                punteggio++;
            }

            printf("\nDomanda 3: In che anno fini la prima guerra mondiale?\n");
            printf("A) 1901\nB) 1717\nC) 1918\n");
            char risposta3;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta3);
            if (risposta3 == 'C' || risposta3 == 'c') {
                punteggio++;
            }

            printf("\nDomanda 4: Da quale città provengono i Beatles?\n");
            printf("A) Roma\nB) Los Angeles\nC) Liverpool\n");
            char risposta4;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta4);
            if (risposta4 == 'C' || risposta4 == 'c') {
                punteggio++;
            }

            printf("\nDomanda 5: Quanti campionati di Formula 1 ha vinto Michael Schumacher?\n");
            printf("A) 10\nB) 7\nC) 2\n");
            char risposta5;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta5);
            if (risposta5 == 'B' || risposta5 == 'b') {
                punteggio++;
            }

            printf("\nDomanda 6: Quale è l'elemento chimico con simbolo 'O'?\n");
            printf("A) Ossigeno\nB) Oro\nC) Osmio\n");
            char risposta6;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta6);
            if (risposta6 == 'A' || risposta6 == 'a') {
                punteggio++;
            }

            printf("\nDomanda 7: Quanti Oscar ha vinto Leonardo Di Caprio?\n");
            printf("A) 0\nB) 1\nC) 12\n");
            char risposta7;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta7);
            if (risposta7 == 'B' || risposta7 == 'b') {
                punteggio++;
            }

            printf("\nDomanda 8: Quanti giorni ci vogliono affinché la Terra orbiti attorno al Sole?\n");
            printf("A) 1022\nB) 365\nC) 400\n");
            char risposta8;
            printf("Scegli la risposta corretta (A, B o C): ");
            scanf(" %c", &risposta8);
            if (risposta8 == 'B') {
                punteggio++;
            }

            printf("\nIl tuo punteggio finale è: %d\n", punteggio);
        } 
    }

    printf("\nGrazie per aver giocato. Arrivederci!\n");

    return 0;
}