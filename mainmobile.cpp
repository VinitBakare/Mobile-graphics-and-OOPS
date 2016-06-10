#include<iostream>
#include<string>
#include<fstream>
#include<istream>
#include<sstream>
#include<stdlib.h>
#include<graphics.h>
#include<cmath>
#include<cstdlib>
#include<iomanip>
#include <time.h>
#include<Windows.h>
#include <stdio.h>
//#include<strlib.h>
using namespace std;


class mobile{
	//	private:		//data members attributes and property


		protected:
			double location, batra, screen_size,multi_screen, Sms, Filesize,downspeed;
		double h,  l,  w,  dl,  dh;
		int mcolor,  seconds,  array_calculation,  n,  fl,  Ca;
		double fsr,  ledr,  fcamr,  sims,mobile_size, display_area;
//		int mcolor,  Wifi, hour,  minutes,  seconds,  array calculation;
//		//custom function
//		double fb_area,  ss_area,  tb_area,  ,  clock_shape, ;
//		double Data_usage,  Battery_time,  ;


			public:
             mobile(){                   //default Constructor

                            location = 0;
                            batra = 0;
                    //      Data_usage = 0;
                    //      Battery_time = 0;
                         	screen_size = 0;
						    multi_screen = 0.0;
                            Sms = 0;
                            mobile_size = 0;
							display_area = 0;
		      	 ifstream infile;
			 	 string str;
                 infile.open ("mobile.txt", ios::in);
                 while(!infile.eof()) // To get you all the lines.
                 {
	              getline(infile,str); // Saves the line in STRING.
	              cout<<str<<"\n"; // Prints our STRING.
                 }
	             infile.close();
                    }

                void get_screen_size(){
                cout <<"\nEnter the screen size \n 1)\t4 inch \n2)\t5 inch : " ;
				cin >> screen_size;
						ofstream outfile1("test.txt", ios::out | ios::app);
				    	outfile1 << "\nThe screen size of the mobile is : "<< screen_size<<"inches\n";
				    	outfile1.close();
				    	for(int i=0;i<100;i++)
				    	{
				    		cout << '\a';
				    		delay(100);
						}
				    	
				}
				void get_multi_screen(){
				cout << "\nIs the mobile multi screen compatible \n1) 1 = NO: \n2) 2 = YES : " ;
				cin >> multi_screen;
						ofstream outfile1("test.txt", ios::out | ios::app);
				    	outfile1 << "\nIs the mobile multi screen " <<1<<" = NO and "<<2<<" = YES: "<< multi_screen<<"\n";
				    	outfile1.close();
				    	cout << '\a';
				}
            	void get_location(){
				cout <<"\nIs the location service On = 1 and Off = 0 : ";
				cin >> location;
						ofstream outfile1("test.txt", ios::out | ios::app);
				    	outfile1 << "\nIs the location service On = "<<1<<" and Off = "<<0<<" : "<< location<<"\n";
				    	outfile1.close();
      			}
			  	void get_batra(){
      			cout << "\nThe battery rating in mApH : ";
				cin >> batra;
						ofstream outfile1("test.txt", ios::out | ios::app);
				    	outfile1 << "\nThe battery rating in mApH : "<< batra<<"\n";
				    	outfile1.close();

			 	}
			 	void get_Filesize(){
			 	cout << "\nThe file size in Mb : ";
				cin >> Filesize;
						ofstream outfile1("test.txt", ios::out | ios::app);
				    	outfile1 << "\nThe file size in Mb : "<< Filesize<<"\n";
				    	outfile1.close();

				 }
				void get_downspeed(){
				cout << "\nEnter the down load speed in Kbps : ";
				cin >> downspeed;

						ofstream outfile1("test.txt", ios::out | ios::app);
				    	outfile1 << "\nEnter the down load speed in Kbps : "<< downspeed<<"\n";
				    	outfile1.close();
				}

