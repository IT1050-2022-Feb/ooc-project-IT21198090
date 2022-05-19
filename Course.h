#include<iostream>
#include<string>
#include "Fees.h"
#include "Subject.h"
#define SIZE 5
//#include<cstring>
using namespace std;

class Course{
  private: 
      string Cname;
		  string Specialization;
		  string CID;
		  int NoOfSub;
      Fees *f[3];
      Subject *s[SIZE];

  public:
      //defaul constructor
      Course(){
        cout<<"Default constructor called"<<endl;
        Cname="Null";
        Specialization="Null";
        CID="CRxxx";
        NoOfSub=00;

        f[0]= new Fees();
        f[1]= new Fees();
        f[2]= new Fees();

        for(int l=0;l<SIZE; l++){
          s[l]= new Subject();
        }
      }

      //parmeterized constructor
      Course(string csname,string spec, string csid, int sno){
        cout<<"Default constructor called-para"<<endl;
        Cname=csname;
        Specialization=spec;
        CID=csid;
        sno=NoOfSub;
      }
      //member functions
      void SetData(string name, string spcln, string ID,int no){
          Cname= name;
          Specialization=spcln;
          CID=ID;
          NoOfSub=no;
      }

      void DisplayData(){
          cout<<"Course Datails- Course class"<<endl;
          for(int i=0; i<3; i++){
            f[i]-> DisplayCourseFee();
          }
      }
};
