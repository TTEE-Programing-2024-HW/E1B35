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
	system("CLS");//清除畫面 
	
	int password;
	printf("請輸入密碼");
	scanf("%d",&password);// 讀取輸入的密碼
	
	if(password==2024)
	{	
		printf("歡迎");
    
        getchar(); //清除換行
//2.
while(1)//無窮迴圈
{
	printf("主選單\n");
	printf("----------------------------\n");
	printf("|  a.畫出直角三角形        |\n");
	printf("|  b.顯示乘法表            |\n");  
	printf("|  c.結束                  |\n");
	printf("----------------------------\n");
	
//3.	
	char letter;
	int n;
	printf("請輸入一個'a'、'b'、'c'的字元：");
    scanf("%c", &letter);
    
	switch(letter) {
            case 'a':
            case 'A':
            	system("CLS");//清除畫面 
                printf("請輸入一個'a'~'n'的字元：");
                getchar();//清除換行 
                scanf("%c", &letter);
                if (letter < 'a' || letter > 'n') 
				{
                    printf("請重新輸入\n");
                } 
				else 
				{
                    for (char i=letter; i>='a';i--) //每一行從i開始遞減到a
					{
                        for (char j=i-'a'; j>0;j--)//每一行前置空格(確保直角三角形的右邊是直的) 
						{
                            printf(" ");//每一行中插入空格(對齊) 
                        }
                        for(char j=i;j<=letter;j++)//每一行從i開始遞增到letter
                        {
						    printf("%c", j);
						}
                        printf("\n");
                    }
                }
                
            system("PAUSE");//暫停程序
    		system("CLS");//清除畫面 
                break;
//4.	
            case 'b':
            case 'B':
            	printf("請輸入一個1~9的整數n：");
            	scanf("%d",&n);
                if (n<1||n>9) 
				{
                    printf("請重新輸入\n");
                } 
				else 
				{
                    for (int i=1;i<=n;i++) 
					{
                        printf("%d*%d=%d\n",i,i,i*i);
                    }
                    
                }
               
            system("PAUSE");//暫停程序
    		system("CLS");//清除畫面 
			 break;
//5.                
            case 'c':
            case 'C':
            	printf("\'Continue?(y/n):");
			while(1){
				fflush(stdin);//清除輸入緩衝區
				scanf("%c",&letter);
				if(letter=='Y'||letter=='y')
				{
					return 0;		//程式結束
				}
				else if(letter=='N'||letter=='n')
				{
					break;			//跳出並回到顯示表單那裡
				}
				else{
					printf("Error input!\n\'Continue?(y/n):");
				}
			}
			
			system("CLS");//清除畫面 
            break;	    
            }
    }
        }
    else
	{
		printf("%c密碼錯誤",'\a');	
	}
            	    return 0;
}

//這次的程式設計作業讓我學習到很多，像是github的使用，還有第二題的顯示直角三角形，並從右至左遞減，
//一直習慣練習的都是右至左遞增，所以在這個部分卡關了很久，
//再來就是迴圈的部分，搞得很暈頭轉向，只好善用chat GPT和各種同學的詢問幫助去做修正。 
