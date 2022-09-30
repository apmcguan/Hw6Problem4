/**#include <iostream>
#include <string>
#include <cmath>**/

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int days(int day);

int M(string M, int month);

int main() {
  int n;//number of classmates
  int day; //day you were born on
  int month_i;//moth to number
  int M,days;
  //string M; // month you were born**/
  
  /**int month;
int day; 
int n;
string input;**/

  
  cout << "Enter number of classmates:"<<endl;
  cin>>n;

  
  
  for(int i=0; i<n; i++)
    {
      day = days;
      month_i = M ;
        
      
      
     
      
      
    } 
  }
  

  //day input
  int days(int day)
  {
    cin>>day;
   
    return day;
    
    }
  //month input
  int M(string M, int month_i)
  {
    cin>> M;
    
    if (M == "Jan")
    {
      month_i = 1;
      }
    if (M == "Feb")
    {
      month_i = 2;
      }
    if (M == "Mar")
    {
      month_i = 3;
      }
    if (M == "Apr")
    {
      month_i = 4;
      }
    if (M == "May")
    {
      month_i = 5;
      }
    if (M == "Jun")
    {
      month_i = 6;
      }
    if (M== "Jul")
    {
      month_i = 7;
      }
    if (M == "Aug")
    {
      month_i = 8;
      }
    if (M == "Sep")
    {
      month_i = 9;
      }
    if (M == "Oct")
    {
      month_i = 10;
      }
    if (M == "Nov")
    {
      month_i = 11;
      }
    if (M == "Dec")
    {
      month_i = 12;
      }
cout<<"month"<<month_i<<endl;
    
    }

  
  /**int A(int month_i, int day)
  {
    switch(month)
  }
**/
  
