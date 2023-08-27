#include<stdio.h>
void menu();
void accountbalance();
void withdraw_amount();
void deposit();
int getIntegerLength(int) ;
int accbalance=10000;
int main(){
    char name[50];
    int pin,pinx,choice;
    puts("\t...ATM machine...\n");
     puts("\n");
    puts("Enter your name and intialize your account\n");
    scanf("%s",&name);
     puts("\n");
      puts("\n");
    puts("Enter your pin in four digits");
    scanf("%d",&pin);
    int Length=getIntegerLength(pin);
   /* if(Length==4){
         puts("pin saved succesfully");
    }
    else{
         puts("reenter the pin");
        scanf("%d",&pin);
    }*/
       while (getIntegerLength(pin) != 4) {
        printf("Invalid PIN length. Reenter your PIN: ");
        scanf("%d", &pin);
    }

    printf("\nPin entered sucessfully ");
   // scanf("%d", &pinx);
     puts("\n");
      puts("\n");
    puts("Enter you pin");
    scanf("%d",&pinx);
    puts("\n");
     puts("\n");
    if(pin==pinx){
        printf("\t...Welcome...\n\n\t--%s--",name);
    }
    else{
        puts("Invalid pin!!\nReenter the pin");
         scanf("%d",&pinx);
         if(pin==pinx){
          printf("\t...Welcome...\n\n\t--%s--",name);      
         }
         else{
              return 0;
         }
    }
   while(1){
    menu();
    scanf("%d",&choice);
    switch (choice){
        case 1:
            accountbalance();
            break;
        case 2:
            withdraw_amount();
            break;
        case 3:
            deposit();
            break;
        case 4:
            printf("Thank You For Using Our ATM");
            return 0;
         default:
              puts("INVALID choice!!");
              break;
    }
}
}
int getIntegerLength(int number) {
    int length = 0;

    if (number == 0) {
        return 1;
    }

    if (number < 0) {
        length++;
        number = -number;
    }

    while (number > 0) {
        length++;
        number /= 10;
    }

    return length;
}
void menu()
{
    printf("\n...ATM MENU...\n1.Account Balance\n2.Withdraw amount\n3.Deposit\n4.Exit\nEnter your choice\n");
}

void accountbalance(){
    printf("Your Account Balance is:%d\n",accbalance);
}

void withdraw_amount(){
    int withdraw;
    printf("Enter the amount to be withdraw:\n");
    scanf("%d",&withdraw);
    if(withdraw>0){
    accbalance-=withdraw;
    accountbalance();}
    else{
        puts("Invalid amount");
    }
}

void deposit(){
    int deposit;
    printf("Enter the amount to be deposit:\n");
    scanf("%d",&deposit);
    if(deposit>0){
         accbalance+=deposit;
         accountbalance();
    }else{
        puts("Invalid amount");
    }
   
}

