#include<string>
#include <iostream>
using namespace std;

#include "Data.h"

Data::Data(int a,int b,int c)
{
    setmonth(b);//initializes id
    setday(c);//initializes discription
    setyear(a);//initializes sell number
}

//function to set month
void Data::setmonth(int b)
{
    if((b<1)||(b>12))

        month=1;
    else
        month=b;
}//end

//funcyion to get month
int Data::getmonth()
{
    return month;
}//end
//function to set day
void Data::setday(int c)
{
    day=c;
}//end

//function to get day
int Data::getday()
{
    return day;
}//end
//function to set year
void Data::setyear(int a)
{
    year=a;
}//end
//function to get year
int Data::getyear()
{
    return year;
}//end
//function to display month day year
void Data::displayData()
{
    cout<<getyear()<<"-"<<getmonth()<<"-"<<getday();
}//end
