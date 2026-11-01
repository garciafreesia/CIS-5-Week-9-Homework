#include <iostream>

// Homework 9 — Freesia Garcia
// CIS 5 Week 09 · Menu on the lab
// Paste your lab functions here, or fill the TODOs.

void printMenu() {
  std::cout << "1) Average  2) High  3) Quit\n";
}

double average(const int a[], int n) {
  if (n == 0) {
    return 0;
  }

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return static_cast<double>(sum) / n;
  return 0.0;
}

void printSummary(double avg) {
  std::cout << "Average: " << avg << "\n";
}

int high(const int a[], int n) {
  int max = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }

  return a[0];
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;

  do {
    printMenu();
    std::cin >> choice;
    if (choice == 1) {
      double avg = average(scores, N);
      printSummary(avg);
    } else if (choice == 2) {
      int top = high(scores, N);
      std::cout << "High: " << top << "\n";
    }
  } while (choice != 3);

  return 0;
}
