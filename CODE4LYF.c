#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void LOGIN(void);
void HOME(void);
void ACADEMIC(void);
void USJ_SPACE (void);
void EDIT_PROFILE (void);
void ABOUT_ME (void);
void LOGOUT(void);

int main(){
		system("cls");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                    *************************************************************************************  \n");
	printf("                    *                                                                                   *  \n");
	printf("                    *                                                                                   *  \n");
	printf("                    *                                                                                   *  \n");	
	printf("                    *              |                                     |                              *  \n");	
	printf("                    *              |         WELCOME TO USJ.SOCIAL       |                              *  \n");	
	printf("                    *              ---------------------------------------                              *  \n");	
	printf("                    *                                                                                   * \n");	
	printf("                    *                                                                                   *  \n");	
	printf("                    *                            Created by -->                                         *  \n");	
	printf("                    *                                               --->>                               *  \n");	
	printf("                    *                                                        ***CODE4LYF_LABS***        *  \n");	
	printf("                    *                                                                                   *  \n");		
	printf("                    *                                                                                   *  \n");
	printf("                    *                                                                                   *  \n");			
	printf("                    *        CONTACT US:                                                                *  \n");	
	printf("                    *                     +256775372190/+256776060597                                   *  \n");		
	printf("                    *                                                                                   *  \n");
	printf("                    *    1.SIGN_UP-->      2.LOGIN-->      3.FORGOT_PASSWORD                            *  \n");
	printf("                    *^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*  \n");	
	printf("\n");
	printf("\n");
	printf("\n");
	
	if(getch())
	LOGIN();
	return main;
}

void LOGIN(void){
	system("cls");
	char user_name[50];
    
    User:

    printf("Enter your USER NAME:\n");

    scanf("%s", &user_name);

    if (strcmp(user_name,"CODE4LYF")==0)

{

printf(" USER NAME IS CORRECT\n");

}

else

{

printf("You have enetred an invalid USER NAME\nPlease enter your USER NAME again\n");

goto User;

}

char pass[50];

pass:

printf("ENTER PASSWORD: ");

scanf("%s", &pass);

	if(strcmp(pass,"code4lyfe1")==0)

{

  printf("You have logged in successfuly \n");
  	if(getch())
  HOME();
 }

else

{

printf("You have entered a wrong password\nEnter your password again\n");

goto pass;

}

}
void HOME(void){
	system("cls");
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                    *************************************************************************************  \n");
	printf("                    *                                                                                   *  \n");
	printf("                    *   1. --->   ACADEMICS.                                                             *  \n");
	printf("                    *                                                                                   *  \n");	
	printf("                    *   2. --->   USJ SPACE                             |                               *  \n");	
	printf("                    *                                                                                   *  \n");	
	printf("                    *   3. --->   EDIT PROFILE                                                          *  \n");	
	printf("                    *                                                                                   * \n");	
	printf("                    *   4. --->   ABOUT ME                                                             *  \n");
	printf("                    *                                                                                   *  \n");
	printf("                    *   5. --->    LOGOUT                                                               *  \n");	
	printf("                    *                                                                                   *  \n");
	printf("\n");
	printf("                    *************************************************************************************  \n");
    printf("\n");
	printf("\n");
    printf("\n");
	printf("\n");
	if(getch())
	choice:
   	printf(" ENTER YOUR CHOICE \n");

	int select;
	scanf("%d",&select);

	
	if (select==1){
	system("cls");  
	ACADEMIC();
	if(getch())
	HOME();
		
		
	}
		else if (select==2){
	system("cls");
	USJ_SPACE ();
	if(getch())
	HOME();		
	
		
	}
		else if (select==3){
		
	 EDIT_PROFILE ();
		system("cls");
	if(getch())
	HOME();		
	
		
	}
		else if (select==4){
		
	ABOUT_ME();
	system("cls");
	if(getch())
	HOME();		
	
		
	}
		else if (select==5){
		
	LOGOUT();
		system("cls");
	if(getch())
	HOME();		
		
	}
	
		else {
	printf("\n wrong input please try again ");	
	goto choice;
		
	
}
}
void ACADEMIC(void){
	
	printf("\n");
   	printf("\n");
   	printf("                    *************************************************************************************  \n");
	printf("                    *                                                                                   *  \n");	
	printf("                    *              |                                     |                              *  \n");	
	printf("                    *              |         WELCOME TO USJ.SOCIAL       |                              *  \n");	
	printf("                    *              ---------------------------------------                              *  \n");
	printf("                    *^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*  \n");	
	printf("\n");
	
	
}
void USJ_SPACE (void){

	printf("\n");
   	printf("\n");
   	printf("                    *************************************************************************************  \n");
	printf("                    *                                                                                   *  \n");	
	printf("                    *              |                                     |                              *  \n");	
	printf("                    *              |         WELCOME TO USJ.SOCIAL       |                              *  \n");	
	printf("                    *              ---------------------------------------                              *  \n");
	printf("                    *^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*  \n");	
	printf("\n");

}
	
void EDIT_PROFILE (void){
	union personal_data {
	char* student_name[20];
	char* last_name[20];
	char* Date_Of_Birth[20];
	char* E_mail[20];
	long long int  Phone_number[15];
};
	printf(" EDIT YOUR PERSONAL DATA ");
		printf("\n");
			printf("\n");
				printf("\n");
					printf("\n");
	
	union personal_data student1;
	
	printf("ENTER FIRST NAME:\n \t ");
	scanf("%19s",student1.student_name);
	
	printf("ENTER LAST NAME:\n \t ");
    scanf("%19s",student1.last_name);
    
	printf("ENTER E-MAIL:\n \t");
    scanf("%19s",student1.E_mail);
    
     printf("ENTER DATE OF BIRTH: \n \t");
    scanf("%19s",student1.Date_Of_Birth);
    
    printf("ENTER PHONENUMBER:\n \t"); 
    scanf("%14d",student1.Phone_number);
    
     
	 
		
	
   	printf("\n");
   	printf("\n");
   	printf("                    *************************************************************************************  \n");
	printf("                    *                                                                                   *  \n");	
	printf("                    *              |                                     |                              *  \n");	
	printf("                    *              |                THANK YOU            |                              *  \n");	
	printf("                    *              ---------------------------------------                              *  \n");
	printf("                    *^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*  \n");	
	printf("\n");
	if(getch());
	 HOME();
}

void ABOUT_ME(void){
	
	printf("\n");
   	printf("\n");
   	printf("                    *************************************************************************************  \n");
	printf("                    *                                                                                   *  \n");	
	printf("                    *              |                                     |                              *  \n");	
	printf("                    *              |         WELCOME TO USJ.SOCIAL       |                              *  \n");	
	printf("                    *              ---------------------------------------                              *  \n");
	printf("                    *^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*  \n");	
	printf("\n");
	
}
void LOGOUT(void){
		if(getch())
		main();
	
}
