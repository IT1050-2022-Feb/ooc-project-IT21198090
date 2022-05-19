#include<iostream>
#include<string>
#include<cstring>
#define size2 25
#include "Sal_Report.h"
using namespace std;

class Salary{
	private:
		string PayStat;
		string date;
		Sal_Report *ptr[size2];
		
	public:
		Salary(){
			PayStat="NotPaid";
			date="Today";
			
			for(int i=0;i<size2;i++){
				ptr[i]= new Sal_Report(0,0,0);
				
			}
		}
		
		Salary(string stat, string pd){
			PayStat=stat;
			date=pd;
		}
		
		void setStatus(string pstat, string pday){
			PayStat=pstat;
			date=pday;
		}
		
		void DisplyStat(){
			cout<<"This is Salary class"<<endl;
          	for(int i=0; i<size2; i++){
            	ptr[i]-> DisplaySalReport();
          	}
		}
};
