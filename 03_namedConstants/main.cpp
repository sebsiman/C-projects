#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    const double QUIZ_CAT = 0.60;
    const double FINAL_CAT = 0.20;
    const double MIDTERM_CAT = 0.20;

    /*
    #define QUIZ_CAT 0.60
    #define FINAL_CAT 0.20      //legacy directives, very unsafe due to unspecified data type
    #define MIDTERM_CAT 0.20
    */

    int quiz1, quiz2, quiz3, quiz4, quiz5;
    int midtermExam = 100;
    int finalExam = 100;
    double finalScore;
    double quizAverage;
    int numQuizzes = 5;

    quiz1 = 100;
    quiz2 = 85;
    quiz3 = 79;
    quiz4 = 92;
    quiz5 = 78;
    quizAverage = (quiz1 + quiz2 + quiz3 + quiz4 + quiz5) / static_cast<double>(numQuizzes);
    cout << "Quiz Average = " << quizAverage << endl;

    finalScore = (quizAverage * QUIZ_CAT) + (midtermExam * MIDTERM_CAT) + (finalExam * FINAL_CAT);
    cout << "Your final grade is: " << finalScore << endl;

    return 0;
}
