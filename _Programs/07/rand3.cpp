#include <iostream>
#include <ctime>
using namespace std;

int main() 
{

   time_t t;
   long sec = time(&t);
   cout << "seconds: " << sec << endl;
   long min = (sec - (sec%60))/60;
   cout << "minutes: " << min << endl;
   long hour = (min - (min%60))/60;
   cout << "hours: " << hour << endl;
   long days = (hour - (hour%24))/24;
   cout << "days: " << days << endl;
   long years = (days - (days%365))/365;
   cout << "years: " << years << endl;

   system("pause");
   return 0;
}
