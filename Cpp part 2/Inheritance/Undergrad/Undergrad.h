//underGrad.h
//This is the class for the underGrad

#ifndef	UNDERGRAD_H
#define UNDERGRAD_H
	
enum sStat { PROBATION, GOOD, SPECIAL, NONE };	

using namespace std;

class underGrad: public student
{
    public:		
	underGrad(string = "", string = "", string = "", string = "", double = 0.0, double = 0.0, double = 0.0, string = "",
			sStat = NONE);
	string getAdvisor() const;
	sStat getStatus() const;
	void setAdvisor(string);
	void setStatus(sStat);
	void showStudent();
    private:
	string advisor;
	sStat sStatus;
};

#endif
