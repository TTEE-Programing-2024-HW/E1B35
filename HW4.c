#include <stdio.h>
#include <stdlib.h>


struct Grade {   // 定義結構來儲存學生成績
    char name[10];
    char id[10];
    int Math;
    int Physics;
    int English;
    float avg;
};

int main(void){

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
    system("CLS");// 清除畫面

    int password,a,i,j;
    struct Grade grade[10]; // 假設最多有10個學生
    int n = 0; 

    for(a = 0; a < 3; a++){
        printf("請輸入密碼: ");
        scanf("%d", &password); // 讀取輸入的密碼

        if(password == 2024){
            printf("歡迎\n");
            getchar(); // 清除換行

            while(1){ // 無限迴圈
            
                printf("主選單\n");
                printf("----------------------------------\n");
                printf("|  a. Enter student grades       |\n");
                printf("|  b. Display student grades     |\n");  
                printf("|  c. Search for student grades  |\n");
                printf("|  d. Grade ranking              |\n");
                printf("|  e. Exit system                |\n");
                printf("----------------------------------\n");

                char letter;
                printf("請輸入一個'a'、'b'、'c'、'd'或'e'的字元：");
                fflush(stdin);
                scanf(" %c", &letter);

                switch(letter){
                
                    case 'a':
                    case 'A':
                        system("CLS");// 清除畫面
                        while (1) {
                            printf("請輸入n(5~10)的整數：");
                            getchar(); // 清除換行 
                            scanf("%d", &n);
                            if(n >= 5 && n <= 10) {
                                break;
                            }
                            printf("請輸入5到10之間的整數。\n");
                        }

                        printf("請輸入學生姓名、學號、數學、物理、英文成績\n");
                        for(i = 0; i < n; i++){
                            printf("請輸入學生 %d 的姓名：", i + 1);
                            scanf("%s", grade[i].name);

                            while (1) {
                                printf("請輸入學生 %d 的學號：", i + 1);
                                scanf("%s", grade[i].id);

                                // 檢查學號是否重複
                                int isDuplicate = 0;
                                for(j = 0; j < i; j++) {
                                    if(strcmp(grade[i].id, grade[j].id) == 0) {
                                        isDuplicate = 1;
                                        break;
                                    }
                                }

                                if(isDuplicate) {
                                    printf("學號重複，請重新輸入。\n");
                                } else {
                                    break;
                                }
                            }

                            while (1) {
                                printf("請輸入學生 %d 的數學成績：", i + 1);
                                if(scanf("%d", &grade[i].Math) == 1 && grade[i].Math >= 0 && grade[i].Math <= 100) {
                                    break;
                                }
                                printf("成績應該在0到100之間，請重新輸入。\n");
                                fflush(stdin); // 清除緩衝區
                            }

                            while (1) {
                                printf("請輸入學生 %d 的物理成績：", i + 1);
                                if(scanf("%d", &grade[i].Physics) == 1 && grade[i].Physics >= 0 && grade[i].Physics <= 100) {
                                    break;
                                }
                                printf("成績應該在0到100之間，請重新輸入。\n");
                                fflush(stdin); // 清除緩衝區
                            }

                            while (1) {
                                printf("請輸入學生 %d 的英文成績：", i + 1);
                                if(scanf("%d", &grade[i].English) == 1 && grade[i].English >= 0 && grade[i].English <= 100) {
                                    break;
                                }
                                printf("成績應該在0到100之間，請重新輸入。\n");
                                fflush(stdin); // 清除緩衝區
                            }

                            grade[i].avg = (grade[i].Math + grade[i].Physics + grade[i].English) / 3; // 計算成績平均值
                        }
                        system("PAUSE");// 暫停程序
                        system("CLS");// 清除畫面
                        break;

                    case 'b':
                    case 'B':
                        system("CLS");// 清除畫面
                        printf("名字    學號    數學    物理    英文    平均\n");
                        for(i = 0; i < n; i++){
                            printf("%s  %s  %d   %d    %d     %.1f\n", grade[i].name, grade[i].id, grade[i].Math, grade[i].Physics, grade[i].English, grade[i].avg);    
                        }
                        system("PAUSE");
                        system("CLS");
                        break;

                    case 'e':
                    case 'E':
            	        system("CLS");//清除畫面
            	    	printf("\'Continue?(y/n):");
			        	while(1){
				    		fflush(stdin);//清除輸入緩衝區
							scanf("%c",&letter);
							if(letter=='Y'||letter=='y'){
							return 0;		//程式結束
							}
							else if(letter=='N'||letter=='n'){
							break;			//跳出,回到顯示表單那裡
							}
							else{
							printf("Error input!\n\'Continue?(y/n):");
							}
                }
            }
        }
    }
        else
        {
            printf("%c密碼錯誤\n", '\a');    
        }
    }
    return 0;
}

