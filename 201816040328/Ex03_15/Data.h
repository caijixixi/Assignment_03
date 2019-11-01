
#include <string> // program uses C++ standard string class
using namespace std;
class Data
{
public :
    Data(int ,int ,int );//constructor Data
    void setmonth(int );//function to set month
    int getmonth();//function to get month
    void setday(int );//function to set day
    int getday();//function to get day
    void setyear(int );//function to set year
    int getyear();//function to set year
    void displayData();//function to display month day year
private:
    int month;
    int day;
    int year;
};
