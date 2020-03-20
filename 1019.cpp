#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const double secondsHour=3600, hoursMinutes=60, minuteSeconds=60;

    int value=0;
    double hours=0, fractPartHours=0, intPartHours=0;
    double minutes=0, fractPartMinutes=0, intPartMinutes=0;
    double seconds=0;

    cin >> value;

    hours=value/secondsHour;
    fractPartHours=modf(hours, &intPartHours);

    minutes=fractPartHours*hoursMinutes;
    fractPartMinutes=modf(minutes, &intPartMinutes);

    seconds=fractPartMinutes*minuteSeconds;

    cout << intPartHours <<":"<< intPartMinutes << ":" << seconds << endl;

    return 0;
}
