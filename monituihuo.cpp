#include "zhinengyouhua.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
/*============================================================
Note: This file is the Class of Monituihuo althothgm by Metropolis in 1956.
You should know: this file is not complete beacuse somewhere You Must have 
the concrete thing like cost function and so on.
--------------------------------------------------------------
How to use it? YOU CAN TRY:

//initlize
Monituihuo alth1(10000,10000,5);
alth1.vector_best_now=alth1::random_produce_vector();
bool RUN=1;
int j=0;

while(RUN)
{
	// temprature not change
	for(int i=0;i<alth1.t_nochange;i++)
	{
		vector<int> neww=alth1::produce_new_solution(alth1.vector_now);
		if(alth1::is_OK(alth1.vec_now,neww,alth1.tem))
			alth1.vec_now=neww;

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


class Monituihuo()
{
public:
	vector<int> vector_now;
	vector<int> final_vector;
	double value_now;
	double final_value;
	int num_of_diedai;
	string tem_method="NOTSET";
	const double init_temprature;
	double tem;
	int t_nochange;


	Monituihuo(double init_tem,int num_of_diedaii,int t);


	vector<int> random_produce_vector();
	vector<int> produce_new_solution(std::vector<int> now, /*other parameter*/ );
	double cost_function(vector<int> vec);
	bool is_OK(vector<int> vec_now,vector<int> vec_new, double tem);
	vector<int> getbestvec();
	double getbestvalue();
	double gettem();
	int getdiedaitime();

	double tem_decrease();

private:
	
	
};

Monituihuo::Monituihuo(double init_tem,int num_of_diedaii,int t)
{
	init_temprature=init_tem;
	num_of_diedai=num_of_diedaii;
	t_nochange=t;
}
vector<int> random_produce_vector()
{
	vector<int> result;
	int x;
	for(int i=0;i<num_to_init;i++)
	{
		x=rand_num();
		result.push_back(x)
	}

	return ;
}

vector<int> produce_new_solution(vector<int> now)
{
	vector<int> neww;

	return neww;

}

double cost_function(vector<int> vec)
{
	return 0;
}

bool is_OK(vector<int> now,vector<int> neww, double tem)
{
	double zelta;
	zelta=cost_function(neww)-cost_function(now);
	double P;
	if (zelta<0)
		return 1;
	else 
	{
		P=exp(-zelta/tem);
		if(P>((rand()%1001)/10000.0))
			return 1;

	}
	return 0;

}

vector<int> getbestvec()
{
	return vector_best_now;
}
double getbestvalue()
{
	return value_best_now;
}
double gettem()
{
	return tem;
}
int getdiedaitime()
{
	return num_of_diedai;
}

