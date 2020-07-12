// created by Ankush Bharambe;2u1;roll no :37

#include<iostream.h>
#include<conio.h>
const m=50;
class item
{
int itemcode[m];
float itemprice[m];
int count;
public:
void CNT(void){count=0;}
void getitem(void);
void displaysum();
void remove(void);
void displayitem(void);
};
void item::getitem(void)
{ cout<<"enter item code";
 cin>>itemcode[count];
 cout<<"enter the item cost";
 cin>>itemprice[count];
 count++;
}
void item::displaysum(void)
{
float sum=0;
for(int i=0;i<count;i++)
sum=sum+itemprice[i];
cout<<endl<<endl;
cout<<"Total cash to pay Rs:"<<sum<<"/-"<<endl;
cout<<"please ;"<<endl<<"collect your recipet"<<endl;
}
void item::remove(void)
{
int a;
cout<<"enter the item code";
cin>>a;
for(int i=0;i<count;i++)
if(itemcode[i]==a)
itemprice[i]=0;
}
void item::displayitem(void)
{
cout<<"code price";
for(int i=0;i<count;i++)
{cout<<"\n"<<itemcode[i];
cout<<"  "<<itemprice[i];
}
cout<<"\n";
}
void main()
{
clrscr();
item order;
order.CNT();
int x;
do{
cout<<"**********************************************************"<<endl;
cout<<"you can do follwing";
cout<<"enter the appropriate no"<<endl;
cout<<"1:add items"<<endl;
cout<<"2:Display total cash to pay"<<endl;
cout<<"3:delete an items"<<endl;
cout<<"4:display all items"<<endl;
cout<<"5:quit"<<endl;
cout<<"what is u r option"<<endl;
cout<<"*************************************************************"<<endl;
cin>>x;
clrscr();
switch(x)
{
case 1:{ order.getitem();}
break;
case 2: order.displaysum();
break;
case 3: order.remove();
break;
case 4: order.displayitem();
break;
default :cout<<"error;try again"<<endl;

}
}
while(x!=5);
getch();
}


