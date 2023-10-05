#include <bits/stdc++.h>
using namespace std;
int main()
{
using namespace std;
system("CLS");
int n,x,q,amt1,amt2,amt3,amt4,amt5,amt6,total;
float total1;
int amts1,amts2,amts3,amts4,amtx1,amtx2,amtx3,amtx4,amtx5;
int amtp1,amtp2,amtp3,amtp4,amtp5;
int amtb1,amtb2,amtb3,amtb4;
int amtd1,amtd2,amtd3,amtd4;
int amtbv1,amtbv2,amtbv3,amtbv4;
int q1,q2,q3,q4,q5;
cout<<"\n\t\t\t\tRESTAURANT MENU\n\n\n\t\t\t";
for (int i=0;i<12;i++)
	cout<<"-";
for (int j=0;j<9;j++)
	cout<<"*";
for (int h=0;h<12;h++)
	cout<<"-";
cout<<"\n\n\n\t\t\t\tWELCOME TO Route 66\n\n\n\t\t\t";
for (int i=0;i<12;i++)
	cout<<"-";
for (int j=0;j<9;j++)
	cout<<"*";
for (int h=0;h<12;h++)
	cout<<"-";
cin.get();
system("CLS");
menu:
cout<<"\n\n\t\t\t"; 
for (int i=0;i<12;i++)
cout<<"-";
for (int j=0;j<9;j++)
cout<<"*";
for (int h=0;h<12;h++)
cout<<"-";
cout<<"\t\t\t\t\t\t";
cout<<"\n\t\t\t\t      MENU\n\n\t\t\t";
for (int i=0;i<12;i++)
cout<<"-";
for (int j=0;j<9;j++)
cout<<"*";
for (int h=0;h<12;h++)
cout<<"-";

cout<<"\n\t\t\t1.Starters";
cout<<"\n\t\t\t2.Soups and pastas";
cout<<"\n\t\t\t3.Pizzas";
cout<<"\n\t\t\t4.Burritos";
cout<<"\n\t\t\t5.Desert";
cout<<"\n\t\t\t6.Beverages";
cout<<"\n\t\t\t7.Exit";
cout<<"\n\t\t\t8.Bill";
cout<<"\nEnter your choice: ";
cin>>n;
system("CLS");
switch(n)
{
	case 1:char ch;
	       do{
		 cout<<"\n\t\t\t\t        STARTERS";
		 cout<<"\n\t\t\t1.Veg rolls........................50";
		 cout<<"\n\n\t\t\t2.Veg lollipop.....................40";
		 cout<<"\n\n\t\t\t3.French fries.....................45";
		 cout<<"\n\n\t\t\t4.Paneer69.........................69";
		 cout<<"\n\n\n\t\tEnter your dish: ";
		 cin>>x;
		 if(x>0 && x<=4)
		 goto st;
		 else
		 cout<<"\n\t\tPlease enter a valid number";
		 st:  switch(x)
		 {
		 case 1: cout<<"\n\t\tEnter quantity";
		 cin>>q1;
		 amts1=50*q1;
		 cout<<"\n\t\tAmount= "<<amts1;
		 break;
		 case 2: cout<<"\n\t\tEnter quantity";
		 cin>>q2;
		 amts2=40*q2;
		 cout<<"\n\t\tAmount= "<<amts2;
		 break;
		 case 3:  cout<<"\t\tEnter quantity";
		 cin>>q3;
		 amts3=45*q3;
		 cout<<"\n\t\tAmount= "<<amts3;
		 break;
		 case 4:  cout<<"\t\tEnter quantity";
		 cin>>q4;
		 amts4=69*q4;
		 cout<<"\n\t\tAmount= "<<amts4;
		 break;
		 default : ;
		 }
		 cout<<"\n\t\tDo you want to order more:-";
		 cin>>ch;
		 system("CLS");
		 }
		 while(ch=='Y'||ch=='y');
		 amt1=amts1+amts2+amts3+amts4;
		 system("CLS");
		 goto menu;
		 cout<<"\nTotal amt for starters="<<amt1;


	case 2:  char ch2;
	       do{
		cout<<"\n\t\t\t        SOUPS AND PASTAS";
		 cout<<"\n\t\t1.Sweet corn.......................80";
		 cout<<"\n\n\t\t2.Manchow..........................85";
		 cout<<"\n\n\t\t3.Cream of Broccoli................95";
		 cout<<"\n\n\t\t4.Lasagna.........................200";
		 cout<<"\n\n\t\t5.Arabatia/Alfredo/Alpesto........150";
		 cout<<"\n\n\n\t\tEnter your dish:";
		 cin>>x;
		 if(x>0 && x<=5)
		 {
		  goto sp;
		 }
		 else
		 cout<<"\n\t\tPlease enter a valid number!";
		 sp: switch(x)
		 {
		 case 1: cout<<"\n\t\tEnter quantity";
		 cin>>q1;
		 amtx1=80*q1;
		 cout<<"\n\t\tAmount= "<<amtx1;
		 break;
		 case 2: cout<<"\n\t\tEnter quantity";
		 cin>>q2;
		 amtx2=85*q2;
		 cout<<"\n\t\tAmount= "<<amtx2;
		 break;
		 case 3:  cout<<"\t\tEnter quantity";
		 cin>>q3;
		 amtx3=95*q3;
		 cout<<"\n\t\tAmount= "<<amtx3;
		 break;
		 case 4:  cout<<"\t\tEnter quantity";
		 cin>>q4;
		 amtx4=200*q4;
		 cout<<"\n\t\tAmount= "<<amtx4;
		 break;
		 case 5:   cout<<"\t\tEnter quantity";
		 cin>>q5;
		 amtx5=150*q5;
		 cout<<"\n\t\tAmount= "<<amtx5;
		 default : ;
		 }

		 cout<<"\n\t\tDo you want to order more:-";
		 cin>>ch2;
		 system("CLS");
		 }
		 while(ch2=='Y'||ch2=='y');
		 amt2=amtx1+amtx2+amtx3+amtx4+amtx5;
		 system("CLS");
		 goto menu;

		 cout<<"The total for soups and pastas is"<<amt2;

	case 3:  char ch3;
	       do{
		cout<<"\n\t\t\t        PIZZA";
		 cout<<"\n\t\t1.Margherita.......................60";
		 cout<<"\n\n\t\t2.Pecado..........................140";
		 cout<<"\n\n\t\t3.7 Cheese........................145";
		 cout<<"\n\n\t\t4.Mylta power.....................200";
		 cout<<"\n\n\t\t5.Bootcamp........................300";
		 cout<<"\n\n\n\t\tEnter your dish: ";
		 cin>>x;
		  if(x>0 && x<=5)
		 {
		   goto piz;
		 }
		 else
		 cout<<"\n\t\tPlease enter a valid number!";
		 piz: switch(x)
		 {
		 case 1: cout<<"\n\t\tEnter quantity";
		 cin>>q1;
		 amtp1=60*q1;
		 cout<<"\n\t\tAmount= "<<amtp1;
		 break;
		 case 2: cout<<"\n\t\tEnter quantity";
		 cin>>q2;
		 amtp2=140*q2;
		 cout<<"\n\t\tAmount= "<<amtp2;
		 break;
		 case 3:  cout<<"\n\t\tEnter quantity";
		 cin>>q3;
		 amtp3=145*q3;
		 cout<<"\n\t\tAmount= "<<amtp3;
		 break;
		 case 4:  cout<<"\n\t\tEnter quantity";
		 cin>>q4;
		 amtp4=200*q4;
		 cout<<"\n\t\tAmount= "<<amtp4;
		 break;
		 case 5:   cout<<"\n\t\tEnter quantity";
		 cin>>q5;
		 amtp5=300*q5;
		 cout<<"\n\t\tAmount= "<<amtp5;
		 default : ;}
		 cout<<"\n\t\tDo you want to order more:-";
		 cin>>ch3;
		 system("CLS");
		 }
		 while(ch3=='Y'||ch3=='y');
		 amt3=amtp1+amtp2+amtp3+amtp4+amtp5;
		 system("CLS");
		 goto menu;
		 cout<<"\nThe total for pizza is= "<<amt3;

	case 4:  char ch4;
	       do{
		 cout<<"\n\t\t\t        BURRITOS";
		 cout<<"\n\t\t1.Supremo.........................150";
		 cout<<"\n\n\t\t2.Cheese max.......................90";
		 cout<<"\n\n\t\t3.Special.........................115";
		 cout<<"\n\n\t\t4.Paneer mexicana..................95";
		 cout<<"\n\n\n\t\tEnter your dish: ";
		 cin>>x;
		  if(x>0 && x<5)
		 {
		    goto bur;
		 }
		 else
		 cout<<"\n\t\tPlease enter a valid number!";
		  bur:  switch(x)
		 {
		 case 1: cout<<"\n\t\tEnter quantity";
		 cin>>q1;
		 amtb1=150*q1;
		 cout<<"\n\t\tAmount= "<<amtb1;
		 break;
		 case 2: cout<<"\n\t\tEnter quantity";
		 cin>>q2;
		 amtb2=90*q2;
		 cout<<"\n\t\tAmount= "<<amtb2;
		 break;
		 case 3:  cout<<"\t\tEnter quantity";
		 cin>>q3;
		 amtb3=115*q3;
		 cout<<"\n\t\tAmount= "<<amtb3;
		 break;
		 case 4:  cout<<"\n\t\tEnter quantity";
		 cin>>q4;
		 amtb4=95*q4;
		 cout<<"\n\t\tAmount= "<<amtb4;
		 break;
		 default : ;
		 }
		 cout<<"\n\t\tDo you want to order more:-";
		 cin>>ch4;
		 system("CLS");
		 }
		 while(ch4=='Y'||ch4=='y');
		 amt4=amtb1+amtb2+amtb3+amtb4;
		 system("CLS");
		 goto menu;
		 cout<<"\nThe total for burritos is= "<<amt4;

	case 5:  char ch5;
	       do{
		 cout<<"\n\t\t\t         DESERT";
		 cout<<"\n\t\t1.Brownie..........................50";
		 cout<<"\n\n\t\t2.chocolate ice cream..............60";
		 cout<<"\n\n\t\t3.vanilla ice cream................50";
		 cout<<"\n\n\t\t4.Brownie with ice cream...........75";
		 cout<<"\n\n\n\t\tEnter your dish: ";
		 cin>>x;
		  if(x>0 && x<5)
		 {
		  goto des;
		 }
		 else
		 cout<<"\n\t\tPlease enter a valid number!";
		  des:  switch(x)
		 {
		 case 1: cout<<"\nEnter quantity";
		 cin>>q1;
		 amtd1=50*q1;
		 cout<<"\n\t\tAmount= "<<amtd1;
		 break;
		 case 2: cout<<"\n\t\tEnter quantity";
		 cin>>q2;
		 amtd2=60*q2;
		 cout<<"\n\t\tAmount= "<<amtd2;
		 break;
		 case 3:  cout<<"\n\t\tEnter quantity";
		 cin>>q3;
		 amtd3=50*q3;
		 cout<<"\n\t\tAmount= "<<amtd3;
		 break;
		 case 4:  cout<<"\n\t\tEnter quantity";
		 cin>>q4;
		 amtd4=75*q4;
		 cout<<"\n\t\tAmount= "<<amtd4;
		 break;
		 default : ;
		 }
		 cout<<"\n\t\tDo you want to order more:-";
		 cin>>ch5;
		 system("CLS");
		 }
		 while(ch5=='Y'||ch5=='y');
		 amt5=amtd1+amtd2+amtd3+amtd4;
		 system("CLS");
		 goto menu;
		 cout<<"\nThe total for desert is= "<<amt5;


	case 6: char ch6;
	       do{
	cout<<"\n\t\t\t        BEVERAGES";
		 cout<<"\n\t\t1.Mint mojito........................80";
		 cout<<"\n\n\t\t2.Chocolate milkshake.............135";
		 cout<<"\n\n\t\t3.Pepsi/Coke/Fanta/Sprite..........45";
		 cout<<"\n\n\t\t4.Mineral Water....................15";
		 cout<<"\n\n\n\t\tEnter your dish: ";
		 cin>>x;
		  if(x>0 && x<5)
		 {
		  goto bev;
		 }
		 else
		 cout<<"\n\t\tPlease enter a valid number!";
		  bev:  switch(x)
		 {
		 case 1: cout<<"\nEnter quantity";
		 cin>>q1;
		 amtbv1=80*q1;
		 cout<<"\n\t\tAmount= "<<amtbv1;
		 break;
		 case 2: cout<<"\n\t\tEnter quantity";
		 cin>>q2;
		 amtbv2=135*q2;
		 cout<<"\n\t\tAmount= "<<amtbv2;
		 break;
		 case 3:  cout<<"\n\t\tEnter quantity";
		 cin>>q3;
		 amtbv3=45*q3;
		 cout<<"\n\t\tAmount= "<<amtbv3;
		 break;
		 case 4:  cout<<"\n\t\tEnter quantity";
		 cin>>q4;
		 amtbv4=15*q4;
		 cout<<"\n\t\tAmount= "<<amtbv4;
		 break;
		 default : ;
		 }
		 cout<<"\n\t\tDo you want to order more:-";
		 cin>>ch6;
		 system("CLS");
		 }
		 while(ch6=='Y'||ch6=='y');
		 amt6=amtbv1+amtbv2+amtbv3+amtbv4;
		 system("CLS");
		 goto menu;
		 cout<<"\nThe total for beverages is= "<<amt6;
		 break;
	case 7: exit(0);
	break;
	case 8: cout<<"\namount for starters:"<<amt1;

		cout<<"\namount for soups and pastas:"<<amt2;

		cout<<"\namount for pizzas:"<<amt3;

		 cout<<"\namount for burritos:"<<amt4;

		 cout<<"\namount for desert:"<<amt5;

		 cout<<"\namount for beverages:"<<amt6;
		 break;
	default:  cout<<"\n\t\tPlease enter a valid number.";


}

return 0;
}
