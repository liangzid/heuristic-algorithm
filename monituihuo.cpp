#include "zhinengyouhua.h"
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


Monituihuo::Monituihuo(double init_tem,int num_of_diedaii,int t)
{
	init_temprature=init_tem;
	num_of_diedai=num_of_diedaii;
	t_nochange=t;
	atio=0.95;
}
Monituihuo::Monituihuo(double init_tem,int num_of_diedaii,int t,double atio)
{
	init_temprature=init_tem;
	num_of_diedai=num_of_diedaii;
	t_nochange=t;
	this->atio=atio;
}
void Monituihuo::random_produce_vector()
{
	vector<int> result;
	//this where needs some process which depends on concrete problem, so i donnot write here.
	this->vector_now=result;
}

void Monituihuo::produce_new_solution()
{
	vector<int> neww;
	//here also need some process;
	this->vector_new=neww;
}

double Monituihuo::cost_function(vector<int> vec)
{
	//here also need some process;
	return 0;
}

bool Monituihuo::is_OK()
{
	double zelta;
	zelta=this->cost_function(this->vector_new)-cost_function(this->vector_now);
	double P;
	if (zelta<0)
		return 1;
	else 
	{
		P=exp(-zelta/tem);
		if(P>((rand()%1001)/10000.0)) //generate rand number in [0,1].
			return 1;

	}
	return 0;

}

vector<int> Monituihuo::getbestvec()
{
	return vector_best_now;
}
double Monituihuo::getbestvalue()
{
	return value_best_now;
}
double Monituihuo::gettem()
{
	return tem;
}
int Monituihuo::getdiedaitime()
{
	return num_of_diedai;
}

void Monituihuo::tem_decrease()
{
	//you change here for more thing you want. for example:
	//this.tem -=this.atio;
	//also you can change the value of atio in Monituihuo::Monituihuo();or you can write it in the construct function para.

	this->tem *= this->atio;

}