#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int col, row, n, numSeats,i,row,col,attempts,seatCount;
char arr[9][9];

void displaySeatingChart(char arr[9][9]) { //�i�ܮy��� 
    printf("   ");//�Ů�A�Ϩ���
    for (col = 1; col <= 9; col++) {
        printf("%2d ", col);
    }
    printf("\n");
    for (row = 8; row >= 0; row--) {
        printf("%2d ", row + 1);
        for (col = 0; col < 9; col++) {
            printf("%2c ", arr[row][col]);
        }
        printf("\n");
    }
}

void generateSeatingChart(char arr[9][9]) {
    memset(arr, '-', sizeof(char) * 9 * 9);// �ϥ�'-'��ܮy���Ŧ� 
    for (n = 0; n < 10; n++) {
        int row, col;
        do {
            row = rand() % 9;
            col = rand() % 9;
        } while (arr[row][col] == '*');
        arr[row][col] = '*';// �Хܮy��w���H
    }
}

int arrangeSeats(char arr[9][9], int numSeats) {
    if (numSeats >= 1 && numSeats <= 3) {
        int row, col;
        do {
            row = rand() % 9;
            col = rand() % (9 - numSeats + 1);
        } while (arr[row][col] != '-');
        for (i = 0; i < numSeats; i++) {
            arr[row][col + i] = '@';// �ХܩҦw�ƪ��y��
        }
        return 1;  
    } else if (numSeats == 4) {
        for (row = 0; row < 9; row++) {
            for (col = 0; col <= 6; col++) {
                if (arr[row][col] == '-' && arr[row][col + 1] == '-' && arr[row][col + 2] == '-' && arr[row][col + 3] == '-') {
                    for (i = 0; i < 4; i++) {
                        arr[row][col + i] = '@';
                    }
                    return 1;  
                }
            }
        }
        for (row = 0; row <= 6; row++) {
            for (col = 0; col < 9; col++) {
                if (arr[row][col] == '-' && arr[row + 1][col] == '-' && arr[row + 2][col] == '-' && arr[row + 3][col] == '-') {
                    for (i = 0; i < 4; i++) {
                        arr[row + i][col] = '@';
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}
void chooseSeats(int seatCount) {
    int row, col, valid;
    displaySeatingChart(arr);  // Show the seating chart before choosing
    for (i = 0; i < seatCount; i++) {
        do {
            valid = 1;
            printf("�п�ܮy�� %d (�� �C): ", i + 1);
            scanf("%d %d", &row, &col);
            if (row < 1 || row > 9 || col < 1 || col > 9 || arr[row - 1][col - 1] != '-') {
                printf("�L�Ŀ�ܡA�Э��s��ܡC\n");
                valid = 0;
            }
        } while (!valid);
        arr[row - 1][col - 1] = '@';
    }
}

int main(void) {
//1.                                               
puts("                              .:-:");                               
puts("                             +#+++.::");                            
puts("                    .-++-   .#+    -#+.");                          
puts("                   -#+--#-   -#+    .**.");                         
puts("                   --   #+    .:     .*+");                         
puts("                  -=    =-.-=**#+       =*=:.");                    
puts("                  *+    .**+-:.   ..    .:=*#+:");                  
puts("                  *+    .:       .##:       .=+:");                 
puts("                  +*              :-            :#+:");             
puts("                  ..   :#*.       :-+**.         .=#+.");           
puts("                 =#.   .=-   .-=*#*=-.             .=-");           
puts("                +#:     .:=+**+-:.                    -*:");        
puts("               =#-     .*+=:.                          =#-");       
puts("               =-                                       =#:");      
puts("              -:                                         ..");      
puts("             -#-                                         -#.");     
puts("             **                                          -#.");     
puts("            :#-                                        .-*+");      
puts("            =#.                                .:-=: =**+-");       
puts("            .:                              .=*#*+=:");             
puts("            =:                             =#+-.");                 
puts("           .#-                          .=-..");                    
puts("           .#=            ..:::. .       -#+.");                    
puts("            **         .=*#**++=:#:     .:=#=");                    
puts("            -+     .-+..=:.     -#:.:.  =*+-.");                    
puts("             .*=--+#*:          :##*=.:. .-:.");                    
puts("              :=++=:             ..  .+#+==*#+-:.");                
puts("                                       .:=+*#######*-");            
puts("                                             ..::...");             
 
    system("PAUSE");
	system("CLS");//�M���e�� 
		
    char choice;
    int password;

    srand(time(NULL));  // ���Ѥ@���H���� 
    generateSeatingChart(arr);  // �ͦ��y��� 

    for (attempts = 0; attempts < 3; attempts++) {
        printf("�п�J�K�X�G");
        scanf("%d", &password);

        if (password == 2024) {
            printf("�w��\n");
            getchar();  // �M������
//2.
while (1) {
    printf("�D���\n");
    printf("-----------Booking System----------\n");
    printf("|  a.Available seats               |\n");
    printf("|  b.Arrange for you               |\n");
    printf("|  c.Choose by yourself            |\n");  
 	printf("|  d.Exit                          |\n");
    printf("-----------------------------------\n");

    fflush(stdin);
    scanf("%c", &choice);
//3.
switch (choice) {
    case 'a':
    case 'A':
        displaySeatingChart(arr);//�i�ܮy��� 
        system("pause");
        system("CLS");  // �M���e��
        break;
//4.
    case 'b':
    case 'B':
        while (1) {
            printf("�z�ݭn�h�֭Ӯy��H (1~4): ");
            scanf("%d", &n);
         	if (n >= 1 && n <= 4) {
            if (arrangeSeats(arr, n)) {
                displaySeatingChart(arr);
                printf("���z���w�ƬO�_���N (y/n): ");
                fflush(stdin);
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y') {
                    system("pause");
                    system("CLS");//�M���e�� 
                    break;
                } else if (choice == 'N' || choice == 'n') {
                    generateSeatingChart(arr);  // ���s�ͦ��y��
                    system("CLS");  // �M���e��
                    break;
                } else {
                    printf("�L�Ŀ�J�I\n");
                }
            } else {
                printf("�D�`��p�A�L�k�w�Ʈy��C\n");
            } 
        } else {
            printf("�L�Ŀ�J�I�п�J����1�M4�������Ʀr�C\n");
        }
    }
    break;
//5.
    case 'c':
    case 'C':
        printf("�z�ݭn�w�w�X�Ӯy��(1~4)? ");
        scanf("%d", &seatCount);
        if (seatCount < 1 || seatCount > 4) {
            printf("��J���~, ���b��^�D���...\n");
        } else {
            chooseSeats(seatCount);
        }
        break;
//6.
    case 'd':
    case 'D':
        printf("Continue? (y/n): ");
        fflush(stdin);//�M������ 
        choice = getchar();
        if (choice == 'N' || choice == 'n') {
        	printf("�P�±z���ϥΡI\n");
            return 0;
        } else if (choice == 'Y' || choice == 'y') {
            system("CLS");  // �M���e��
            break; 
        } else {
            printf("��J���~�I\n");
        }
        break;

    default:
        printf("��J���~�I\n");
        break;
}
}
} else {
    printf("�K�X���~�I\n");
}
    }

    printf("�K�X���~�h���A�еy�Z�A�աC\n");
    return 0;
}

