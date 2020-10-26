#include <stdio.h>

int ATM_Transaction(); //Prototype of the function
int anotherTransaction, amountToWithdraw, amountToDeposit, pin; //Global Variable
double balance = 1000; //Global Variable, Initial balance to be 1000 for everyone

int main()
{
	printf("********Welcome to bank!******** \n");
	printf("Enter your pin number please: ");
	scanf("%d", &pin);
		if(pin !=1234)
		{
			printf("Sorry your pin is wrong, please try again.");
		}

		else
		{
			ATM_Transaction();
		}
}

int ATM_Transaction()
{
	int choice;
	printf("Enter your option!\n\n");
	printf("1. Balance Enquiry \n");
	printf("2. Cash Withdraw \n");
	printf("3. Deposit Cash \n");
	printf("4. Exit \n\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1: //Balance Enquiry
		printf("Your bank balance is: %.2f", balance);
		printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed or 2 to exit\n\n");
		scanf("%d", &anotherTransaction);

			if (anotherTransaction == 1)
			{
				ATM_Transaction();	
			}
		break;

	case 2: //Withdraw
		printf("Please enter amount to withdraw: ");
		scanf("%d", &amountToWithdraw);

		if (amountToWithdraw <= balance)
		{
			printf("Please collect your cash.");
			balance=balance-amountToWithdraw;
			printf("Your available balance is %lf\n", balance);

			printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed or 2 to exit\n\n");
			scanf("%d", &anotherTransaction);

				if (anotherTransaction == 1)
				{
					ATM_Transaction();	
				}
		}
		else
		{
       		printf("Sorry in-sufficient funds in your account");
       		printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 2 to exit\n\n");
       		scanf("%d", &anotherTransaction);
       			if(anotherTransaction == 1)
        		{
            	 ATM_Transaction();  // call our ATM_Transaction method here
        		}
    	}
    break;
	
	case 3: //Deposit
	printf("Please enter amount to deposit: ");
	scanf("%d", &amountToDeposit);
	balance = amountToDeposit+balance;
	printf("Thank you for depositing, your updated balance is %.2f", balance);

	printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed or 2 to exit\n\n");
			scanf("%d", &anotherTransaction);

				if (anotherTransaction == 1)
				{
					ATM_Transaction();	
				}
		break;
		
	default:
		printf("Thank you for using our ATM services.");
	}
}