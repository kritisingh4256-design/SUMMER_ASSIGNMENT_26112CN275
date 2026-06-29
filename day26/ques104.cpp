#include <iostream>
using namespace std;

int main()
{
    int score = 0, answer;

    cout << "===== QUIZ APPLICATION =====\n";

   
    cout << "\n1. What is the capital of london?\n";
    cout << "1. paris\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 1)
        score++;


    cout << "\n2. Which language is used for C programming?\n";
    cout << "1. Python\n2. Java\n3. C++\n4. C\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 4)
        score++;

    cout << "\n3. How many days are there in a year?\n";
    cout << "1. 365\n2. 366\n3. 300\n4. 389\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 1)
        score++;

    
    cout << "\n4. Which planet is known as the largest Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\n5. What is 15 + 20?\n";
    cout << "1. 20\n2. 35\n3. 30\n4. 40\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

   
    cout << "\n===== QUIZ RESULT =====\n";
    cout << "Your Score: " << score << " / 5\n";

    if (score == 5)
        cout << "Excellent! You got all answers correct.\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}