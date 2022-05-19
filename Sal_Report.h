#include<iostream>
#include<string>
#include<cstring>
//#include "Instructor.h"
using namespace std;


class Sal_Report{
	private:
		int RID;
		string Iid;
		double sal;
		double bonus;
		double finsal;
		
	public:
		Sal_Report(int rpid,double psal, double pbon){
			RID=rpid;
			Iid="Inst0000";
			sal= psal;
			bonus=pbon;
			finsal=00.00;
		}
		
		void AddData(int id,/*Instructor *p*/double ps, double bon){
			RID= id;
			//Iid->DisplayInstID();
			sal= ps;
			bonus=bon;
		}
		
		double calcSal(){
			int final= sal+bonus;
			finsal=final;
			return finsal;
		}
		
		void DisplaySalReport(){
			cout<<"This is salary report"<<endl;
		}
		
		~Sal_Report(){
			cout<<"Deleting Sal report"<<endl;
		}
};
