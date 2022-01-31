#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

  void main()
  {
    int i = 0;
    int choice;
    char name [20];
    char quantity[20];
              printf("Hello User! \nwelcome to: Perfect Shopping List\n");

  do{

              printf("\nPlease enter a number from listed: \n"
                     "1. Add new Item \n"
                     "2. Show list\n"
                     "3. Checkout an item\n"
                     "4. Export to Text file\n\n"
                     "Intput: ");
                     scanf("%d",&i);

               while(i<0 && i>5 ){
                          printf("please enter valid number \nIntput:");
                          scanf("%d",&i);}



              switch(i){
              case 1:{
                  if(i == 1){
                      printf("enter item Name: ");
                      scanf("%s",&name);
                      printf("enter item Quantity: ");
                      scanf("%s",&quantity);
                      printf("\n.........................................................................");
                      printf("\n%s of %s will be added in list\n",quantity,name);
                      printf(".........................................................................\n");
                      break;   }

              case 2:{
                  if(i == 2){

                      int j;
      do{

              system("cls");

              printf("No.          name           quantity\n\n");
                      printf(" 1           maggie         2 packets\n");
                      printf(" 2           pasta          3 packets\n");
                      printf(" 3           ketchup        500gm\n");
                      printf(" 4           pepsi          2 litres\n");
            printf("\n\nChoose an option from below: \n"
                     "1. Replace an item \n"
                     "2. Remove an item\n"
                     "3. Checkout an item\n"
                     "4. back to main menu\n\n"
                     "Intput: ");

                    scanf("%d",&j);
                     if(j != 1 && j != 2 && j != 3 && j != 4 ){
                          printf("please enter valid number \nIntput:");
                          scanf("%d",&j);}

                         if(j == 1){
                         int number;
                         char itemName[20];
                         char itemQuantity[20];

                          printf("\nEnter the number you want to replace: ");
                          scanf(" %d",&number);
                          printf("Name of the Item:");
                          scanf (" %s",&itemName);
                          printf("Quantity of the Item: ");
                          scanf(" %s",&itemQuantity);
                          printf("%s of %s replaced successfully\n",itemQuantity,itemName);

                     }else if(j == 2){
                         int number;

                          printf("Enter the number you want to delete: ");
                          scanf(" %d",&number);

                          printf("item successfully deleted\n",number);


                     }else if(j == 3){
                         int number;

                          printf("Enter the number you want to checkout: ");
                          scanf(" %d",&number);
                          printf("item successfully checked out\n",number);

                     }else if(j == 4){

                     }


                }while(j != 4);
                 }
  break;
              }

              case 3:{

               int number;
              system("cls");
              printf("No.          name           quantity\n\n");
                      printf(" 1           maggie         2 packets\n");
                      printf(" 2           pasta          3 packets\n");
                      printf(" 3           ketchup        500gm\n");
                      printf(" 4           pepsi          2 litres\n");

                          printf("Enter the number you want to checkout: ");
                          scanf(" %d",&number);
                          printf("item successfully checked out\n");
                          system("cls");
  break;

              }
              case 4:{

              char exp[2];
              printf("\n Would you like to export this list to txt file? (y/n): ");
              scanf("%s",&exp);

              if (strcmp(exp, "y") == 0 || strcmp(exp, "Y") == 0 ){
                                 printf("\n.........................................................................\n");
                       printf("List successfully exported\n");
                      printf(".........................................................................\n");

              }else if(strcmp(exp, "n") == 0 || strcmp(exp, "N") == 0){

                  printf("\n.........................................................................\n");
                       printf("List successfully not exported\n");
                      printf(".........................................................................\n");
              }
              else{
                      do{
                  printf("enter valid input(y/n): ");
                  scanf("%s",&exp);
                   if (strcmp(exp, "y") == 0 || strcmp(exp, "Y") == 0 ){
                                 printf("\n.........................................................................");
                       printf("\nList successfully exported\n");
                      printf(".........................................................................\n");
                      break;

              }else if(strcmp(exp, "n") == 0 || strcmp(exp, "N") == 0){

                  printf("\n.........................................................................\n");
                       printf("List successfully not exported\n");
                      printf(".........................................................................\n");
                      break;
              }

                  }while(strcmp(exp, "y") == 1 || strcmp(exp, "Y") == 1 || strcmp(exp, "n") == 1 || strcmp(exp, "N") == 1);

              }
              break;
              }
              }
          }
          }while (i>0 && i < 5);
          }



