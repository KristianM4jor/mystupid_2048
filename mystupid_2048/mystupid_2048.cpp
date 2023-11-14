// mystupid_2048.cpp: Definuje vstupní bod pro aplikaci.
//

#include "mystupid_2048.h"
#include <Windows.h>


int gametrix[4][4] = {
						{0, 0, 0, 0},
						{0, 0, 0, 0},
						{0, 0, 0, 0},
						{0, 0, 0, 0},
};

class Block {

private:

	int value = 0;

public:

	Block()
	{
		//generator
		value = 2;// příklad defaultní hodnoty
	}

	void merge(Block& other)
	{
		if (value == other.value) {
			value *= 2;
			other.value = 0;
		}
	}
	
	int getValue() const {
		return value;
	}
	// případně přidat setter pro změnu hodnoty
	void setValue(int newValue) {
		value = newValue;
	}

};
int main()
{
	bool up_prev = false;
	bool down_prev = false;
	bool left_prev = false;
	bool right_prev = false;


	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		if (up_prev == false)
		{
			//do stuff
			up_prev = true;
		}
	}
	else
	{
		up_prev = false;
	}

	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		if (down_prev == true)
		{
			// do stuff
			down_prev = true;
		}

	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		if (left_prev == true)
		{
			// do stuff
			left_prev = true;
		}
	}

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		if (right_prev == true)
		{
			// do stuff
			right_prev = true;
		}
	}



	return 0;
}
