#include <iostream>

#include"Invoice.h"
using namespace std;

int main()
{
    Invoice invoice("043","the important component",30 ,5 );

    cout<<"component ID:"<<invoice.getID()<<endl;
    cout<<"component discription:"<<invoice.getDiscription()<<endl;
    cout<<"component sell number:"<<invoice.getSellNum()<<endl;
    cout<<"component price:"<<invoice.getPrice()<<endl;
    cout<<"component total sell number:"<<invoice.getInvoiceAmount()<<endl;
    return 0;
}
