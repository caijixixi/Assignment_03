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
