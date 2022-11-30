// Body Mass Index
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const double BMI_NUMBER = 703;

  double BMI, weight, height, height_1;

  cout << "Enter your weight in pounds: ";
  cin >> weight;

  cout << "Enter your height in inches: ";
  cin >> height;

  // height_1 = pow(height, 2);

  // BMI = weight * 703 / height_1;
	BMI = weight * 703 / (height * height); // easier way to write

	// You can output the BMI outside of your decision statement
	// since the code is the same for all 3 scenarios
	cout << "Your BMI is " << BMI << endl;
	
  if (BMI < 18.5)
  {
    // cout << "Your BMI is " << BMI << endl;
    cout << "You are underweight." << endl;
  }
    
  else if (BMI > 25)
  {
    // cout << "Your BMI is " << BMI << endl;
    cout << "You are overweight." << endl;
  }
    
  else
  {
    // cout << "Your BMI is " << BMI << endl;
    cout << "Congratulations! Your weight is optimal." << endl;
  }
    
  return 0;
  
}