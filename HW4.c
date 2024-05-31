#include <stdio.h>
#include <stdlib.h>


struct Grade {   // �w�q���c���x�s�ǥͦ��Z
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
    system("CLS");// �M���e��

    int password,a,i,j;
    struct Grade grade[10]; // ���]�̦h��10�Ӿǥ�
    int n = 0; 

    for(a = 0; a < 3; a++){
        printf("�п�J�K�X: ");
        scanf("%d", &password); // Ū����J���K�X

        if(password == 2024){
            printf("�w��\n");
            getchar(); // �M������

            while(1){ // �L���j��
            
                printf("�D���\n");
                printf("----------------------------------\n");
                printf("|  a. Enter student grades       |\n");
                printf("|  b. Display student grades     |\n");  
                printf("|  c. Search for student grades  |\n");
                printf("|  d. Grade ranking              |\n");
                printf("|  e. Exit system                |\n");
                printf("----------------------------------\n");

                char letter;
                printf("�п�J�@��'a'�B'b'�B'c'�B'd'��'e'���r���G");
                fflush(stdin);
                scanf(" %c", &letter);

                switch(letter){
                
                    case 'a':
                    case 'A':
                        system("CLS");// �M���e��
                        while (1) {
                            printf("�п�Jn(5~10)����ơG");
                            getchar(); // �M������ 
                            scanf("%d", &n);
                            if(n >= 5 && n <= 10) {
                                break;
                            }
                            printf("�п�J5��10��������ơC\n");
                        }

                        printf("�п�J�ǥͩm�W�B�Ǹ��B�ƾǡB���z�B�^�妨�Z\n");
                        for(i = 0; i < n; i++){
                            printf("�п�J�ǥ� %d ���m�W�G", i + 1);
                            scanf("%s", grade[i].name);

                            while (1) {
                                printf("�п�J�ǥ� %d ���Ǹ��G", i + 1);
                                scanf("%s", grade[i].id);

                                // �ˬd�Ǹ��O�_����
                                int isDuplicate = 0;
                                for(j = 0; j < i; j++) {
                                    if(strcmp(grade[i].id, grade[j].id) == 0) {
                                        isDuplicate = 1;
                                        break;
                                    }
                                }

                                if(isDuplicate) {
                                    printf("�Ǹ����ơA�Э��s��J�C\n");
                                } else {
                                    break;
                                }
                            }

                            while (1) {
                                printf("�п�J�ǥ� %d ���ƾǦ��Z�G", i + 1);
                                if(scanf("%d", &grade[i].Math) == 1 && grade[i].Math >= 0 && grade[i].Math <= 100) {
                                    break;
                                }
                                printf("���Z���Ӧb0��100�����A�Э��s��J�C\n");
                                fflush(stdin); // �M���w�İ�
                            }

                            while (1) {
                                printf("�п�J�ǥ� %d �����z���Z�G", i + 1);
                                if(scanf("%d", &grade[i].Physics) == 1 && grade[i].Physics >= 0 && grade[i].Physics <= 100) {
                                    break;
                                }
                                printf("���Z���Ӧb0��100�����A�Э��s��J�C\n");
                                fflush(stdin); // �M���w�İ�
                            }

                            while (1) {
                                printf("�п�J�ǥ� %d ���^�妨�Z�G", i + 1);
                                if(scanf("%d", &grade[i].English) == 1 && grade[i].English >= 0 && grade[i].English <= 100) {
                                    break;
                                }
                                printf("���Z���Ӧb0��100�����A�Э��s��J�C\n");
                                fflush(stdin); // �M���w�İ�
                            }

                            grade[i].avg = (grade[i].Math + grade[i].Physics + grade[i].English) / 3; // �p�⦨�Z������
                        }
                        system("PAUSE");// �Ȱ��{��
                        system("CLS");// �M���e��
                        break;

                    case 'b':
                    case 'B':
                        system("CLS");// �M���e��
                        printf("�W�r    �Ǹ�    �ƾ�    ���z    �^��    ����\n");
                        for(i = 0; i < n; i++){
                            printf("%s  %s  %d   %d    %d     %.1f\n", grade[i].name, grade[i].id, grade[i].Math, grade[i].Physics, grade[i].English, grade[i].avg);    
                        }
                        system("PAUSE");
                        system("CLS");
                        break;

                    case 'e':
                    case 'E':
            	        system("CLS");//�M���e��
            	    	printf("\'Continue?(y/n):");
			        	while(1){
				    		fflush(stdin);//�M����J�w�İ�
							scanf("%c",&letter);
							if(letter=='Y'||letter=='y'){
							return 0;		//�{������
							}
							else if(letter=='N'||letter=='n'){
							break;			//���X,�^����ܪ�樺��
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
            printf("%c�K�X���~\n", '\a');    
        }
    }
    return 0;
}

