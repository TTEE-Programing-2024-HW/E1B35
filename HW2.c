#include<stdio.h>
#include<stdlib.h>
int main(void)
{        
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
	
	int password;
	printf("�п�J�K�X");
	scanf("%d",&password);// Ū����J���K�X
	
	if(password==2024)
	{	
		printf("�w��");
    
        getchar(); //�M������
//2.
while(1)//�L�a�j��
{
	printf("�D���\n");
	printf("----------------------------\n");
	printf("|  a.�e�X�����T����        |\n");
	printf("|  b.��ܭ��k��            |\n");  
	printf("|  c.����                  |\n");
	printf("----------------------------\n");
	
//3.	
	char letter;
	int n;
	printf("�п�J�@��'a'�B'b'�B'c'���r���G");
    scanf("%c", &letter);
    
	switch(letter) {
            case 'a':
            case 'A':
            	system("CLS");//�M���e�� 
                printf("�п�J�@��'a'~'n'���r���G");
                getchar();//�M������ 
                scanf("%c", &letter);
                if (letter < 'a' || letter > 'n') 
				{
                    printf("�Э��s��J\n");
                } 
				else 
				{
                    for (char i=letter; i>='a';i--) //�C�@��qi�}�l�����a
					{
                        for (char j=i-'a'; j>0;j--)//�C�@��e�m�Ů�(�T�O�����T���Ϊ��k��O����) 
						{
                            printf(" ");//�C�@�椤���J�Ů�(���) 
                        }
                        for(char j=i;j<=letter;j++)//�C�@��qi�}�l���W��letter
                        {
						    printf("%c", j);
						}
                        printf("\n");
                    }
                }
                
            system("PAUSE");//�Ȱ��{��
    		system("CLS");//�M���e�� 
                break;
//4.	
            case 'b':
            case 'B':
            	printf("�п�J�@��1~9�����n�G");
            	scanf("%d",&n);
                if (n<1||n>9) 
				{
                    printf("�Э��s��J\n");
                } 
				else 
				{
                    for (int i=1;i<=n;i++) 
					{
                        printf("%d*%d=%d\n",i,i,i*i);
                    }
                    
                }
               
            system("PAUSE");//�Ȱ��{��
    		system("CLS");//�M���e�� 
			 break;
//5.                
            case 'c':
            case 'C':
            	printf("\'Continue?(y/n):");
			while(1){
				fflush(stdin);//�M����J�w�İ�
				scanf("%c",&letter);
				if(letter=='Y'||letter=='y')
				{
					return 0;		//�{������
				}
				else if(letter=='N'||letter=='n')
				{
					break;			//���X�æ^����ܪ�樺��
				}
				else{
					printf("Error input!\n\'Continue?(y/n):");
				}
			}
			
			system("CLS");//�M���e�� 
            break;	    
            }
    }
        }
    else
	{
		printf("%c�K�X���~",'\a');	
	}
            	    return 0;
}

//�o�����{���]�p�@�~���ھǲߨ�ܦh�A���Ogithub���ϥΡA�٦��ĤG�D����ܪ����T���ΡA�ñq�k�ܥ�����A
//�@���ߺD�m�ߪ����O�k�ܥ����W�A�ҥH�b�o�ӳ����d���F�ܤ[�A
//�A�ӴN�O�j�骺�����A�d�o�ܷw�Y��V�A�u�n����chat GPT�M�U�ئP�Ǫ��߰����U�h���ץ��C 
