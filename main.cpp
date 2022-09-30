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

int days(int d);

int M(string M, int m);

int main() {
  int n;//number of classmates
  int d; //day you were born on
  int m;//moth to number
  string M;

  
  /**int month;
int day; 
int n;
string input;**/

  
  //cout << "Enter number of classmates:"<<endl;
  cin>>n;

  
  
  for(int i = 0; i < n; i++)
    {
    d = days(d);
      m = M (M, m);
    

      
      } 
  
  }


  //day input
  int days(int d)
  {
    cin>>d;
   
    return d;
    
    }
  //month input
  int M (string M, int m)
  {
    cin>> M;
    
    if (M == "Jan")
    {
      m = 1;
      }
    if (M == "Feb")
    {
      m = 2;
      }
    if (M == "Mar")
    {
      m = 3;
      }
    if (M == "Apr")
    {
      m = 4;
      }
    if (M == "May")
    {
      m = 5;
      }
    if (M == "Jun")
    {
      m = 6;
      }
    if (M== "Jul")
    {
      m = 7;
      }
    if (M == "Aug")
    {
      m = 8;
      }
    if (M == "Sep")
    {
      m = 9;
      }
    if (M == "Oct")
    {
      m = 10;
      }
    if (M == "Nov")
    {
      m = 11;
      }
    if (M == "Dec")
    {
      m = 12;
      }
    
    }

  
  int A(int m, int d)
  {
    switch(m)
      {
        case 1:
  if ((d < 21) && (m == 1))
  cout << "Capricorn" << endl;
  else
  cout << "Aquarius" << endl;
  break;

  case 2:
  if ((d < 20) && (m== 2))
  cout << "Aquarius" << endl;
  else
  cout << "Pisces" << endl; 
  break;

  case 3:
  if ((d < 21) && (m == 3))
  cout << "Pisces" << endl;
  else
  cout << "Aries" << endl;
  break;

  case 4:
  if ((d < 21) && (m == 4))
  cout << "Aries" << endl;
  else
  cout << "Taurus" << endl;
  break;

  case 5:
  if ((d < 21) && (m == 5))
  cout << "Taurus" << endl;
  else
  cout << "Gemini" << endl;
  break;

  case 6:
  if ((d < 22) && (m == 6))
  cout << "Gemini" << endl;
  else
  cout << "Cancer" << endl;
  break;

  case 7:
  if ((d < 23) && (m == 7))
  cout << "Cancer" << endl;
  else
  cout << "Leo" << endl;
  break;
  
  case 8:
  if ((d < 23) && (m == 8))
  cout << "Leo" << endl;
  else
  cout << "Virgo" << endl;
  break;

  case 9:
  if ((d < 22) && (m == 9))
  cout << "Virgo" << endl;
  else
  cout << "Libra" << endl;
  break;

  case 10:
  if ((d < 23) && (m == 10))
  cout << "Libra" << endl;
  else
  cout << "Scorpio" << endl;
  break;

  case 11:
  if ((d < 23) && (m  == 11))
  cout << "Scorpio" << endl;
  else
  cout << "Sagittarius" << endl;
  break;

  case 12:
  if ((d < 22) && (m == 12))
  cout << "Sagittarius" << endl;
  else
  cout << "Capricorn" << endl;
  break;

  default:
  cout << "An error has occured " << m << endl;
  break;
  
}
return m;
        
      }
    
  }

  
