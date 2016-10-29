#include<iostream>
#include<string>
using namespace std;

class Employee
{
	string name;
	int idNumber;
	string department;
	string position;
	
	public:
		Employee(string name, int idNumber, string department, string position)
		{
			this -> name = name;
			this -> idNumber = idNumber;
			this -> department = department;
			this -> position = position; 
		}
		Employee(string name, int idNumber)
		{
			this -> name = name;
			this -> idNumber = idNumber;
			this -> department = "";
			this -> position = "";
		}
		Employee()
		{
			this -> name = "";
			this -> idNumber = 0;
			this -> department = "";
			this -> position = ""; 
		}
		string getName()
		{
			return this -> name;
		}
		int getID()
		{
			return this -> idNumber;
		}
		string getDepartment()
		{
			return this -> department;
		}
		string getPosition()
		{
			return this -> position;
		}
};

void printData(Employee e);

int main()
{
	Employee employee1 = Employee("Susan Myers", 47899, "Accounting", "Vice President");
	Employee employee2 = Employee("Mark Jones", 39119, "IT", "Programmer");
	Employee employee3 = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");
	
	Employee employeeArr [] = {employee1, employee2, employee3};
	for(int i = 0; i < 3; i++)
	{
		printData(employeeArr[i]);
	}
	
	return 0;
}

void printData(Employee e)
{
	cout << "Name: " << e.getName() << endl;
	cout << "ID: " << e.getID() << endl;
	cout << "Department: " << e.getDepartment() << endl;
	cout << "Position: " << e.getPosition() << endl << endl;
}
