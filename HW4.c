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
//2.
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
//3.
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
                                int b = 0;
                                for(j = 0; j < i; j++) {
                                    if(strcmp(grade[i].id, grade[j].id) == 0) {
                                        b = 1;
                                        break;
                                    }
                                }

                                if(b) {
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
//4.
                    case 'b':
                    case 'B':
                        system("CLS");// �M���e��
                        printf("�W�r    �Ǹ�    �ƾ�    ���z    �^��    ����\n");
                        for(i = 0; i < n; i++){
                            printf("%5s  %5s  %5d   %5d    %5d     %.1f\n", grade[i].name, grade[i].id, grade[i].Math, grade[i].Physics, grade[i].English, grade[i].avg);    
                        }
                        system("PAUSE");// �Ȱ��{��
                        system("CLS");// �M���e��
                        break;
//5.
                    case 'c':
                    case 'C':
                        system("CLS");// �M���e��
                        char searchName[10];
                        printf("�п�J�n�j�M���m�W�G");
                        scanf("%s", searchName);
                        printf("�W�r    �Ǹ�    �ƾ�    ���z    �^��    ����\n");

                        int found = 0; // �Ω�аO�O�_���ǥ�
                        for(i = 0; i < n; i++){
                            if(strcmp(searchName, grade[i].name) == 0){ // �r���Ƥ�鷺�e
                                printf("%5s  %5s  %5d   %5d    %5d     %.1f\n", grade[i].name, grade[i].id, grade[i].Math, grade[i].Physics, grade[i].English, grade[i].avg);//�T�O����5�Ӧr�Ū��Ŷ��A�p�G�������A�h�|�b�����ΪŮ��R�C
                                found = 1; // �аO���w���
                            }
                        }

                        if(!found){ // �p�G�����A��ܿ��~�T��
                            printf("�S�����m�W�� %s ���ǥ͸�ơC\n", searchName);
                        }

                        system("PAUSE");// �Ȱ��{��
                        system("CLS");// �M���e��
                        break;
//6.
                    case 'd':
					case 'D':
    				system("CLS");// �M���e��
    				for(i = 0; i < n - 1; i++) {
        				int max= i;
        				for(j = i + 1; j < n; j++) {
            		if(grade[j].avg > grade[max].avg) {
                		max = j;
            		}
        				}
        			if(max!= i) { // �洫���c��ƾ�
            		struct Grade temp = grade[i];// �μȦs�ܼƫO�s��e����
            		grade[i] = grade[max];// �N��e�����������̤j�Ȥ���
            		grade[max] = temp;// �N�̤j�Ȥ����������Ȧs�ܼƤ��O�s����e����
        			}
    				}
    				break;    
                        
//7.
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
        else{
            printf("%c�K�X���~\n", '\a');    
        }
    }
    return 0;
}

