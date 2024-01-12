#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Global Vars
int run = 0;
int over = 0;
int ball = 0;
int wicket = 0;

void printLiveScore() {
    printf("\nLive Score:\n");
    printf("Score: %d / %d\n", run, wicket);
    printf("Overs: %d.%d\n", over, ball);

}

int main() {
    int score, w, o;
    printf("Enter overs and wickets: ");
    scanf("%d%d", &o, &w);
    printf("%d overs & %d wickets", o, w);
    while (1) {
       //printLiveScore();

        printf("\n Show live score, '0' press again ");
        scanf("%d", &score);
        getchar();
          // Consume the newline character left in the buffer

           srand(time(NULL));
                int random = (rand() % 7) + 1 ;

        switch (random) {
            case 0: {
                 srand(time(NULL));
                int random = (rand() % 2) ;
                switch (random) {
                    case 0: {
                        wicket += 1;
                        ball += 1;
                        printf("\nWe have a wicket\n");
                        break;
                    }
                    case 1: {
                        ball += 1;
                        printf("\nDot ball\n");
                        break;
                    }
                }
                break;
            }

            case 1: {
                srand(time(NULL));
                int random = (rand() % 4);
                switch (random) {
                    case 0: {
                        run += 1;
                        ball += 1;
                        printf("\nSingle run\n");
                        break;
                    }
                    case 1: {
                        run += 1;
                        printf("\nWide ball\n");
                        break;
                    }
                    case 2: {
                        run += 1;
                        printf("\nNo ball, Free hit\n");
                        break;
                    }
                    case 3: {
                        run += 1;
                        ball += 1;
                        wicket += 1;
                        printf("\nWicket gone and Single run.\n");
                        break;
                    }
                    default:
                        printf("\nDad Ball\n");
                }
                break;
            }
            case 2: {
                srand(time(NULL));
                int random = (rand() % 5);
                switch (random) {
                    case 0: {
                        run += 2;
                        ball += 1;
                        printf("\nDouble run.\n");
                        break;
                    }
                    case 1: {
                        run += 2;
                        printf("\nWide ball and single run.\n");
                        break;
                    }
                    case 2: {
                        run += 2;
                        printf("\nNo ball, Free hit and single run.\n");
                        break;
                    }
                    case 3: {
                        run += 2;
                        ball += 1;
                        wicket += 1;
                        printf("\nWicket gone and double run.\n");
                        break;
                    }
                    default:
                        printf("\nDad Ball\n");
                }
                break;
            }
          case 3 : {
                srand(time(NULL));
                int random = (rand() % 4);

                switch(random){
                case 0 : {
                run +=3;
                ball +=1;
                printf("\n Triple run. \n");
                break;
                }
                case 1 : {
                run +=3;
                printf("\nWide ball and double run. \n");
                break;
                }
                case 2 : {
                run +=3;
                //ball -=1;
                printf("\nNo ball, Free hit and double run.\n");
                break;
                }
                case 3 : {
                run +=3;
                ball +=1;
                wicket +=1;
                printf("\nWicket gone and triple run.\n");
                break;
                }
                default :
                    printf("\nDad Ball\n");
                }
                break;
            }
            case 4: {
                srand(time(NULL));
                int random = (rand() % 1);
                switch (random) {
                    case 0: {
                        run += 4;
                        ball += 1;
                        printf("\nIt is a four'\n");
                        break;
                    }
                    default:
                        printf("\nDad Ball\n");
                }
                break;
            }
            case 5: {

                srand(time(NULL));
                int random = (rand() % 2);
                switch (random) {
                    case 0: {
                        run += 5;
                        printf("\nWide ball and four.\n");
                        break;
                    }
                    case 1: {
                        run += 5;
                        printf("\nNo ball, Free hit and four.\n");
                        break;
                    }
                    default:
                        printf("\nDad Ball\n");
                }
                break;
            }
            case 6: {

                srand(time(NULL));
                int random = (rand() % 1);
                switch (random) {
                    case 0: {
                        run += 6;
                        ball += 1;
                        printf("\nIt is a Six\n");
                        break;
                    }
                    default:
                        printf("\nDad Ball\n");
                }
                break;
            }
            case 7: {

                srand(time(NULL));
                int random = (rand() % 1);
                switch (random) {
                    case 0: {
                        run += 7;
                        printf("\nNo ball, Free hit and six.\n");
                        break;
                    }
                    default:
                        printf("\nDad Ball\n");
                }
                break;
            }
            case 400: {
                exit(1);
                // Exit code
                break;
            }
            default: {
                printf("\nThis is an invalid input\n");
            }
        }

        if (ball == 6) {
            over += 1;
            ball = 0;
        }
        if (wicket == w) {
                printf("\nWicket ended.\n");
            printf("\nInnings Ended\n");
            //printf("Target : %d",run+1);
            break;
        }
        if (over == o) {
                printf("\nOver ended.\n");
            printf("\nInnings Ended\n");
            //printf("Target : %d",run+1);
            break;
        }
        printLiveScore();

    }
    printLiveScore();

    printf("\nTarget : %d",run+1);
}

