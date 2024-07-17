#include <stdio.h>
#pragma warning(disable:4996)

//Constant for Prices
const constA = 69.00;
const constB = 70.00;
const constC = 55.00;
const constD = 58.00;
const constE = 65.00;
const constF = 89.00;
const constG = 73.50;
const constH = 80.00;
const constI = 50.00;

/////////Functions///////////
//Summon the book menu
int bookMenu(),
//Summon the sales order
salesOrder(),
//summon logo
logo();
//////////////////////////////




//Variable
int salesCount = 0;

//Sales  Order Base Variable
int  bookQuantitySum[50], sumCount = 0;
char bookAssignedSum[50];
float priceAssignedSum[50], total[10], totalSum[50];

//Summary Base Variable
int allBookSumm[50], subTotalAll[50], totalSumForSummaryCount = 0, totalDisForSummaryCount = 0;
int bookTotalSumA = 0, bookTotalSumB = 0, bookTotalSumC = 0, bookTotalSumD = 0, bookTotalSumE = 0, bookTotalSumF = 0, bookTotalSumG = 0, bookTotalSumH = 0, bookTotalSumI = 0;
float  totalDisForSummary[50], totalSumForSummary[50], totalAmountSumA = 0, totalAmountSumB = 0, totalAmountSumC = 0, totalAmountSumD = 0, totalAmountSumE = 0, totalAmountSumF = 0, totalAmountSumG = 0, totalAmountSumH = 0, totalAmountSumI = 0;


//Main Functions
int main()
{
	int mainChoice;
	logo();//call logo function

	do
	{
		printf("\nSelect an option (1 = View Menu, 2. = Sales Order, 3 = Exit):\t");
		scanf("%d", &mainChoice); //User enter betweem 1 , 2 and 3
	//Rewind the standrad input to avoid scanf common error
		rewind(stdin);
		switch (mainChoice)
		{
		case 1:
			//Display the book menu by calling the function
			bookMenu();
			break;
		case 2:
			//Call the sales order function to access to sales order menu
			salesOrder();
			return 0;
		default:
			//invalid input by the user, return to the main menu
			printf("\nINVALID INPUT , PLEASE TRY AGAIN!");
		}
	} while (mainChoice != 3);

	return 0;
}

//Logo Functions
int logo()
{//print logo and welcome msg
	printf("       __  __      \n ");
	printf(" ****|  \\/  |****\n");
	printf("  *  *|_|\\/|_|*  *\n");
	printf("  *  * _____  *  *\n");
	printf("  *  *|_   _| *  *\n");
	printf("  *  *  |_|   *  *\n");
	printf("   *  ********  *\n");
	printf("     *********\n\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Welcome to UMT Programming BookStore !!!\n");
	printf("We are at your service. \n");

	return 0;
}

//Book Menu Functions
int bookMenu() {
	//variable to enable different fields choices
	int fieldsChoice;
	printf("\nBOOK FIELD");
	printf("\n--------------------------------");
	printf("\n1 = Artificial Intelligence");
	printf("\n2 = Programming Language");
	printf("\n3 = Database");
	printf("\n4 = Back to the Main Menu");
	printf("\nSelect a field to view :\t");
	scanf("%d", &fieldsChoice);
	rewind(stdin);
	//User choose between fields listed.
	switch (fieldsChoice) {
	case 1:
	{//print menu 1
		printf("\n\n\t\t\tArtificial Intelligence ");
		printf("\n-----------------------------------------------------------------");
		printf("\n[A] = Fundamentals of Artificial Intelligence \t\t = RM%d.00", constA);//constant of the price is used
		printf("\n[B] = Basic of Artificial Intelligence \t\t\t = RM%d.00", constB);
		printf("\n[C] = Machine Learning \t\t\t\t\t = RM%d.00", constC);
		break;
	}

	case 2:
	{//print menu 2
		printf("\n\n\t\t\tProgramming Language ");
		printf("\n-----------------------------------------------------------------");
		printf("\n[D] = C Language \t\t\t\t\t = RM%d.00", constD);
		printf("\n[E] = Javascript \t\t\t\t\t = RM%d.00", constE);
		printf("\n[F] = Python \t\t\t\t\t\t = RM%d.00", constF);
		break;
	}
	case 3:
	{//print menu 3
		printf("\n\n\t\t\tDatabase ");
		printf("\n-------------------------------------------------------------------");
		printf("\n[G] = Database For Beginners \t\t\t\t = RM%d.50", constG);
		printf("\n[H] = MySQL \t\t\t\t\t\t = RM%d.00", constH);
		printf("\n[I] = Database Design \t\t\t\t\t = RM%d.00", constI);
		break;
	}

	case 4:
	{
		//return to main menu 
		break;
	}

	default:
	{
		//either 1,2,3,and 4 is input , return back to the book menu.
		printf("\nWrong Input!");
		printf("\nPlease select again");
		// call the bookmenu
		bookMenu();
		return 0;
	}

	}
	return 0;
}

