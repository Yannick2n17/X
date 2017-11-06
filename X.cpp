#include <iostream>
using namespace std;

string QuestionsMarks(const char* array)
{
	bool b = false;
	for (int i = 0; i < 22 - 4; i++)
	{
		if ((array[i] >= '1') && (array[i] <= '9'))
		{
			int c = 0;
			for (int j = i + 1; j < 22; j++)
			{
				if ((array[j] >= '1') && (array[j] <= '9') && (atoi(array + i) + atoi(array + j) == 10))
				{
					if (c == 3)
						b = true;
					else
						return "false";
				}
				if (array[j] == '?')
					++c;
			}
			c = 0;
		}
	}
	return b ? "true" : "false";
}

int main(int argc, char **argv) { 
    
  cout << QuestionsMarks(gets(stdin)) << endl;
	
  return 0;  
} 
