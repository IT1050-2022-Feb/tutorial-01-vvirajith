/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/




#include <iostream>
using namespace std;

int main ()
{
  float cm,inches;

  cout<<"Enter a length in cm:";
  cin>>cm;

  inches=cm/2.54;
  cout<<"Length in inches:"<<inches<<endl;


  return 0;
}
 #include <iostream>
using namespace std;

int main()
{
   double salary, netSalary;
   int etype, otHrs, otRate;

   cout<<"Enter Employee Type:";
   cin>>etype;

   cout<<"Enter Salary:";
   cin>>salary;

   cout<<"Enter OTHRS:";
   cin>>otHrs;
  
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
   cout<<"Net Salary is "<<netSalary;
  
   return 0;
}
 #include <iostream>
using namespace std;

int main()
{
    int no;
    long fac;

    cout<<"Enter a Number:";
    cin>>no;
  
    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    cout<<"Factorial of is"<<no<<fac<<endl;
 
    return 0;
}
[09:32, 21/03/2022] Rotiya Kaluthara : #include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

long Factorial(int no)
{
  int fac=1;

  for(int r=no; r>=1; r--)
    {
      fac=fac*r;
    }
  return fac;
}

long nCr(int n, int r)
{
  return Factorial(n)/(Factorial(r)*Factorial(n-r));
}
  
  return 0;
}
