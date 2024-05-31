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
//1.
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
//2.
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
//3.
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
                                int b = 0;
                                for(j = 0; j < i; j++) {
                                    if(strcmp(grade[i].id, grade[j].id) == 0) {
                                        b = 1;
                                        break;
                                    }
                                }

                                if(b) {
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
//4.
                    case 'b':
                    case 'B':
                        system("CLS");// 清除畫面
                        printf("名字    學號    數學    物理    英文    平均\n");
                        for(i = 0; i < n; i++){
                            printf("%5s  %5s  %5d   %5d    %5d     %.1f\n", grade[i].name, grade[i].id, grade[i].Math, grade[i].Physics, grade[i].English, grade[i].avg);    
                        }
                        system("PAUSE");// 暫停程序
                        system("CLS");// 清除畫面
                        break;
//5.
                    case 'c':
                    case 'C':
                        system("CLS");// 清除畫面
                        char searchName[10];
                        printf("請輸入要搜尋的姓名：");
                        scanf("%s", searchName);
                        printf("名字    學號    數學    物理    英文    平均\n");

                        int found = 0; // 用於標記是否找到學生
                        for(i = 0; i < n; i++){
                            if(strcmp(searchName, grade[i].name) == 0){ // 字串函數比對內容
                                printf("%5s  %5s  %5d   %5d    %5d     %.1f\n", grade[i].name, grade[i].id, grade[i].Math, grade[i].Physics, grade[i].English, grade[i].avg);//確保佔據5個字符的空間，如果不夠長，則會在左側用空格填充。
                                found = 1; // 標記為已找到
                            }
                        }

                        if(!found){ // 如果未找到，顯示錯誤訊息
                            printf("沒有找到姓名為 %s 的學生資料。\n", searchName);
                        }

                        system("PAUSE");// 暫停程序
                        system("CLS");// 清除畫面
                        break;
//6.
                    case 'd':
					case 'D':
    				system("CLS");// 清除畫面
    				for(i = 0; i < n - 1; i++) {
        				int max= i;
        				for(j = i + 1; j < n; j++) {
            		if(grade[j].avg > grade[max].avg) {
                		max = j;
            		}
        				}
        			if(max!= i) { // 交換結構體數據
            		struct Grade temp = grade[i];// 用暫存變數保存當前元素
            		grade[i] = grade[max];// 將當前元素替換為最大值元素
            		grade[max] = temp;// 將最大值元素替換為暫存變數中保存的當前元素
        			}
    				}
    				break;    
                        
//7.
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
        else{
            printf("%c密碼錯誤\n", '\a');    
        }
    }
    return 0;
}

