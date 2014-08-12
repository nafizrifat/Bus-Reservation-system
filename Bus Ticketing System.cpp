#include<iostream>
using namespace std;

int r=0,p=0,k=20;
float allsell=0;

class bus{

char arriva[9],deprt[9],from[9],to[9],pname[99];
int busn,dtym,tseat,fair,s;
public:
	void install();
	void show();
	void book();
	void exit();


}b[8];

void bus::install(void)
{
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"Enter Bus No:";
cin>>busn;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"From: ";
cin>>from;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"To: ";
cin>>to;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"Departure: ";
cin>>dtym;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(15);
cout<<"Total seats: ";
cin>>tseat;

p++;

}

void bus::show(void)
{
	cout<<"total bus available:"<<endl;
	for(int i=0;i<p;i++)
		{	cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"Bus No: ";
			cout<<b[i].busn<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"From: ";
			cout<<b[i].from<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"To: ";
			cout<<b[i].to<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"Departure: ";
			cout<<b[i].dtym<<" O'clock"<<endl;
			cout.setf(ios::right,ios::adjustfield);
			cout.width(15);
			cout<<"Seats: ";
			cout<<b[i].tseat<<endl<<endl<<endl;

		}
}


void bus::book(void)
{
int number;
float fair;
	cout<<"Enter Bus No: ";
	cin>>number;
	int n;
 for(n=0;n<p;n++)
 {
	 if(b[n].busn==number)
	 {
		if(b[n].tseat<=0)
		{
		cout<<"\tSORRY!"<<endl<<"\tNo  Seat Avleable\t";
		}
		else
		{
		 cout<<endl<<"Total seat avleabile: "<<b[n].tseat;
		 cout<<endl<<"Enter Passenger Name: ";
		 cin>>pname;
		 cout<<endl<<"How many seats: ";
		 cin>>s;
		 while((b[n].tseat=b[n].tseat-s)<0)
			 {cout<<endl<<"Limit Exceed...Please re-enter ";
			 b[n].tseat=b[n].tseat+s;
				cin>>s;
			
		
		 }

		
cout<<endl<<"Your parched is completed"<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Bus No: ";
cout<<b[n].busn<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"From: ";
cout<<b[n].from<<" to "<<b[n].to<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Departure: ";
cout<<b[n].dtym<<" O'clock"<<endl;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Total seat: ";
cout<<s<<endl;
fair=300*s;
fair=fair+(fair*.7);
allsell=allsell+fair;
cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Total Fair(with 7%vat): ";

cout.setf(ios::showpoint);
cout.precision(3);
cout.setf(ios::fixed,ios::floatfield);
cout.width(8);
cout<<fair<<endl;

cout.setf(ios::right,ios::adjustfield);
	cout.width(30);
cout<<"Thank You"<<endl<<endl;

			}
	 }
 }


}

int main()
 {
 
	
	

	int w,g=1;
 while(g){
 cout<<"*****************************************************"<<endl;
 cout<<"******* *******"<<endl;
 cout<<"* The Administrator *"<<endl;
 cout<<"* DoubleR Transport Service *"<<endl;
 cout<<"******* *******"<<endl;
 cout<<"*****************************************************"<<endl;

 cout<<"\t\t\t 1.Install\n\t\t\t 2.Show\n\t\t\t 3.Book \n\t\t\t 4.Exit";
 cout<<"\n\t\t\t Enter your choice:-> ";
 cin>>w;
 switch(w){
 case 1:
	b[p].install();

 break;
 case 2:
	 b[0].show();
 break;
 case 3:
	b[p].book();
 
 break;
 case 4:
	 {
g=0;

cout<<endl<<"Total Sell:"<<allsell<<endl<<"******Thank You******"<<endl;
break;
	 }
 }
}
return 0;
}