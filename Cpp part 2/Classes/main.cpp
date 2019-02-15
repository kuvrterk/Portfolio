/*
Descrption: Have a class by the name of particleType and creating a plane 
where the particle would move around in the plane. If it hits a non-zero or the wall (-1)
it would decesrse. Until it reaches zero

Input: The test valus, the rea; values, and user values
Output: A plane where the particle would move around 
	 Driver program
*/

#include "particleType.h"

using namespace std;

int main()
{
        // declare object of type particleType
	particleType pTest;
        string str;
        int x,y;

	// error testing
	// Test for bad obstacle energy
	pTest.setMaxObstacleEnergy(-10);
	pTest.setMaxObstacleEnergy(0);
	pTest.setMaxObstacleEnergy(501);

	// Good obstacle values
	pTest.setMaxObstacleEnergy(500);
	pTest.setMaxObstacleEnergy(5);

	// test bad box size
	pTest.setBoxSize( 0, 0 );
	pTest.setBoxSize( 1, 1 );
	pTest.setBoxSize( 26, 26);

	// Test good box sizes
	pTest.setBoxSize( 2, 2 );
	pTest.setBoxSize( 3, 3);
    	pTest.setBoxSize( 7,7);

	//bad obstacle energy
	pTest.setMaxObstacleEnergy(0);
	pTest.setMaxObstacleEnergy(15);
	pTest.setMaxObstacleEnergy(100);

	// pause so that error test is visable
    	cout << "enter <cr> continue:";
    	while (cin.get() != '\n' );

	
    	// Large box test
    	cout << "Testing large box, (25,25)" << endl;
    	pTest.setBoxSize(25, 25);
    	pTest.setMaxObstacleEnergy(15);
    	pTest.setOutputMode(false);
    	pTest.setParticleEnergy(2500);
    	pTest.setTimeDelay( 100 );
    	pTest.startParticle();
    	cout << "Finished large box test" << endl;

    // pause so that results of large box tests
    // are visable
    cout << "enter <cr> continue:";
    while (cin.get() != '\n' );

    // Medium box test
    particleType pTest2;
    pTest2.setBoxSize( 10, 10);
    pTest2.setOutputMode(true);
    pTest2.setMaxObstacleEnergy(15);
    pTest2.setParticleEnergy( 500 );
    pTest2.startParticle();
    // pause so that results of medium box tests
    // are visable
    cout << "Finished medium box test" << endl;
    cout << "enter <cr> continue:";
    while (cin.get() != '\n' );


    // small box test
    particleType pTest3;
    pTest3.setBoxSize( 5, 3);
    pTest3.setOutputMode(true);
    pTest3.setMaxObstacleEnergy(15);
    pTest3.setParticleEnergy( 100 );
    pTest3.startParticle();
    // pause so that results of small box tests
    // are visable

    cout << "Finished small box test" << endl;
    cout << "enter <cr> continue:";
    while (cin.get() != '\n' );


    // Interactive box size
    cout<< "enter box size x y: ";
    cin >> x >> y;

    // interactive box test
    particleType pTest4;
    pTest4.setBoxSize( x, y);
    pTest4.setOutputMode(true);
    pTest4.setMaxObstacleEnergy(15);
    pTest4.setParticleEnergy( 100 );

	// if the box is large set the particle energy higher.
    if ( x > 10 or y >10)
         pTest4.setParticleEnergy( x*y*5 );

    pTest4.startParticle();
}

