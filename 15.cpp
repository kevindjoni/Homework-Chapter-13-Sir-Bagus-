#include<iostream>
#include<cmath>
using namespace std;

class Mortage
{
	float loan;
	float rate;
	int year;

	public:
		Mortage(float loan, float rate, int year)
		{
		    this -> loan = loan;
		    this -> rate = rate;
		    this -> year = year;
		}
		float setLoan(float loan);
		float setRate(float rate);
		float setYear(int year);
		float getTerm();
		float getPayment();
};

float Mortage::setLoan(float loan)
{
    this -> loan = loan;
}
float Mortage::setRate(float rate)
{
    this -> rate = rate;
}
float Mortage::setYear(int year)
{
    this -> year = year;
}
float Mortage::getTerm()
{
    return pow((1 + this -> rate / 12), 12 * this -> year);
}
float Mortage::getPayment()
{
    return (loan * (rate / 12) * getTerm()) / (getTerm() - 1);
}

int main()
{
    float loan;
    float rate;
    int year;

    cout << "Enter the amount of loan: " << endl;
    cin >> loan;
    cout << "Enter the amount of rate: " << endl;
    cin >> rate;
    cout << "Enter the amount of year: " << endl;
    cin >> year;


    Mortage pay (loan, rate, year);
    cout << pay.getPayment();

	return 0;
}
