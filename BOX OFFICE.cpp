// Box Office
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

  //Change these three numbers of ticket price and percentage of net profit into constants
  const double ADULT_TICKET_PRICE = 10.0;
  const double CHILD_TICKET_PRICE = 6.0;
  const double NET_PROFIT_PERCENTAGE = 0.2;

  string movieName;
  int adultTickets;
  int childTickets;
  double grossProfit;
  double netProfit;
  double distributorProfit;

  //Ask the user for the name of the movie
  cout << "Enter the name of the movie: ";
  getline(cin, movieName);

  //Ask how many adult tickets were sold
  cout << "Enter the number of adult tickets sold: ";
  cin >> adultTickets;

  //Ask how many child tickets were sold
  cout << "Enter the number of child tickets sold: ";
  cin >> childTickets;

  //Calculate the Gross Box Office Profit
  grossProfit = adultTickets * ADULT_TICKET_PRICE + childTickets * CHILD_TICKET_PRICE;
  //Calculate the Net Box Office Profit
  netProfit = grossProfit * NET_PROFIT_PERCENTAGE;
   //Calculate the Amount Paid to Distributor
  distributorProfit = grossProfit - netProfit;

  cout << endl;

  cout << "Revenue Report" << endl;
  cout << "==============" << endl;
  cout << "Movie Name:" << setw(21) << "\"" << movieName << "\"" << endl;
  cout << "Adult Tickets Sold:" << setw(20) << adultTickets << endl;
  cout << "Child Tickets Sold:" << setw(20) << childTickets << endl;
  
  //Display the Gross Box Office Profit
  cout << "Gross Box Office Profit:     $" << setw(9) << setprecision(2) << fixed << grossProfit << endl;
  //Display the Net Box Office Profit
  cout << "Net Box Office Profit:       $" << setw(9) << setprecision(2) << fixed << netProfit << endl;
  //Display the Amount Paid to Distributor
  cout << "Amount Paid to Distributor:  $" << setw(9) << setprecision(2) << fixed << distributorProfit << endl;

  return 0;
}