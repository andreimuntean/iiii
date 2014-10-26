#include <cstring>
#include <iostream>

using namespace std;

void read (char input[4096], unsigned &length)
{
    cin >> input;
    length = strlen(input);
}

bool isValid(char input[4096], unsigned length)
{
    for (unsigned i = 0; i < length; ++i)
    {
        if (input[i] != 'i')
	{
	    return false;
	}
    }
    
    return true;
}

int main()
{
    char input[4096];
    unsigned length;
    
    read(input, length);
    
    while (isValid(input, length))
    {
        switch (length % 4)
	{
	    case 0: cout << "1" << endl; break;
	    case 1: cout << "i" << endl;; break;
	    case 2: cout << "-1" << endl; break;
	    case 3: cout << "-i" << endl; break;
	}
	
	read(input, length);
    }
    
    return 0;
}