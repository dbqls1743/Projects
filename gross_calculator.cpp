#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double getDoubleValue(string);
void displayDoubleValue(string, double);

int main() {
  string emp1Name, emp2Name;
	double emp1Rate, emp1Hours, emp1Gross, emp2Rate, emp2Hours, emp2Gross;

	// Get data for employee 1:
	cout << "\nEnter the first employee's first and last name: ";
	getline(cin, emp1Name);

  emp1Rate = getDoubleValue("Enter the first employee's rate: ");
  emp1Hours = getDoubleValue("Enter the first employee's hours: ");
  
  // Calculate and store the gross pay for employee 1:
	emp1Gross = emp1Rate * emp1Hours;

  // Clear the buffer to use getline() again:
	cin.ignore();
  
  // Get data for employee 2:
	cout << "\nEnter the second employee's second and last name: ";
	getline(cin, emp2Name);
  
  emp2Rate = getDoubleValue("Enter the second employee's rate: ");
  emp2Hours = getDoubleValue("Enter the second employee's hours: ");

	// // Calculate and store the gross pay
	emp2Gross = emp2Rate * emp2Hours;

  // Display employee 1:
  cout << endl;
	cout << setw(10) << left << "Name:" << setw(18) << right << emp1Name << endl;
  displayDoubleValue("Hours:", emp1Hours);
  displayDoubleValue("Rate:", emp1Rate);
  displayDoubleValue("Gross:", emp1Gross);

  // Display employee 2:
	cout << endl;
	cout << setw(10) << left << "Name:" << setw(18) << right << emp2Name << endl;
  displayDoubleValue("Hours:", emp2Hours);
  displayDoubleValue("Rate:", emp2Rate);
  displayDoubleValue("Gross:", emp2Gross);
  
	return 0;
}
double getDoubleValue(string prompt)
{
  double value;
  cout << prompt;
  cin >> value;

  while (value < 0)
    {
      cout << "Invalid value. Please re-enter: ";
      cin >> value;
    }
  return value;
}
void displayDoubleValue(string label, double value)
{
   cout << setw(10) << left << label << setw(18) << right << setprecision(2) << fixed << showpoint << value << endl;
}