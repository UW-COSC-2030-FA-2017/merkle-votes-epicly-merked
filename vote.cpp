#include <stdio.h>

#include "pMT.h"

#include "bTREE.h"

#include <iostream>

#include <fstream>

#include <string>

#include <sstream>

using namespace std;



int main(int argc, char **argv)

{

	pMT tester(1);

	string data, time;

	ifstream myfile ("my_test.txt");
	if (myfile.is_open())
    {
        while ( myfile >> data >> time)

      {

      	istringstream buffer(time);

      	int t = 0;

      	buffer >> t;

        cout << tester.insert(data, t) << endl;

      }

      myfile.close();

    }

    else cout << "error opening file";



    cout << tester;
    }

	return 0;

}
