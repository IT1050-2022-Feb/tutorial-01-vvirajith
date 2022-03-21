/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

 #include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  float marks[]={78.4,90.6,45.9,72.2,54.4};
  char names[][20]={"Ajith","Wimal,"Kanthi","Suranji","Kushmitha"};
  cout<<setw(5)<<"No"<<setw(15)<<"Name"<<setw(10)<<"Marks"<<endl;
  for(int r=0; r<5; r++)
    {
      cout<<setw(5)<<r+1
          <<setw(15)<<names[r]
          <<setw(10)<<setiosflags(ios::fixec)
          <<setprecision(2)<<marks[r]<<endl;
    }
}
 #include <iostream>
using namespace std;

int volume(int height, int width, int length);

int main() {
    int box1Height, box1Width, box1Length;
    int box2Height, box2Width, box2Length;
    int totalVolume, totalSurface;
    
    cout << "Enter Box 1 Height : ";
    cin >> box1Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1Length;
    
     cout << "Enter Box 2 Height : ";
    cin >> box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2Length;
    
    totalVolume = volume(box1Height, box1Width, box1Length)
             + volume(box2Height, box2Width, box2Length);
             
    cout << "Volume of Box is " << total…
[09:33, 21/03/2022] Rotiya Kaluthara : #include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length
struct Box
{
int Height;
int Length;
int Width;
}box1,box2;
// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >>box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(box1.Height ,box1.Width ,box1.Length )
             + volume( box2.Height,box2.Width ,  box2.Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return height*width*length;
}
int main() {
  
  return 0;
}

