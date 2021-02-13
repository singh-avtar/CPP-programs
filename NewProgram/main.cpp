#include<iostream>
using namespace std;

enum month {jan=0, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
enum shopCat {fuel=0, food, clothing, party, holiday, medicine, household, dining};
class Invoice{

    int uniqId;
    month mon;
    int amount;
    shopCat cat;
    public:
    Invoice()
    {
        uniqId = -23; // seeting data as invalid
    }
    bool setUniqId(int uniqId)
    {
        this->uniqId = uniqId;
        return true;
    }
    int getUniqId()
    {
        return this->uniqId;
    }
    bool setMonth(int mont)
    {
        this->mon = (month)mont;
        return true;
    }
    int getMonth()
    {
        return this->mon;
    }
    bool setAmount(int amount)
    {
        this->amount = amount;
        return true;
    }
    int getAmount()
    {
        return this->amount;
    }
    bool setCat(int cat)
    {
        this->cat = (shopCat)cat;
        return true;
    }
    int getCat()
    {
        return this->cat;
    }
};
class InvoiceList
{
    public:
    Invoice *invoice;
    InvoiceList *nextInvoice;
    InvoiceList()
    {
        this->invoice = new Invoice();
        this->nextInvoice = NULL;
    }
};

bool checkUniqueInvoice(InvoiceList *tmp, int uniqNum)
{
    if(tmp==NULL)
        return true;
    while(tmp!=NULL)
    {
        if(tmp->invoice->getUniqId()==uniqNum)
            return false;
        tmp = tmp->nextInvoice;

    }
    return true;
}
int main()
{
    int expenditure;
    cout<<"Enter your expenditure limit per month in INR and press enter"<<endl;
    cin>>expenditure;
    InvoiceList *newInvoice = new InvoiceList();
    int expenditureDataHelper[14][10];
    int totExpPerMonth[14];
    int totExpPerShopCat[10];
    for(int i=0;i<14;i++){
            totExpPerMonth[i] = 0;
        for(int j=0;j<10;j++){
        totExpPerShopCat[j] = 0;
        expenditureDataHelper[i][j] = 0;
        }
    }
    cout<<"enter your invoice data with uniq ID, month, amount and category space separated. look at month and shop category mapping below. enter only numbers "<<endl;
    cout<<"jan=0, feb=1, mar=2, apr=3, may=4, jun=5, jul=6, aug=7, sep=8, oct=9, nov=10, dec=11"<<endl;
    cout<<"fuel=0, food=1, clothing=3, party=4, holiday=5, medicine=6, household=7, dining=8"<<endl;
    cout<<"enter -22 to stop entering"<<endl;
    InvoiceList *tmpList = newInvoice;
    while(true)
    {

        int unId,mon,amount,cat;
        cin>>unId;
        if(unId==-22)
            break;
        cin>>mon>>amount>>cat;
        if(!checkUniqueInvoice(newInvoice,unId))
        {
            cout<<"You have already entered this invoice. (Already entered invoice has the same uniqid)"<<endl;
            continue;
        }
        tmpList->invoice->setUniqId(unId);
        tmpList->invoice->setMonth(mon);
        tmpList->invoice->setAmount(amount);
        tmpList->invoice->setCat(cat);
        tmpList->nextInvoice = new InvoiceList();
        tmpList = tmpList->nextInvoice ;
    }

    InvoiceList *tmp;
    tmp = newInvoice;
    while(tmp!=NULL && tmp->invoice->getUniqId()!=-23)
    {
        expenditureDataHelper[tmp->invoice->getMonth()][tmp->invoice->getCat()]+=tmp->invoice->getAmount();
        totExpPerMonth[tmp->invoice->getMonth()]+= tmp->invoice->getAmount();
        totExpPerShopCat[tmp->invoice->getCat()]+= tmp->invoice->getAmount();
        tmp=tmp->nextInvoice;
    }
    string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    string shopList[8] = {"fuel", "food", "clothing", "party", "holiday", "medicine", "household", "dining"};

    for(int i=0;i<12;i++)
    {
        cout<<"************** "<<months[i]<<" ***************"<<endl;
        if(totExpPerMonth[i]>expenditure)
            cout<<"------------->Dude, Your expenditure is out of limits<----------------"<<endl;
        for(int j=0;j<8;j++)
        {
            if(expenditureDataHelper[i][j]>0)
                cout<<shopList[j]<<" : "<< expenditureDataHelper[i][j] <<"INR"<<endl;
        }
        cout<<"total expenditure: "<<totExpPerMonth[i]<<"INR"<<endl;
    }
    cout<<"$$$$$$$$Category wise expenditure$$$$$$"<<endl;
    for(int j=0;j<8;j++)
        cout<<shopList[j]<<" : "<<totExpPerShopCat[j]<<"INR"<<endl;
    return 0;
}
