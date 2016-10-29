#include<iostream>
#include<iomanip>
using namespace std;

class Population
{
	double nPopulation;
	double nBirth;
	double nDeath;
	
	public:
		Population(double nPopulation, double nBirth, double nDeath)
		{
			this -> nPopulation = nPopulation;
			this -> nBirth = nBirth;
			this -> nDeath = nDeath;
		}
		double setPopulation(double nPopulation)
		{
			this -> nPopulation = nPopulation;
		}
		double setBirth(double nBirth)
		{
			this -> nBirth = nBirth;
		}
		double setDeath(double nDeath)
		{
			this -> nDeath = nDeath;
		}
		double getPopulation()
		{
			return this -> nPopulation;
		}
		double getBirth()
		{
			return this -> nBirth;
		}
		double getDeath()
		{
			return this -> nDeath;
		}
		double getBirthRate()
		{
			return nBirth / nPopulation;  
		}
		double getDeathRate()
		{
			return nDeath / nPopulation;
		}
};

int main()
{
	double nPopulation;
	double nBirth;
	double nDeath;
	
	cout << "Population Data" << endl;
	cout << "---------------" << endl;
	cout << "Enter the number of population: ";
	cin >> nPopulation;
	cout << "Enter the number of birth: ";
	cin >> nBirth;
	cout << "Enter the number of death: ";
	cin >> nDeath;
	
	Population p(nPopulation, nBirth, nDeath);
	cout << fixed << setprecision(2) << showpoint << "Birth Rate: " << p.getBirthRate() << endl; 
	cout << fixed << setprecision(2) << showpoint << "Death Rate: " << p.getDeathRate() << endl;
	return 0;
}