				string currentDateTime() {

				    time_t     now = time(0);		//function to get current time
				    struct tm  t;
				    char       ti[80];
				    t = *localtime(&now);
				    strftime(ti, sizeof(ti), "%b-%d-%Y-time-%X", &t);
				    return ti;
				}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					void display_time()
					{
//						initwindow(400,400);
//						while (!kbhit())
                            for(int i=0;i<1;i++)
                            {
//								    Sleep(1000);
//								    system("Cls");
									std::cout << "\ncurrent Time = " << currentDateTime() << std::endl;
								   getchar();  // wait for keyboard input

								}

					}
////////////////////////////////////////////////////////////////////////////////////////
					void get_calculator()
					{
					double a , b, result;
				    string opra;
					 int o ;
				    cout<<"\nCalculator\nEnter two operands for calcuation : ";
				    cout <<"\nNumber 1 : ";
					cin>>a;
					cout<<"\nNumber 2 : ";
					cin>>b;
					cout <<" 1 = addition : \n 2 = substraction : \n 3 = multiply : \n 4 = division : ";
				    cin>>o;

				    switch(o) {
				        case 1:
				            cout<<"\t\t"<<a<<" + "<<b<<" = "<<a+b<<endl;
				            result = a+b;
							opra = '+';
							break;
				        case 2:
				            cout<<"\t\t"<<a<<" - "<<b<<" = "<<a-b<<endl;
				            result = a-b;
				            opra = '-';
				            break;
				        case 3:
				            cout<<"\t\t"<<a<<" * "<<b<<" = "<<a*b<<endl;
				            result = a*b;
				            opra = '*';
				            break;
				        case 4:
						    cout<<"\t\t"<<a<<" / "<<b<<" = "<<a/b<<endl;
				            result = a/b;
				            opra = '/';
				            break;
				        default:
				            /* If operator is other than +, -, * or /, error message is shown */
				            printf("Error! operator is not correct");
				            break;

				    		}

				    	ofstream outfile1("test.txt", ios::out);
				    	outfile1 << setw(1)<< a <<setw(2)<<opra<< setw(2)<< b<<setw(2)<<"="<<setw(2)<<result<<"\n";
				    	outfile1.close();
					}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////   DISPLAY		 /////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				void get_display_graphics()
				{
					    initwindow(1400,1400);
					    setcolor(GREEN);
					
					if((screen_size == 5 )&&(multi_screen == 1))
					{
 				////////////////////////////////////////////////////////   5inch display
 					   circle(576,200-130,10);		//front speaker
					    circle(400+50,200-130,15);	//front camera
					    circle(576,500+130,05);		//led
				// sharp edge
						line(400,200-150,400,500+150);		//left
						line(400,200-150,500+250,200-150);	//top
						line(400,500+150,500+250,500+150);	//bottom
						line(500+250,200-150,500+250,500+150);	//right

				/// rounded edge
						line(400,210-150,400,490+150);	//left vertical
						arc(410,210-150,90,180,10);
						line(410,200-150,490+250,200-150);	//top
						arc(490+250,210-150,0,90,10);
						line(410,500+150,490+250,500+150);	//bottom
						arc(410,490+150,180,270,10);
						line(500+250,210-150,500+250,490+150);	//right vertical
						arc(490+250,490+150,270,360,10);

				//display
						line(410,210-150+30,410,490+150-20);	//left
						line(410,210-150+30,490+250,210-150+30);	//top
						line(410,490+150-20,490+250,490+150-20);	//bottom
						line(490+250,210-150+30,490+250,490+150-20);//right
/////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
					}
				else if((screen_size == 5 )&&(multi_screen == 2))
					{
					 	////////////////////////////////////////////////////////   5inch display
 					   circle(576,200-130,10);		//front speaker
					    circle(400+50,200-130,15);	//front camera
					    circle(576,500+130,05);		//led
				// sharp edge
						line(400,200-150,400,500+150);		//left
						line(400,200-150,500+250,200-150);	//top
						line(400,500+150,500+250,500+150);	//bottom
						line(500+250,200-150,500+250,500+150);	//right

				/// rounded edge
						line(400,210-150,400,490+150);	//left vertical
						arc(410,210-150,90,180,10);
						line(410,200-150,490+250,200-150);	//top
						arc(490+250,210-150,0,90,10);
						line(410,500+150,490+250,500+150);	//bottom
						arc(410,490+150,180,270,10);
						line(500+250,210-150,500+250,490+150);	//right vertical
						arc(490+250,490+150,270,360,10);

				//display
						line(410,210-150+30,410,490+150-20);	//left
						line(410,210-150+30,490+250,210-150+30);	//top
						line(410,490+150-20,490+250,490+150-20);	//bottom
						line(490+250,210-150+30,490+250,490+150-20);//right
				// split display
				//	setcolor(RED);						//top
						setfillstyle(1, 4);
						bar(411, 90+1, 740, 310+45);
				//	setcolor(RED);						//bottom
						setfillstyle(1, 15);
						bar(411, 310+45, 740,620);
					}

				else if((screen_size == 4 )&&(multi_screen == 1))
					{

				//////////////////////////////////////////////////////////////  4inch display

				circle(576-50,200-130+75,10);		//front speaker
			    circle(400+50,200-130+75,15);	//front camera
			    circle(576-50,500+130,05);		//led
				// sharp edge
				line(400,200-150+75,400,500+150);		//left
				line(400,200-150+75,500+250-100,200-150+75);	//top
				line(400,500+150,500+250-100,500+150);	//bottom
				line(500+250-100,200-150+75,500+250-100,500+150);	//right
				/// rounded edge
				line(400,210-150+75,400,490+150);	//left vertical
				arc(410,210-150+75,90,180,10);
				line(410,200-150+75,490+250-100,200-150+75);	//top
				arc(490+250-100,210-150+75,0,90,10);
				line(410,500+150,490+250-100,500+150);	//bottom
				arc(410,490+150,180,270,10);
				line(500+250-100,210-150+75,500+250-100,490+150);	//right vertical
				arc(490+250-100,490+150,270,360,10);

				//display
				line(410,210-150+30+75,410,490+150-20);	//left
				line(410,210-150+30+75,490+250-100,210-150+30+75);	//top
				line(410,490+150-20,490+250-100,490+150-20);	//bottom
				line(490+250-100,210-150+30+75,490+250-100,490+150-20);//right
					}
				else if((screen_size == 4 )&&(multi_screen == 2))
					{

				//////////////////////////////////////////////////////////////  4inch display

				circle(576-50,200-130+75,10);		//front speaker
			    circle(400+50,200-130+75,15);	//front camera
			    circle(576-50,500+130,05);		//led
				// sharp edge
				line(400,200-150+75,400,500+150);		//left
				line(400,200-150+75,500+250-100,200-150+75);	//top
				line(400,500+150,500+250-100,500+150);	//bottom
				line(500+250-100,200-150+75,500+250-100,500+150);	//right
				/// rounded edge
				line(400,210-150+75,400,490+150);	//left vertical
				arc(410,210-150+75,90,180,10);
				line(410,200-150+75,490+250-100,200-150+75);	//top
				arc(490+250-100,210-150+75,0,90,10);
				line(410,500+150,490+250-100,500+150);	//bottom
				arc(410,490+150,180,270,10);
				line(500+250-100,210-150+75,500+250-100,490+150);	//right vertical
				arc(490+250-100,490+150,270,360,10);

				//display
				line(410,210-150+30+75,410,490+150-20);	//left
				line(410,210-150+30+75,490+250-100,210-150+30+75);	//top
				line(410,490+150-20,490+250-100,490+150-20);	//bottom
				line(490+250-100,210-150+30+75,490+250-100,490+150-20);//right
				// split display
				//	setcolor(RED);						//top
				setfillstyle(1, 4);
				bar(411, 166, 640, 310+(166/2));
				//	setcolor(RED);						//bottom
				setfillstyle(1, 15);
				bar(411, 310+(166/2), 640,620);
				//37 unit hori = 6
				//38 unit vertical = 6

					}

/////////////////////////////////////////////////////////////
					while (!kbhit()){
					delay(2000);
  				  	}
   				 	closegraph();

   				 	system ("PAUSE");

				}
				///////////////////////////////////////////////////////////////////////
				//////////////////////////////////////////////////////////////////////
// ~mobile(){};

};

int main() {

////////////////////////////////////////////////////
mobile m;
//m.mobile(4);
m.get_batra();
//m.display_batra();
m.get_downspeed();
//m.display_downspeed();
m.get_Filesize();
//m.display_Filesize();
m.get_location();
m.get_calculator();
//m.display_location();
m.get_multi_screen();
//m.display_multi_screen();
m.get_screen_size();
//m.display_screen_size();

m.display_time();

m.get_display_graphics();

return 0;

}
