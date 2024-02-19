#include<iostream>
#include<string.h>
class city
{
protected:
char *name;
char *s;
int len;
public:
void getname()
{
len=0;
name=new char[len+1];
cout<<"ENTER CITY NAME:";
cin>>s;
len=strlen(s);
name=new char[len+1];
strcpy(name,s);
}void printname(void)
{
cout<<name<<"\n";
}
};
void main()
{
city *cptr[10]; // Array of 10 pointer to cities
int n=1;
int option;
clrscr();
do
{
cptr[n]=new city; // create new city
cptr[n]->getname();
n++;
cout<<"DO YOU WANT TO ENTER ONE MORE NAME?"<<endl;
cout<<"\n ENTER 1 FOR YES OR 0 FOR NO:"<<endl;
cin>>option;
}
while(option);
for(int i=1;i<n;i++)
{
cptr[i]->printname();
}
getch();
}
