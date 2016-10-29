#include<iostream>
#include<iomanip>
using namespace std;

class TestScores
{
	double score;
	double score1;
	double score2;
	
	public:
		TestScores(double score, double score1, double score2)
		{
			this -> score = score;
			this -> score1 = score1;
			this -> score2 = score2;
		}
		double setScore(double score)
		{
			this -> score = score;
		}
		double setScore1(double score1)
		{
			this -> score1 = score1;
		}
		double setScore2(double score2)
		{
			this -> score2 = score2;
		}
		double getScore()
		{
			return this -> score;
		}
		double getScore1()
		{
			return this -> score1;
		}
		double getScore2()
		{
			return this -> score2;
		}
		double getAverage()
		{
			return (score + score1 + score2) / 3;
		}
};

int main()
{
	double score;
	double score1;
	double score2; 
	
	cout << "Enter Score 1: ";
	cin >> score;
	cout << "Enter Score 2: ";
	cin >> score1;
	cout << "Enter Score 3: ";
	cin >> score2;
	
	TestScores mark (score, score1, score2);
	cout << fixed << setprecision(2) << showpoint << "Average: " << mark.getAverage();
	
	return 0;
}
