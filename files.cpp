#include <iostream>
#include <fstream>
using namespace std;

int main() {

  ifstream inputFile;

  inputFile.open("Random.txt");

	int ctr = 0;
  int sum = 0;
	int number;
  double average;

	
  if(!inputFile)
  {
    cout << "Error opening file\n";
  }
  else
  {
    while (inputFile >> number)
      {
        sum += number;
        ctr++;
      }
  }

	
  inputFile.close();

	cout << "Number of numbers: " << ctr << endl;
  
  cout << "Sum of the numbers: " << sum << endl;

  average = static_cast<double>(sum) / (ctr);
  cout << "Average of the numbers: " << average << endl;

  return 0;
}