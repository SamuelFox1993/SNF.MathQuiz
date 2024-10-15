// Math Quiz
// Sam Fox

#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string problemPath = "C:\\temp\\MathProblems.txt";
	string resultPath = "C:\\temp\\QuizResults.txt";

	vector<string> quizProblems;

	string problem;
	ifstream ifs(problemPath);
	while (getline(ifs, problem))
	{
		quizProblems.push_back(problem);
	}
	ifs.close();

	cout << "Welcome to the Math Quiz!" << "\n\n";

	srand(time(NULL));
	int randomNumber1 = rand() % 10 + 1;
	int randomNumber2 = rand() % 10 + 1;
	int randomNumber3 = rand() % 10 + 1;
	string answer1 = "";
	string answer2 = "";
	string answer3 = "";
	for (int i = 0; i < 1; i++)
	{
		ofstream ofs(resultPath);

		cout << "Question 1: " << quizProblems[randomNumber1] << " = ";
		ofs << quizProblems[randomNumber1] << " = ";
		cout << "\nEnter your answer: ";
		getline(cin, answer1);
		ofs << answer1;

		cout << "\nQuestion 2: " << quizProblems[randomNumber2] << " = ";
		ofs << "\n" << quizProblems[randomNumber2] << " = ";
		cout << "\nEnter your answer: ";
		getline(cin, answer2);
		ofs << answer2;

		cout << "\nQuestion 3: " << quizProblems[randomNumber3] << " = ";
		ofs << "\n" << quizProblems[randomNumber3] << " = ";
		cout << "\nEnter your answer: ";
		getline(cin, answer3);
		ofs << answer3;

		ofs.close();
		cout << "\n\nResults saved to QuizResults.txt";

	}
	
	

	(void)_getch();
	return 0;
}