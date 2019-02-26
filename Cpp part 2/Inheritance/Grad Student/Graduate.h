//grad.h
//The Grad class for the Graduate 

#ifndef GRAD_H
#define GRAD_H

class grad:public underGrad
{
     public:
	grad(string = "", string = "", string = "", string = "",
		double = 0.0, double = 0.0, double = 0.0, string = "",
		sStat = NONE, bool = false, double = 0.0);
	bool getGAstatus() const;
	double getGradFees() const;
	void setGAstatus(bool);
	void setGradFees(double);
	void showStudent();
     private:
	bool isGA;
	double gradFees;
	//Change the double to int for complior errors
	static const int MAX_FEES = 1000.0;
};

#endif
