#include <iostream>
#include<string>
#include<cstring>
using namespace std;

class Fees{
  private:
      double Cdiscount;
      double Cfee;
      double Sfee;
      double Ffee;

  public: 
      Fees(){
        Cdiscount=00.00;
        Cfee=00.00;
        Sfee=00.00;
        Ffee=00.00;
      }

      Fees(double dis, double crf, double sbf){
        Cdiscount= dis;
        Cfee=crf;
        Sfee=sbf;
      }

      void SetFee(double disc, double cf, double sf){
        Cdiscount= disc;
        Cfee=cf;
        Sfee=sf;  
      }

      double calcFee(){
        double FinalFee= Cfee- Cdiscount;
        //cout<<"Final Course Fee: "<<FinalFee<<endl;
        Ffee=FinalFee;
        return Ffee; 
      };

      void DisplayCourseFee(){
        cout<<"Course Fee- "<<Ffee << endl;
      }

      void GetSFee(){
        cout<<"Subject Fee: "<<endl;
      }

      ~Fees(){
        cout<<"Deleting the Fees class"<<endl;
      }
};