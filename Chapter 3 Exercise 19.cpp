// Chapter 3 Exercise 19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer:Brenna Meyer
//Date: February 13, 2025
// Requirrements:Monthly Payments
//The monthly payment on a loan may be calculated by the following formula :
//Payment = Rate × (1 + Rate)N((1 + Rate)N−1)
//Rate is the monthly interest rate, which is the annual interest rate divided by 12. 
// (12 percent annual interest would be 1 percent monthly interest.) N is the number of payments, 
// and L is the amount of the loan.Write a program that asks for these values then displays a report similar to :

//Loan Amount : $ 10000.00
//Monthly Interest Rate : 1 %
//Number of Payments : 36
//Monthly Payment : $   332.14
//Amount Paid Back : $ 11957.15
//Interest Paid : $  1957.15;

#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double one = 1,
		oneHundred = 100,
		numberOfMonths = 12;

	double numberOfPayments;

	double interestRate,
		loanAmount,
		payment,
		amountPaidBack,
		interestPaid;

	cout << endl;
	cout << "What is the amount of the loan?";			
	cin >> loanAmount;
	cout << "What is the interest rate of the loan? %";		//12
	cin >> interestRate;
	cout << "What is the number of payments?";
	cin >> numberOfPayments;
	cout << endl;

	//Calculate
	interestRate /= numberOfMonths;

	interestRate /= oneHundred;

	payment = ((interestRate)*pow(one + (interestRate), numberOfPayments) / (pow(one + (interestRate), numberOfPayments) - one)) * loanAmount;

	interestRate *= oneHundred;

	amountPaidBack = numberOfPayments * payment;

	interestPaid = (numberOfPayments * payment) - loanAmount;

	//display
	cout << setprecision(2) << fixed << right << endl;

		cout << "Loan Amount: $";
		cout << setw(6) << loanAmount << endl;

		cout << "Monthly Interest Rate:	";
		cout << setw(6) << interestRate << endl;

		cout << "Number Of Payments:	";
		cout << setw(6) << numberOfPayments << endl;

	cout << "Monthly Payment:	$";
	cout << setw(6) << payment << endl;

	cout << "Amount Paid Back:	$";
	cout << setw(6) << amountPaidBack << endl;

	cout << "Interest Paid:	$";
	cout << setw(6) << interestPaid;

	cout << endl << endl;
	
	return 0;

}

