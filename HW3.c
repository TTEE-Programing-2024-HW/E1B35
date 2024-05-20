#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int col, row, n, numSeats,i,row,col,attempts,seatCount;
char arr[9][9];

void displaySeatingChart(char arr[9][9]) { //展示座位表 
    printf("   ");//空格，使其對齊
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
    memset(arr, '-', sizeof(char) * 9 * 9);// 使用'-'表示座位表空位 
    for (n = 0; n < 10; n++) {
        int row, col;
        do {
            row = rand() % 9;
            col = rand() % 9;
        } while (arr[row][col] == '*');
        arr[row][col] = '*';// 標示座位已有人
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
            arr[row][col + i] = '@';// 標示所安排的座位
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
            printf("請選擇座位 %d (行 列): ", i + 1);
            scanf("%d %d", &row, &col);
            if (row < 1 || row > 9 || col < 1 || col > 9 || arr[row - 1][col - 1] != '-') {
                printf("無效選擇，請重新選擇。\n");
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
	system("CLS");//清除畫面 
		
    char choice;
    int password;

    srand(time(NULL));  // 提供一組隨機數 
    generateSeatingChart(arr);  // 生成座位表 

    for (attempts = 0; attempts < 3; attempts++) {
        printf("請輸入密碼：");
        scanf("%d", &password);

        if (password == 2024) {
            printf("歡迎\n");
            getchar();  // 清除換行
//2.
while (1) {
    printf("主選單\n");
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
        displaySeatingChart(arr);//展示座位表 
        system("pause");
        system("CLS");  // 清除畫面
        break;
//4.
    case 'b':
    case 'B':
        while (1) {
            printf("您需要多少個座位？ (1~4): ");
            scanf("%d", &n);
         	if (n >= 1 && n <= 4) {
            if (arrangeSeats(arr, n)) {
                displaySeatingChart(arr);
                printf("為您的安排是否滿意 (y/n): ");
                fflush(stdin);
                scanf(" %c", &choice);
                if (choice == 'Y' || choice == 'y') {
                    system("pause");
                    system("CLS");//清除畫面 
                    break;
                } else if (choice == 'N' || choice == 'n') {
                    generateSeatingChart(arr);  // 重新生成座位
                    system("CLS");  // 清除畫面
                    break;
                } else {
                    printf("無效輸入！\n");
                }
            } else {
                printf("非常抱歉，無法安排座位。\n");
            } 
        } else {
            printf("無效輸入！請輸入介於1和4之間的數字。\n");
        }
    }
    break;
//5.
    case 'c':
    case 'C':
        printf("您需要預定幾個座位(1~4)? ");
        scanf("%d", &seatCount);
        if (seatCount < 1 || seatCount > 4) {
            printf("輸入錯誤, 正在返回主選單...\n");
        } else {
            chooseSeats(seatCount);
        }
        break;
//6.
    case 'd':
    case 'D':
        printf("Continue? (y/n): ");
        fflush(stdin);//清除換行 
        choice = getchar();
        if (choice == 'N' || choice == 'n') {
        	printf("感謝您的使用！\n");
            return 0;
        } else if (choice == 'Y' || choice == 'y') {
            system("CLS");  // 清除畫面
            break; 
        } else {
            printf("輸入錯誤！\n");
        }
        break;

    default:
        printf("輸入錯誤！\n");
        break;
}
}
} else {
    printf("密碼錯誤！\n");
}
    }

    printf("密碼錯誤多次，請稍后再試。\n");
    return 0;
}

