#include <iostream>
using namespace std;
int prodsum(int a,int b);


int main()
{
    float v = 0;//voltage
    int nos,nop = 0;//number of resistors in series and parallel
    double rst,rpt = 0;//total resistance, series and parallel

    //n is loop counter might rename to count
    int cnt=0;

 // Prompt user for Voltage
 cout<<"Enter the voltage of the circuit: " ;
 // Read voltage
 cin>>v;
 //Promt user for number of series and parallel
 //Read number of series and parallel
 // Error check resistor cannot = 0 or negative
 // Error check must have resistors
 cout<<"Enter number of series resistors: ";
 cin>>nos ;
 cout<<"Enter number of parallel resistors: ";
 cin>>nop ;
 if (nop<=0 && nos<=0)
 {
     cout<< "Error must have at least one resistor";
     return 0;
 }
 cout<<"test";

 double rp[nop] ;
 double rs[nos] ;

while (cnt<nop)
 {

     cout<<"Enter RP"<<cnt+1<< ": " ;
     cin>>rp[cnt];
     cnt+=1;

 }
 //reset counter
cnt = 0;
  while (cnt<nos)
 {
     cout<<"Enter RS"<<cnt+1<< ": "  ;
     cin>>rs[cnt];
     cnt+=1;
 }
 //reset counter
 cnt= 0;

//calculate parallel using prodsum in a loop
rpt = rp[0];
while(cnt<nop)
{
    rpt = prodsum(rpt,rp[cnt+1]);
    cout<<rpt ;
    cnt+=1;


}
cnt=0;


 // calculate series sum  using a loop
 for (cnt=0;cnt<nos;cnt++)
 {
    rst+=rs[cnt];
 }

 //Add parallel and series to get total R

 //calculate current use I=V/R

 //output current and TtotalR









return 0;
}
int prodsum(int a,int b)
{
    int c=(a*b)/(a+b);
    return c ;
}