//Sales oder Functions
int salesOrder()
{

	int bookQuantity[30], countPlus = 0, i = 0, n, z;
	char bookAssigned[30], confirmOrder, bookChosen, continueOrder, finalBookQty = 0;
	float priceAssigned[30], discount = 0, subtotal = 0, discountAmount = 0, subtotalAfterDis, finalTotal = 0, finalTotalSum = 0, finalDisSum = 0;

	//salescount is 0 at default , increase by 1 when it is being read, used to display the total and current sales order .
	++salesCount;
	printf("\nSales Order No: %d", salesCount);



	//display the menu for selection of books.
	printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
	scanf("%c", &bookChosen);
	rewind(stdin);
	//the book is selected , filter it out using switch.
	while (bookChosen != 'X')
	{

		switch (bookChosen)
		{//filter the selection
		case 'A':
		case 'a':
		{
			//Sales Order Sum
			//i is 0 at default , by assigning it to the variable , the value keyed in and assigned will be in the 0st array.
			bookAssigned[i] = 'A';
			priceAssigned[i] = constA;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);

			//Summary Count
			//sumCount is 0 at default ,by assigning it to the variable , the value keyed in and assigned will be store in the 0st array.
			bookAssignedSum[sumCount] = 'A';
			priceAssignedSum[sumCount] = constA;
			bookQuantitySum[sumCount] = bookQuantity[i];

			//countPlus used to listed out all the book selected book by the user in the sales order.
			countPlus++;

			//value of i increase, so whenever the loop is being run again , the value key in and assinged will be store in the 1st array and contines.
			i++;

			//sumCount used to listed out all the book in the total summary list.
			sumCount++;
			//and the same goes to another cases.

			//then enter a new book
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//A end

		case 'B':
		case 'b':
		{
			//Sales Order Sum
			bookAssigned[i] = 'B';
			priceAssigned[i] = constB;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'B';
			priceAssignedSum[sumCount] = constB;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//B endc

		case 'C':
		case 'c':
		{
			//Sales Order Sum
			bookAssigned[i] = 'C';
			priceAssigned[i] = constC;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'C';
			priceAssignedSum[sumCount] = constC;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//C end

		case 'D':
		case 'd':
		{
			//Sales Order Sum
			bookAssigned[i] = 'D';
			priceAssigned[i] = constD;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'D';
			priceAssignedSum[sumCount] = constD;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//D end

		case 'E':
		case 'e':
		{
			//Sales Order Sum
			bookAssigned[i] = 'E';
			priceAssigned[i] = constE;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'E';
			priceAssignedSum[sumCount] = constE;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//E end

		case 'F':
		case 'f':
		{
			//Sales Order Sum
			bookAssigned[i] = 'F';
			priceAssigned[i] = constF;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'F';
			priceAssignedSum[sumCount] = constF;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//F end

		case 'G':
		case 'g':
		{
			//Sales Order Sum
			bookAssigned[i] = 'G';
			priceAssigned[i] = constG;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'G';
			priceAssignedSum[sumCount] = constG;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//G end

		case 'H':
		case 'h':
		{
			//Sales Order Sum
			bookAssigned[i] = 'H';
			priceAssigned[i] = constH;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'H';
			priceAssignedSum[sumCount] = constH;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//H end

		case 'I':
		case 'i':
		{
			//Sales Order Sum
			bookAssigned[i] = 'I';
			priceAssigned[i] = constI;
			printf("Enter the quantity :\t");
			scanf("%d", &bookQuantity[i]);
			rewind(stdin);
			//Summary Count
			bookAssignedSum[sumCount] = 'I';
			priceAssignedSum[sumCount] = constI;
			bookQuantitySum[sumCount] = bookQuantity[i];
			countPlus++;
			i++;
			sumCount++;
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			break;
		}//I end

		default:
		{
			printf("Invalid input\n");
			printf("\nBook A,B,C,D,E,F,G,H,I (X = Exit):\t");
			scanf("%c", &bookChosen);
			rewind(stdin);
			break;

		}//default end


		}//switch
	}//while 

	rewind(stdin);
	printf("\nConfirm your order? (Y = Yes , N = No) :\t\t");
	scanf("%c", &confirmOrder);
	rewind(stdin);


	switch (confirmOrder)
	{	//Total prices and discounts
	case 'Y':
	case 'y':
		//loop n times equal to the amount of different books selected by the user
		//display receipt
		printf("====================================================================");
		for (n = 0; n < countPlus; n++)
		{
			//countPlus is the amount of times the user key in the selection of book , 0 as the 1st time.
			total[n] = bookQuantity[n] * priceAssigned[n];
			printf("\nBook %c: %d @ %.2f\t\t\t\t=\tRM %.2f\n", bookAssigned[n], bookQuantity[n], priceAssigned[n], total[n]);
			// the total amount of price of n book is being added to the sbutotal within n loops.
			subtotal += total[n];
		}
		{//calculate the rate of discount depend on subtotal amount need to pay
			if (subtotal > 200 && subtotal < 300)
				discount = 0.05;

			else if (subtotal > 300 && subtotal < 500)
				discount = 0.10;

			else if (subtotal > 500)
				discount = 0.15;

			else
				discount;


			discountAmount = subtotal * discount;
			subtotalAfterDis = subtotal - discountAmount;
			//printf out payment for 1 customer
			printf("---------------------------------------------------------------------");
			printf("\nSubtotal\t\t\t\t\t=\tRM %.2f", subtotal);
			printf("\nDiscounts\t\t\t\t\t=\tRM %.2f", discountAmount);
			printf("\nTotal to pay\t\t\t\t\t=\tRM %.2f", subtotalAfterDis);
			totalDisForSummary[totalDisForSummaryCount] += discountAmount;
			totalDisForSummaryCount++;
			totalSumForSummary[totalSumForSummaryCount] += subtotalAfterDis;
			totalSumForSummaryCount++;
			break;
		}//case y

	case 'N':
	case 'n':
	{ 
		salesOrder(); //if NO return back to ordering
		break;
	}//case n
	}//switch continueTotal


			//Next sales order
	printf("\n\nTHANK YOU , HAVE A NICE DAY!");
	printf("\nNext order? (Y = Yes, N = No): ");
	scanf("%c", &continueOrder);
	rewind(stdin);
	if (continueOrder == 'Y')
		salesOrder();//if wish to continue will call salesOrder function to order
	else
	{//if does not wish to continue, will calculate the total order that have been made today
		for (z = 0; z < sumCount; z++) {

			finalTotalSum += totalSumForSummary[z]; //calculate for daily summary total amount 
			finalDisSum += totalDisForSummary[z]; //calculate for daily summary total discount
			if (bookAssignedSum[z] == 'A') //calcualte for daily summary quantity and total price of a book 
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumA += bookQuantitySum[z];
				totalAmountSumA += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'B')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumB += bookQuantitySum[z];
				totalAmountSumB += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'C')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumC += bookQuantitySum[z];
				totalAmountSumC += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'D')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumD += bookQuantitySum[z];
				totalAmountSumD += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'E')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumE += bookQuantitySum[z];
				totalAmountSumE += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'F')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumF += bookQuantitySum[z];
				totalAmountSumF += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'G')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumG += bookQuantitySum[z];
				totalAmountSumG += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'H')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumH += bookQuantitySum[z];
				totalAmountSumH += totalSum[z];
			}// if end
			else if (bookAssignedSum[z] == 'I')
			{
				totalSum[z] = bookQuantitySum[z] * priceAssignedSum[z];
				bookTotalSumI += bookQuantitySum[z];
				totalAmountSumI += totalSum[z];
			}// if end


		}// for end

		//print out total sales that have been made
		printf("\n\nDAILY SALES ORDER SUMMARY REPORT");
		printf("\nTotal Number of Sales Orders = %d\n", salesCount);
		printf("Book");
		printf("\t\t\t\tQuantity Sold Sales");
		printf("\t\t\tAmount\n");
		//Book A
		printf("Book A \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumA, totalAmountSumA);
		printf("Book B \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumB, totalAmountSumB);
		printf("Book C \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumC, totalAmountSumC);
		printf("Book D \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumD, totalAmountSumD);
		printf("Book E \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumE, totalAmountSumE);
		printf("Book F \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumF, totalAmountSumF);
		printf("Book G \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumG, totalAmountSumG);
		printf("Book H \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumH, totalAmountSumH);
		printf("Book I \t\t\t\t%d  \t\t\t\t\t%.2f\n", bookTotalSumI, totalAmountSumI);
		
		finalTotal = totalAmountSumA + totalAmountSumB + totalAmountSumC + totalAmountSumD + totalAmountSumE + totalAmountSumF + totalAmountSumG + totalAmountSumH + totalAmountSumI;
		finalBookQty = bookTotalSumA + bookTotalSumB + bookTotalSumC + bookTotalSumD + bookTotalSumE + bookTotalSumF + bookTotalSumG + bookTotalSumH + bookTotalSumI;
		
		printf("\nTotal  \t\t\t\t%d \t\t\t\t\t%.2f\n", finalBookQty, finalTotal);
		printf("\n=============================================================================");
		printf("\nTotal Discount Given       :\t\t\t\t\tRM %.2f", finalDisSum);
		printf("\nTotal Price After Discount :\t\t\t\t\tRM %.2f", finalTotalSum);
		printf("\n=============================================================================");
		printf("\n\nMore book coming soon, THANK YOU COME AGAIN !!\n\n");//ending msg
	}//n end


	return 0;

}
