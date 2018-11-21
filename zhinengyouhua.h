#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

/*============================================================
Note: This file is the Class of Monituihuo althothgm by Metropolis in 1956.
You should know: this file is not complete beacuse somewhere You Must have 
the concrete thing like cost function and so on.
--------------------------------------------------------------
How to use it? YOU CAN TRY:

//initlize
Monituihuo alth1(10000,10000,5);
alth1.vector_now=Monituihuo.random_produce_vector();
bool RUN=1;
int j=0;

while(RUN)
{
	// temprature not change
	for(int i=0;i<alth1.t_nochange;i++)
	{
		Monituihuo.produce_new_solution();
		if(Monituihuo.is_OK(alth1.vec_now,neww,alth1.tem))
			alth1.vector_now=alth1.vector_new;

		// exit if to many time no change;
		;

	}

	//temprature decrease
	alth1.tem_decrease();
	j++;
	if (j>alth1.num_of_diedai||alth1.tem<1)
	{
		RUN=0;
		alth1.final_vector=alth1.vector_now;
		alth1.final_value=alth1::cost_function(alth1.final_vector);
	}

}
*/

#ifndef MONITUIHUO_H
#define MONITUIHUO_H
//declare a class to this algorithm.
class Monituihuo()
{
public:
	vector<int> vector_now;
	vector<int> final_vector;
	vector<int> vector_new;
	double value_now;
	double final_value;
	
	int num_of_diedai;
	string tem_method="NOTSET";
	double init_temprature;
	
	double tem;
	double atio;
	int t_nochange;

    //construt function
	Monituihuo(double init_tem,int num_of_diedaii,int t);
    Monituihuo(double init_tem,int num_of_diedaii,int t,double atio);
	void random_produce_vector();
	void produce_new_solution();
	
	double cost_function(vector<int> vec);
	
	bool is_OK();

	vector<int> getbestvec();
	double getbestvalue();
	double gettem();
	int getdiedaitime();

	void tem_decrease();

private:
	
	
};

#endif