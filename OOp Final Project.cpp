#include<iostream>
#include<conio.h>
#include <time.h>
#include<fstream>
using namespace std;
class Info
{
private:
	int place;
	int reserved;
public:
	info()
	{
		place=0;
		reserved=0;
	}
	void setplace(int p)
	{
		place=p;
	}

	void setReserved(int r)
	{
		reserved=r;
	}
int getReserved()
	{
		return reserved;
	}
	int getPlace()
	{
		return place;
	}
};
class personalInfo
{
	private:
	string fname;
	string lname;
	int id;
	int phone;
	
	public:
		
		void setfName(string n)
		{
			fname=n;
		}
		void setlName(string nm)
		{
			lname=nm;
		}
		void setId(int i)
		{
			id=i;
		}
		void setPhone(int p)
		{
			phone=p;
		}
		string getfName()
		{
			return fname;
		}
		string getlName()
		{
			return lname;
		}
		int getId()
		{
			return id;
		}
		int getPhone()
		{
			return phone;
		}
		void display()
		{
			cout<<"\n Name : "<<fname<<" "<<lname;
			cout<<"\n Id : "<<id;
			cout<<"\n Contact Number : "<<phone;
		}
};
class Hotel 
{
	private:
		int hotel;
		int child;
		int adults;
		int room;
		int type;
		int bed;
		int day;
		personalInfo pinfo;
	public:
		Hotel()
		{
			hotel=0;
			child=0;
			adults=0;
			room=0;
			type=0;
			bed=0;
			day=0;
		}
		void setHotel(int h)
		{
			hotel=h;
		}
		void setChild(int c)
		{
			child=c;
		}
		void setAdult(int a)
		{
			adults=a;
		}
		void setRoom(int r)
		{
			room=r;
		}
		void setType(int t)
		{
			type=t;
		}
		void setpersonalInfo(string q,string w,int e,int r)
		{
			pinfo.setfName(q);
			pinfo.setlName(w);
			pinfo.setId(e);
			pinfo.setPhone(r);
		}
		void setBed(int b)
		{
			bed=b;
		}
		void setDay(int d)
		{
			day=d;
		}
		int getBed()
		{
			return bed;
		}
		int getType()
		{
			return type;
		}
		int getChild()
		{
			return child;
		}
		int getAdut()
		{
			return adults;
		}
		int getRoom()
		{
			return room;
		}
		int getHotel()
		{
			return hotel;
		}
		int getday()
		{
			return day;
		}
		void display()
		{
			cout<<endl;
			
			pinfo.display();
			 
			cout<<"\n Childrens : "<<child;
			cout<<"\n Adults : "<<adults;
			cout<<"\n Rooms : "<<room;
			cout<<"\n Day : For "<<day<<" day";
			cout<<"\n Class : ";
			if(type==1)
			cout<<"Economy Class";
			if(type==2)
			cout<<"Business Class";
			if(type==3)
			cout<<"Luxury Class";
		}
		
};

using namespace std;

