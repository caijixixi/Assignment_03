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
#include<string>
#include <iostream>
using namespace std;

#include "Invoice.h"

Invoice::Invoice(string id,string discription,int num,int price)
{
    setID(id);//initializes id
    setDiscription(discription);//initializes discription
    setSellNum(num);//initializes sell number
    setPrice(price);//initializes  price
}//end invoice
//function to set Id
void Invoice::setID(string id)
{
    ID=id;//store the ID
}//end function
//function to get ID
string Invoice::getID()
{
    return ID;
}//end

//function to set discription
void Invoice::setDiscription(string discription)
{
    Discription=discription;//store the discription
}//end

//function to get discription
string Invoice::getDiscription()
{
    return Discription;
}//end

//function to set sell number
void Invoice::setSellNum(int num)
{

    SellNum=num;//store the sell number
    if(num<0)//if sellnum<0 store sellnum=0
        SellNum=0;
}//end

//function to get sell number
int Invoice::getSellNum()
{
    return SellNum;
}//end

//function to get total number
void Invoice::setPrice(int price)
{

    Price=price;
    if(price<0)
        Price=0;
}
int Invoice::getPrice()
{
    return Price;
}
int  Invoice::getInvoiceAmount()
{
     if(SellNum*Price<0)
         return 0;
     else
        return SellNum*Price;

}//end
#include <string> // program uses C++ standard string class
using namespace std;
class Invoice
{
public:
    Invoice(string,string,int,int);//constructor Invoice
    void setID(string);//function to set ID
    string getID();//function to get ID
    void setDiscription(string);//function to set Discription
    string getDiscription();//function to get discription
    void setSellNum(int );//function to set Sell Sum
    int getSellNum ();//function to get sellnum
    void setPrice(int );//function to set price
    int getPrice();//function to get price
    int getInvoiceAmount();//function to printf total price
private:
    string ID;//id for invoice
    string Discription;//discription for invoice
    int SellNum;//sell number for invoice
    int Price;//price for invoice
};
