#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
char day{0};
int hour{0};
int minute{0};
char ampm{0};

for (int i {0}; i < 3; i++ )
{
cout << "New Appointment\n" << endl;
        
cout << "Enter Day [M,T,W,R,F,S,U]>";
cin >> day;

cout << "Enter Hour [0-11]>";
cin >> hour;
cout << "Enter Minute [0-59]>";
cin >> minute;
cout << "Enter AM/PM [A/P]>";
cin >> ampm;

if (ampm != 'A' && ampm != 'P') //Validate AM/PM
{
    cout << "invalid AM/PM value";
    return 1;
}

if ((hour < 0 && hour > 11) || (minute < 0 && minute > 59)) //Validate HH::MM
{
    cout << "HH:MM";
    return 2;
}

if (day != 'M' && day != 'T' && day != 'W' && day != 'R' && 
    day != 'F' && day != 'S' && day != 'U') //Validate DAY
{
    cout << "invalid DAY value";
    return 1;
}

switch (day) 
{
  case 'M':
    cout << "Monday";
    break;
  case 'T':
    cout << "Tuesday";
    break;
  case 'W':
    cout << "Wednesday";
    break;
  case 'R':
    cout << "Thursday";
    break;
  case 'F':
    cout << "Friday";
    break;
  case 'S':
    cout << "Saturday";
    break;
  case 'U':
    cout << "Sunday";
    break;
  default:
    cout << "Something";
    break;
}

cout << " " << std::setfill('0') << std::setw(2) << hour << ":" << std::setfill('0') << std::setw(2) 
<< minute << " " << (ampm == 'A' ? "AM" : "PM") << std::setfill (' ') << '\n';
}

}