int main()
{
	string user,pass;
	string getuser,getpass;
		int choice;
		bool found;

		ofstream outfile;
	outfile.open("profile.txt",ios::app);
		ifstream infile;
	infile.open("profile.txt",ios::app);
	
	cout<<"Press 1 to setup new user\n";
	cout<<"Press 2 to login\n";
	cout<<"Press 0 to Exit\n";
	cout<<"Your Choice : ";
	cin>>choice;
	if(choice ==1)
	{
		cout<<"Enter Username : ";
		cin.ignore();
		getline(cin,user);
		outfile<<user<<endl;
		cout<<"Enter Password : ";
		cin.ignore();
		getline(cin,pass);
		outfile<<pass<<endl;
		
	}
	else if(choice == 2)
	{
		cout<<"Enter Username : ";
		cin.ignore();
		getline(cin,user);
		cout<<"Enter Password : ";
		cin.ignore();
		getline(cin,pass);
		
		
		
		while(!infile.eof())
		{
		
			getline(infile,getuser);
			getline(infile,getpass);
			if (user==getuser && pass==getpass)
			{
				
				found=true;
			}
			
		
			}
			if(found!=false)
		{
				system("CLS");
				cout<<"_________________________________________________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
	cout<<"_________________________________________________________________________________________________________________________________________________\n";

	cout<<"\n ----------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |          GREAT VALUE DEALS ON YOUR FINGER TIPS                                                                                             |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                  HOTELS                                                                    |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |                                                                                                                                            |\n";
	cout<<" |  ~ Top Luxurious Hotels                                                                                                                    |\n";
	cout<<" |  ~ Reservation                                                                                                                             |\n";
	cout<<" |  ~ Booking                                                                                                                                 |\n";
	cout<<" |                                                                                                                                BOOK NOW... |\n";
	cout<<" ----------------------------------------------------------------------------------------------------------------------------------------------\n";

	

	cout<<"\n_________________________________________________________________________________________________________________________________________________\n";
	cout<<" RESERVE ALL OF YOUR'S TICKETS With Ease\n";
	cout<<"_________________________________________________________________________________________________________________________________________________\n";
	cout<<"press any key to Continue process.....";
	getch();
	system("CLS");
	cout<<"\n_________________________________________________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
	cout<<"_________________________________________________________________________________________________________________________________________________\n";
	cout<<"\n\n";
	cout<<"Reservation Info\n";
	cout<<"-------------------\n";
	cout<<"_________________________________________________________________________________________________________________________________________________\n";
	
	
	//working start
	Info i1;
	Hotel h1;
	
		int x;
	cout<<"Choose your Place.....\n";
	cout<<"-------------------------\n";
	cout<<" 1.Lahore \n";
	cout<<" 2.Karachi \n";
	cout<<" 3.Islamabad \n";
	cin>>x;
	i1.setplace(x);
	system("CLS");
	cout<<"\n_________________________________________________________________________________________________________________________________________________\n";
	cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
	cout<<"_________________________________________________________________________________________________________________________________________________\n";
	cout<<"Reservation Info:\n";
	cout<<"-------------------\n";
	if(i1.getPlace()==1)
	cout<<"Location : Lahore\n";
	if(i1.getPlace()==2)
	cout<<"Location : Karachi\n";
	if(i1.getPlace()==3)
	cout<<"Location : Islamabad\n";
	
	cout<<"_________________________________________________________________________________________________________________________________________________\n";
	switch(x)
	{
		case 1:				
		{
			cout<<"Please Choose your Desire\n";
			cout<<" 1.Hotels\n";
			cout<<" 0.exit";
	
			int y;
			cout<<"\nEnter your choice : \n";
			cin>>y;
			
			i1.setReserved(y);
			system("CLS");
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
			cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
			cout<<"Reservation Info:\n";
			cout<<"-------------------\n";
			
		    cout<<"Location : Lahore";
			if(i1.getReserved()==1)
			cout<<"\t\t Reservation Type : Hotel";

			
																	
			
			cout<<endl;
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
	
			switch(i1.getReserved())
			{
				case 1:
					{	
						int z,r,t,b,d;
						cout<<"Available Hotels in your town..\n";
						cout<<" 1. Luxus Grand Hotel\n";
						cout<<" 2. The Nishat Hotel\n";
						cout<<" 3. Faletti's Hotel Lahore\n";
						cout<<" 4. Avari Lahore Hotel\n";
						cout<<" 5. Pearl Continentsl Hotel, Lahore\n";
						cin>>z;
						h1.setHotel(z);
							system("CLS");
						cout<<"_________________________________________________________________________________________________________________________________________________\n";
						cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
						cout<<"_________________________________________________________________________________________________________________________________________________\n";
						cout<<"Reservation Info:\n";
						cout<<"-------------------\n";
						cout<<"Location : Lahore";
						cout<<"\t\t Reservation Type : Hotel";

						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
						cout<<"_________________________________________________________________________________________________________________________________________________\n";					
						switch(z)
						{
							case 1:
								{	
									
									int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t|  5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
	   					cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\n Location : Lahore \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"Pearl Continentsl Hotel, Lahore";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
																				
								}
							break;
							case 2:
							{
											int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
	   					cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\n Location : Lahore \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"Pearl Continentsl Hotel, Lahore";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
							}				
						break;
						case 3:
							{
											int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
	   					cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\n Location : Lahore \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"Pearl Continentsl Hotel, Lahore";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();																
							
							}
							break;
							case 4:
								{
													int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
	   					cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\n Location : Lahore \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"Pearl Continentsl Hotel, Lahore";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();				
								
								}
							break;
							case 5:
							{	
												int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Lahore";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
	   					cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Lahore";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Pearl Continentsl Hotel, Lahore";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\n Location : Lahore \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Luxus Grand Hotel";
						if(h1.getHotel()==2)
						cout<<"The Nishat Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Faletti's Hotel Lahore ";															
						if(h1.getHotel()==4)
						cout<<"Avari Lahore Hotel ";
						if(h1.getHotel()==5)
						cout<<"Pearl Continentsl Hotel, Lahore";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
																	
							
								}
							break;
								
					}
					}
				break;
				
				
			}
		}
		break;
		case 2:				
		{
			cout<<"\nPlease Choose your Desire\n";
			cout<<" 1.Hotels\n";
			cout<<" 0.exit";
			
			int y;
			cout<<"\nEnter your choice : \n";
			cin>>y;
			i1.setReserved(y);
						system("CLS");
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
			cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
			cout<<"Reservation Info:\n";
			cout<<"-------------------\n";
		
			cout<<"Location : Karachi";
			if(i1.getReserved()==1)
			cout<<"\t\t Reservation Type : Hotel";
			
			
			cout<<endl;
			cout<<"_________________________________________________________________________________________________________________________________________________\n";

				switch(i1.getReserved())
			{
				case 1:
					{
						
							int z,r,t,b,d;
						cout<<"Available in your town..\n";
						cout<<" 1. Avari Tower Karachi\n";
						cout<<" 2. Ramada Plaza Karachi\n";
						cout<<" 3. Movenpick Hotel Karachi\n";
						cout<<" 4. Dreamworl Resort, Hotel and Golf Course\n";
						cout<<" 5. Karachi Marriot Hotel\n";
						cin>>z;
						h1.setHotel(z);
							system("CLS");
						cout<<"_________________________________________________________________________________________________________________________________________________\n";
						cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
						cout<<"_________________________________________________________________________________________________________________________________________________\n";
						cout<<"Reservation Info:\n";
						cout<<"-------------------\n";
						cout<<"Location : Karachi";
						cout<<"\t\t Reservation Type : Hotel";

						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
						cout<<"_________________________________________________________________________________________________________________________________________________\n";					
						switch(z)
						{
							case 1:
								{	
									
									int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Karachi \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"Karachi Marriot Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
																				
								}
							break;
							case 2:
								{
									int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Karachi \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"Karachi Marriot Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
								}
								break;
								case 3:
									{
										int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Karachi \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"Karachi Marriot Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
									}
									break;
								case 4:
								{
									int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Karachi \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"Karachi Marriot Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
									}	
								break;
								case 5:
								{
									int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Karachi";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Karachi";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Karachi Marriot Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Karachi \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						cout<<"Avari Tower Karachi";
						if(h1.getHotel()==2)
						cout<<"Ramada Plaza Karachi ";															
						if(h1.getHotel()==3)
						cout<<"Movenpick Hotel Karachi ";															
						if(h1.getHotel()==4)
						cout<<"Dreamworl Resort, Hotel and Golf Course ";
						if(h1.getHotel()==5)
						cout<<"Karachi Marriot Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
									}
								break;		
							}
					}
				break;
			
				
			}
		}
		break;
		case 3:				
		{
			cout<<"\n\nPlease Choose your Desire\n";
			cout<<" 1.Hotels\n";
			cout<<" 0.exit\n";
			
			
			int y;
			cout<<"\nEnter your choice : \n";
			cin>>y;
			i1.setReserved(y);	
						system("CLS");
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
			cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
			cout<<"_________________________________________________________________________________________________________________________________________________\n";
			cout<<"Reservation Info:\n";
			cout<<"-------------------\n";
			
			cout<<"Location : Islamabad";
			
			if(i1.getReserved()==1)
			cout<<"\t\t Reservation Type : Hotel";
	
			cout<<endl;
			cout<<"_________________________________________________________________________________________________________________________________________________\n";

				switch(i1.getReserved())
			{
				case 1:
					{
							int z,r,t,b,d;
						cout<<"\nAvailable Hotels in your town..\n";
						cout<<" 1. Chalet Islamabad\n";
						cout<<" 2. Islamabad Sarena Hotel\n";
						cout<<" 3. Islamabad Maarriott Hotel\n";
						cout<<" 4. Centaurus Islamabad\n";
						cout<<" 5. Grand Islamabad Hotel\n";
						cin>>z;
						h1.setHotel(z);
							system("CLS");
						cout<<"_________________________________________________________________________________________________________________________________________________\n";
						cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
						cout<<"_________________________________________________________________________________________________________________________________________________\n";
						cout<<"Reservation Info:\n";
						cout<<"-------------------\n";
						cout<<"Location : Islamabad";
						cout<<"\t\t Reservation Type : Hotel";

						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
						cout<<"_________________________________________________________________________________________________________________________________________________\n";					
						switch(z)
						{
							case 1:
								{	
									
									int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Islamabad \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						if(h1.getHotel()==1)
						cout<<"Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"Grand Islamabad Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
									}
									break;
									case 2:
										{
											int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Islamabad \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						if(h1.getHotel()==1)
						cout<<"Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"Grand Islamabad Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
										}
										break;
						case 3:
						{
							int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Islamabad \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						if(h1.getHotel()==1)
						cout<<"Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"Grand Islamabad Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
										}				
						break;
					 case 4:
					 	{
					 		int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Islamabad \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						if(h1.getHotel()==1)
						cout<<"Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"Grand Islamabad Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
					 		
						 }
						 break;
						 case 5:
						 	{
						 		int c,a;
									cout<<"\nEnter Number of Childrens : ";
									cin>>c;
									h1.setChild(c);			
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
									if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						cout<<endl;
										cout<<"Childrens : "<<c;
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\nEnter Number of Adults : ";
									cin>>a;
									h1.setAdult(a);
									system("CLS");
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
									cout<<"_________________________________________________________________________________________________________________________________________________\n";
									cout<<"Reservation Info:\n";
									cout<<"-------------------\n";
									cout<<"Location : Islamabad";
									cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
								        cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| SINGLE BED                              |\t| SINGLE BED                           |\t| SINGLE BED                           |";
									cout<<"\n\t| 5000/day	                             |\t| 7000/day                             |\t| 8000/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

								    cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";
									cout<<"\n\t|              ECONOMY CLASS              |\t|           BUSINESS CLASS             |\t|            LUXURY CLASS              |";
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t| DOUBLE BED                              |\t| DOUBLE BED                           |\t| DOUBLE BED                           |";
									cout<<"\n\t| 5500/day	                             |\t| 7500/day                             |\t| 8500/day                             |";	
									cout<<"\n\t|                                         |\t|                                      |\t|                                      |";
									cout<<"\n\t-------------------------------------------\t---------------------------------------\t\t----------------------------------------";

										
										cout<<"\nNumber of Rooms Required : ";
										cin>>r;
										h1.setRoom(r);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
								if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"Bed Type\n";
										cout<<"1.Single Bed";
										cout<<"\n2.Double Bed\n";
										cin>>b;
										h1.setBed(b);
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										
										cout<<"Your Desired Booking Type.. ";
										cout<<"\n1.Economy Class\n";
										cout<<"2.Business Class\n";
										cout<<"3.Luxury Class\n";
										cin>>t;
										h1.setType(t);
										cout<<"\nFor How many day you want room : ";
										cin>>d;
										h1.setDay(d);
										cout<<"endl";
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tRESERVE YOURSELF\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"Reservation Info:\n";
										cout<<"-------------------\n";
										cout<<"Location : Islamabad";
										cout<<"\t\t Reservation Type : Hotel";
						if(h1.getHotel()==1)
						cout<<"\t\t\t Reserved : Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"\t\t\t Reserved : Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"\t\t\t Reserved : Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"\t\t\t Reserved : Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"\t\t\t Reserved : Grand Islamabad Hotel";	
						
						cout<<endl;
										cout<<"Childrens : "<<h1.getChild();
										cout<<"\t\t\t Adults : "<<h1.getAdut();
										cout<<"\t\t\t\t\t\t Rooms : "<<h1.getRoom();
										cout<<"\nBed : ";
										if(h1.getBed()==1)
										cout<<"Single";
										if(h1.getBed()==2)
										cout<<"Double";
										cout<<"\t\t\t Booking type : ";
										if(h1.getType()==1)
										cout<<"Economy Class";
										if(h1.getType()==2)
										cout<<"Business Class";
										if(h1.getType()==3)
										cout<<"Luxury Class";
										cout<<endl;
										cout<<"_________________________________________________________________________________________________________________________________________________\n";																				
										cout<<"YOUR PERSONAL INFO..\n";
										string fn,ln;
										int id,phone;
										cout<<"Enter Your First Name : ";
										cin>>fn;
										cout<<"Enter Your last Name : ";
										cin>>ln;
										cout<<"\nEnter Your ID : ";
										cin>>id;
										cout<<"\nEnter Your Phone Number : ";
										cin>>phone;
										h1.setpersonalInfo(fn,ln,id,phone);	
										cout<<"\n Press any key to confirm your booking.\n";
										getch();
										system("CLS");
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										cout<<"\t\t\t\t\t\t\t\tBOOKING CONFIRMED\n";
										cout<<"_________________________________________________________________________________________________________________________________________________\n";
										time_t current = time(0);
    									 
										cout<<"\nLocation : Islamabad \t\t\t\t\t\t\t\t\t\tTime : "<<ctime(&current);									
						    		    cout<<" Hotel : "; 
										if(h1.getHotel()==1)
						if(h1.getHotel()==1)
						cout<<"Chalet Islamabad";
						if(h1.getHotel()==2)
						cout<<"Islamabad Sarena Hotel ";															
						if(h1.getHotel()==3)
						cout<<"Islamabad Maarriott Hotel ";															
						if(h1.getHotel()==4)
						cout<<"Centaurus Islamabad ";
						if(h1.getHotel()==5)
						cout<<"Grand Islamabad Hotel";
						cout<<endl;
										h1.display();
										cout<<"\n Total Bill : ";
										if(h1.getType()==1 && h1.getBed()==1)
										cout<<5000*h1.getRoom()*h1.getday();
										if(h1.getType()==1 && h1.getBed()==2)
										cout<<5500*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==1)
										cout<<7000*h1.getRoom()*h1.getday();
										if(h1.getType()==2 && h1.getBed()==2)
										cout<<7500*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==1)
										cout<<8000*h1.getRoom()*h1.getday();
										if(h1.getType()==3 && h1.getBed()==2)
										cout<<8500*h1.getRoom()*h1.getday();
							 }
							 break;
					}														
					}
				break;
			
				
			}
				}
		break;
		default :
		{
		cout<<"invalid";		
		}
	}
	
	
	
	

		
		}
			else 
			cout<<"Invalid username and password";
		 infile.close();
		}	
	

}
