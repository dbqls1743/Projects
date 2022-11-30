#include <iostream>
using namespace std;

int main()
{
  int store1, store2, store3, store4, store5;

  cout << "Enter today's sales for store 1: ";
  cin >> store1;

  cout << "Enter today's sales for store 2: ";
  cin >> store2;

  cout << "Enter today's sales for store 3: ";
  cin >> store3;

  cout << "Enter today's sales for store 4: ";
  cin >> store4;

  cout << "Enter today's sales for store 5: ";
  cin >> store5;

  cout << "\n\nSALES BAR CHART" << endl;

  cout << "Store 1: ";
  for (int ctr = 1; ctr <= store1 / 100; ctr++)
    {
      cout << "*";
    }
  cout << endl;

  cout << "Store 2: ";
  for (int ctr = 1; ctr <= store2 / 100; ctr++)
    {
      cout << "*";
    }
  cout << endl;

  cout << "Store 3: ";
  for (int ctr = 1; ctr <= store3 / 100; ctr++)
    {
      cout << "*";
    }
  cout << endl;

  cout << "Store 4: ";
  for (int ctr = 1; ctr <= store4 / 100; ctr++)
    {
      cout << "*";
    }
  cout << endl;

  cout << "Store 5: ";
  for (int ctr = 1; ctr <= store5 / 100; ctr++)
    {
      cout << "*";
    }
  cout << endl;
  
	return 0;
}