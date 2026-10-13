#include <iostream>

// Lab 7 — Ashley Duran
// CIS 5 Week 07 · Two arrays

int main()
{

  const int N = 5;

  int quiz[N] = {88, 92, 70, 95, 81};
  int lab[N] = {70, 70, 70, 70, 70};

  int quizSum = 0;
  int quizHigh = quiz[0];

  std::cout << "Quiz" << std::endl;

  for (int i = 0; i < N; ++i)
  {
    std::cout << "[" << i << "]" << quiz[i] << std::endl;

    quizSum = quizSum + quiz[i];
    if (quiz[i] > quizHigh)
    {
      quizHigh = quiz[i];
    }
  }
  std::cout << "Sum: " << quizSum << std::endl;
  std::cout << "High: " << quizHigh << std::endl;

  int labSum = 0;
  int labHigh = lab[0];

  std::cout << "Lab" << std::endl;

  for (int i = 0; i < N; ++i)
  {
    std::cout << "[" << i << "] " << lab[i] << std::endl;

    labSum = labSum + lab[i];

    if (lab[i] > labHigh)
    {
      labHigh = lab[i];
    }
  }
  std::cout << "Sum: " << labSum << std::endl;
  std::cout << "High: " << labHigh << std::endl;

  return 0;
}
